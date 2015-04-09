#include <iostream>
#include <string>
#include <memory>

#include <zmq.hpp>

#include "proto/Messages.pb.h"

class MyRpcChannel : public google::protobuf::RpcChannel
{
private:
	std::shared_ptr<zmq::context_t> m_zmqContext;
	std::shared_ptr<zmq::socket_t> m_zmqSocket;

public:
	MyRpcChannel(const std::string &connectString)
	{
		m_zmqContext = std::make_shared<zmq::context_t>(1);
		m_zmqSocket = std::make_shared<zmq::socket_t>(*m_zmqContext, ZMQ_REQ);
		m_zmqSocket->connect(connectString.c_str());
	}

	virtual void CallMethod(
		const google::protobuf::MethodDescriptor* method, 
		google::protobuf::RpcController* controller, 
		const google::protobuf::Message* request, 
		google::protobuf::Message* response, 
		google::protobuf::Closure* done) override
	{
		std::cout << "sending message type " << request->GetDescriptor()->full_name() << std::endl;
	}
};

int main(int argc, char **argv)
{
	std::cout << "Client running" << std::endl;

	zmq::context_t context(1);
	zmq::socket_t socket(context, ZMQ_REQ);
	socket.connect("tcp://localhost:5555");

	MyRpcChannel channel("tcp://localhost:5555");
	Messages::PingService::Stub pingService(&channel);

	Messages::PingRequest pingRequest;
	pingRequest.set_text("Ping");

	Messages::PingReply pingReply;

	pingService.Ping(nullptr, &pingRequest, &pingReply, nullptr);
	pingService.Ping2(nullptr, &pingRequest, &pingReply, nullptr);

	while (true)
	{
		Messages::PingRequest requestMessage;
		requestMessage.set_text("Hello Server");

		zmq::message_t request(requestMessage.ByteSize());
		requestMessage.SerializeToArray(request.data(), request.size());
		socket.send(request);

		zmq::message_t reply;
		socket.recv(&reply);

		Messages::PingReply replyMessage;
		replyMessage.ParseFromArray(reply.data(), reply.size());

		std::cout << "Received reply: " << replyMessage.text() << std::endl;

		Sleep(1000);
	}

	return 0;
}


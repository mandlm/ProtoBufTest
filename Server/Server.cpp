#include <iostream>
#include <string>
#include <memory>

#include <zmq.hpp>

#include "proto/Messages.pb.h"

class MyPingService : public Messages::PingService
{
public:
	void Ping(
		::google::protobuf::RpcController* controller, 
		const ::Messages::PingRequest* request, 
		::Messages::PingReply* response, 
		::google::protobuf::Closure* done) override
	{

	}

	void Ping2(
		::google::protobuf::RpcController* controller, 
		const ::Messages::PingRequest* request, 
		::Messages::PingReply* response, 
		::google::protobuf::Closure* done) override
	{

	}
};

class MyRpcServer
{
private:
	std::shared_ptr<zmq::context_t> m_zmqContext;
	std::shared_ptr<zmq::socket_t> m_zmqSocket;

	MyPingService m_pingService;

public:
	MyRpcServer(const std::string &bindString)
	{
		m_zmqContext = std::make_shared<zmq::context_t>(1);
		m_zmqSocket = std::make_shared<zmq::socket_t>(*m_zmqContext, ZMQ_REQ);
		m_zmqSocket->bind(bindString.c_str());
	}

	void Run()
	{
		while (true)
		{

		}
	}
};

int main(int argc, char **argv)
{
	std::cout << "Server running" << std::endl;

	MyRpcServer server("tcp://*:5555");
	server.Run();

	zmq::context_t context(1);
	zmq::socket_t socket(context, ZMQ_REP);
	socket.bind("tcp://*:5555");

	while (true)
	{
		zmq::message_t request;
		socket.recv(&request);

		Messages::PingRequest requestMessage;
		requestMessage.ParseFromArray(request.data(), request.size());

		std::cout << "Received request: " << requestMessage.text() << std::endl;

		Messages::PingReply replyMessage;
		replyMessage.set_text("Hello Client");

		zmq::message_t reply(replyMessage.ByteSize());
		replyMessage.SerializeToArray(reply.data(), reply.size());
		socket.send(reply);
	}

	return 0;
}


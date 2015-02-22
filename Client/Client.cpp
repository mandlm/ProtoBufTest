#include <iostream>
#include <string>

#include <zmq.hpp>

#include "proto/request.pb.h"
#include "proto/reply.pb.h"

int main(int argc, char **argv)
{
	std::cout << "Client running" << std::endl;

	zmq::context_t context(1);
	zmq::socket_t socket(context, ZMQ_REQ);
	socket.connect("tcp://localhost:5555");

	while (true)
	{
		Messages::Request requestMessage;
		requestMessage.set_text("Hello Server");

		zmq::message_t request(requestMessage.ByteSize());
		requestMessage.SerializeToArray(request.data(), request.size());
		socket.send(request);

		zmq::message_t reply;
		socket.recv(&reply);

		Messages::Reply replyMessage;
		replyMessage.ParseFromArray(reply.data(), reply.size());

		std::cout << "Received reply: " << replyMessage.text() << std::endl;

		Sleep(1000);
	}

	return 0;
}
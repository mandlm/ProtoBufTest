#include <iostream>
#include <string>

#include <zmq.hpp>

#include "proto/request.pb.h"
#include "proto/reply.pb.h"

int main(int argc, char **argv)
{
	std::cout << "Server running" << std::endl;

	zmq::context_t context(1);
	zmq::socket_t socket(context, ZMQ_REP);
	socket.bind("tcp://*:5555");

	while (true)
	{
		zmq::message_t request;
		socket.recv(&request);

		Messages::Request requestMessage;
		requestMessage.ParseFromArray(request.data(), request.size());

		std::cout << "Received request: " << requestMessage.text() << std::endl;

		Messages::Reply replyMessage;
		replyMessage.set_text("Hello Client");

		zmq::message_t reply(replyMessage.ByteSize());
		replyMessage.SerializeToArray(reply.data(), reply.size());
		socket.send(reply);
	}

	return 0;
}
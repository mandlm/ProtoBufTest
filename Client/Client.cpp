#include <iostream>
#include <string>

#include "proto/client.pb.h"

int main(int argc, char **argv)
{
	std::cout << "Client running" << std::endl;

	std::string bufferString;

	client::ClientInfo clientInfoIn;

	clientInfoIn.set_name("Herbert");
	clientInfoIn.SerializeToString(&bufferString);

	client::ClientInfo clientInfoOut;
	clientInfoOut.ParseFromString(bufferString);

	std::cout << "read: " << clientInfoOut.name() << std::endl;

	return 0;
}
#include <iostream>
#include "Server.h"

Server::Server(const unsigned short port) :
	m_port(port),
	m_ipAddress(sf::IpAddress::getPublicAddress())
{
	auto error = m_socket.connect(m_ipAddress, m_port);
	if (error == sf::TcpSocket::Status::Error)
	{
		std::cout << sf::IpAddress::getLocalAddress() << '\n';
		std::cout << error << '\n';
		std::cout << "Connection error" << std::endl;
	}
	else if (error == sf::TcpSocket::Status::Done)
	{
		std::cout << "Connection Success!\n";
	}

	std::cout << "Server Started!\n";

	m_listener.listen(m_port);
	m_listener.accept(m_socket);
}

void Server::Update()
{
	char buffer[1024];
	std::size_t receivedSize;
	m_socket.receive(buffer, sizeof(buffer), receivedSize);
	if (receivedSize > 0)
	{
		std::cout << buffer << std::endl;
	}
}
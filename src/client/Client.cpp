#include "Client.h"

#include <iostream>

Client::Client(std::string userName, const unsigned short port) :
	m_name(std::move(userName)),
	m_ipAddress("73.76.77.99")
{
	std::cout << "Connecting... (This make take a while)\n";

	if (m_socket.connect(m_ipAddress, port) == sf::TcpSocket::Status::Error)
	{
		std::cout << "Connection error" << std::endl;
	} else
	{
		const std::string confirmationMessage{ m_name + " has connected on port: " + std::to_string(m_socket.getLocalPort())};
		Send(confirmationMessage);
	}
	std::cout << "Connected, you can now send messages!\n";
}

void Client::Update()
{
	std::string text;
	std::getline(std::cin, text);
	if (!text.empty())
	{
		Send(m_name + ": " + text);
	}
}

void Client::Send(const std::string& message)
{
	sf::Packet packet;
	packet << message;
	if(m_socket.send(packet) == sf::TcpSocket::Status::Error)
	{
		std::cout << "Error occured when sending the message." << std::endl;
	}
}

void Client::Receive()
{
	sf::Packet packet;
	std::string message;

	m_socket.receive(packet);
	packet >> message;

	std::cout << message << std::endl;
}
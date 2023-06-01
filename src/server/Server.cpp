#include <iostream>
#include "Server.h"

Server::Server(const unsigned short port) :
	m_port(port),
	m_ipAddress(sf::IpAddress::getPublicAddress())
{
	m_listener.listen(m_port);
	selector.add(m_listener);

	// auto error = m_socket.connect(m_ipAddress, m_port);
	// if (error == sf::TcpSocket::Status::Error)
	// {
	// 	std::cout << sf::IpAddress::getLocalAddress() << '\n';
	// 	std::cout << error << '\n';
	// 	std::cout << "Connection error" << std::endl;
	// }
	// else if (error == sf::TcpSocket::Status::Done)
	// {
	// 	std::cout << "Connection Success!\n";
	// }

	// std::cout << "Server Started!\n";
}

void Server::Update()
{
	if (selector.wait())
	{
		// Make sure the listener is ready
		if (selector.isReady(m_listener))
		{
			// If the listener is ready then there must be pending connection
			auto client = std::make_shared<sf::TcpSocket>();
			if (m_listener.accept(*client) == sf::Socket::Done)
			{
				std::cout << "Found Client" << '\n';
				clients.push_back(client);
				
				// Add the client to the selector so we get notification if they send something
				selector.add(*client);
			}
		}
		else // There is not a new incoming connection
		{
			// Test all of the other sockets (clients)
			for (auto client : clients)
			{
				if (selector.isReady(*client))
				{
					// Client has sent data
					sf::Packet packet;
					if (client->receive(packet) == sf::Socket::Done)
					{
						std::string message;
						packet >> message;
						std::cout << message << '\n';
					}
				}
			}
		}
	}
}
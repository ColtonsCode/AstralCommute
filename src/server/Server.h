#pragma once
#include <SFML/Network.hpp>
#include <vector>

class Server
{
public:
	explicit Server(unsigned short port);
	void     Update();

private:
	unsigned short m_port;
	sf::TcpSocket m_socket;
	sf::TcpListener m_listener;
	sf::IpAddress m_ipAddress;

	// Multi client stuff
	std::vector<std::shared_ptr<sf::TcpSocket>> clients;
	sf::SocketSelector selector;
	
};
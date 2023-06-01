#include <iostream>
#include <thread>
#include "Client.h"


int main()
{
    const int port = 4777;

    std::cout << "Enter a username: ";
    std::string name;
    std::cin >> name;
	
    Client client(name, port);
    while(true)
    {
        client.Update();
    }
    return 0;
}
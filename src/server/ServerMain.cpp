#include <iostream>

#include "Server.h"

int main()
{
    Server server(4777);
	while(true)
	{
		server.Update();
	}
}
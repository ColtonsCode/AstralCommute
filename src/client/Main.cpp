// #include <iostream>
// #include <thread>
// #include "Client.h"


// int main()
// {
//     const int port = 4777;

//     std::cout << "Enter a username: ";
//     std::string name;
//     std::cin >> name;
	
//     Client client(name, port);
//     while(true)
//     {
//         client.Update();
//     }
//     return 0;
// }

#include <TGUI/TGUI.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>

#include <iostream>

bool runExample(tgui::Gui& gui)
{
    try
    {   
        //auto chatbox = tgui::ChatBox::create();
        auto chatbox = tgui::RichTextLabel::create();

        

        chatbox->setSize("100%", "100%");
        chatbox->setPosition("65%", "50%");

        

        gui.add(chatbox);
    }
    catch (const tgui::Exception& e)
    {
        std::cerr << "TGUI Exception: " << e.what() << std::endl;
        return false;
    }

    // Everything went correctly
    return true;
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "TGUI window");

    window.setFramerateLimit(240);

    tgui::Gui gui(window);
    if (!runExample(gui))
        return EXIT_FAILURE;

    // gui.mainLoop();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            gui.handleEvent(event);

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        gui.draw();
        window.display();
    }

    return EXIT_SUCCESS;
}
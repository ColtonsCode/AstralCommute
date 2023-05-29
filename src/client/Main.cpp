#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <vector>
#include <iostream>

// Global Variables
int gScreenWidth = 1200;
int gScreenHeight = 800;

class BouncingBall
{
public:
    BouncingBall(float x, float y) :
        x(x),
        y(y),
        xVel(0.0f),
        yVel(0.0f),
        radius(75.0f),
        circleShape(sf::CircleShape(radius)),
        gravityAccel(1000.0f)
    {
        circleShape.setOrigin(radius, radius);
        circleShape.setFillColor(sf::Color::Red);
        circleShape.setPosition(x, y);
    }

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void bounce();

private:
    float x, y;
    float xVel, yVel;
    float radius;
    float gravityAccel;
    sf::CircleShape circleShape;
};

void BouncingBall::update(float deltaTime)
{   

    if (y + radius > gScreenHeight)
        bounce();
    else
        yVel += gravityAccel * deltaTime;

    x += xVel * deltaTime;
    y += yVel * deltaTime;

    circleShape.setPosition(x, y);
}

void BouncingBall::draw(sf::RenderWindow& window)
{
    window.draw(circleShape);
}

void BouncingBall::bounce()
{
    yVel *= -1;
}

int main(void)
{
    sf::RenderWindow window(sf::VideoMode(gScreenWidth, gScreenHeight), "My window");

    window.setFramerateLimit(60);

    // Clock for calculating time to draw and update
    sf::Clock timer;

    std::vector<BouncingBall> balls;
    
    balls.push_back(BouncingBall{gScreenWidth / 2.0f, gScreenHeight / 2.0f});

    // run the program as long as the window is open
    while (window.isOpen())
    {
        sf::Time elapsed = timer.restart();

        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                {
                    window.close();
                }
            }
            else if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    balls.push_back(BouncingBall{(float)event.mouseButton.x, (float)event.mouseButton.y});
                }
            }
        }

        window.clear(sf::Color::White);
        

        // Update the physics and draw all bouncing balls
        float dt{elapsed.asMilliseconds() / 1000.0f};
        for (BouncingBall& ball : balls)
        {
            ball.update(dt);
            ball.draw(window);
        }

        window.display();
    }

    return 0;
}
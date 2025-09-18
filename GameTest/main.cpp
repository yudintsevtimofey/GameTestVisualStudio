
#include "source.h"
#include "Entity.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 1080, 720 }), "SFML works!");
    std::vector<Entity> executionList;
    executionList.push_back(Entity());
    executionList.push_back(Entity(100, sf::Color::Red, 400, 400));
    executionList.push_back(Entity(100, sf::Color::Green, 200, 200));
    executionList.push_back(Entity(100, sf::Color::Yellow, 100, 400));

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        for (auto& e : executionList) {
            e.Update();
            window.draw(e.getShape());
        }
        window.display();

        
    }
}
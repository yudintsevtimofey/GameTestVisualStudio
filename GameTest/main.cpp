
#include "source.h"
#include "Entity.h"
#include "BattleBackground.h"
#include "Camera.h"
#include "MainMenu.h"
#include "Tower.h"

int main()
{

   

   

    sf::RenderWindow window(sf::VideoMode({ 1920, 1080 }), "GameTest", sf::Style::Default, sf::State::Fullscreen);
    std::vector<Entity> executionList;
    executionList.push_back(Entity());
    executionList.push_back(Entity(100, sf::Color::Red, 400, 400));
    executionList.push_back(Entity(100, sf::Color::Green, 200, 200));
    executionList.push_back(Entity(100, sf::Color::Yellow, 100, 400));
    MainMenu test(window.getSize());

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
        test.Update(window);

        
        
        window.display();

        
    }
}
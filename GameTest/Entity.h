#pragma once


class Entity
{
private:
	float s = 100;
	float xPos = 0;
	float yPos = 0;
	sf::CircleShape body;
	//Setup values for character
	void Start(sf::Color c) {
		body.setRadius(s);
		body.setFillColor(c);
		body.setPosition({ xPos,yPos });
	}
	
public:
	
	Entity() {
		Start(sf::Color::Blue);
	}
	Entity(int size, sf::Color color, int x, int y) {
		s = size;
		xPos = x;
		yPos = y;
		Start(color);
	}
	
	//Constant updates for character
	void Update() {
		/**/if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
			xPos -= 1.f;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
			xPos += 1.f;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
			yPos -= 1.f;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
			yPos += 1.f;
		}
		/**/
		
		
		body.setPosition({ xPos,yPos });
	}
	auto getShape() {
		return body;
	}
	
};



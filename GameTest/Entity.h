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
	
	auto getShape() {
		return body;
	}
	//Constant updates for character
	void Update() {
		
	}
};



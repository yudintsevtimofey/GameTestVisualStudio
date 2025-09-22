#pragma once
class MainMenu
{
private:
	sf::RectangleShape background;
	sf::Texture playButtonTexture;
	sf::RectangleShape playButton;
	sf::RectangleShape settingsButton;
	sf::RectangleShape exitButton;


public:

	//Initializing the Main Menu screen, setting all values for buttons and background

	//Numbers for y size and position of buttons follows math a = windowSize/26, where 'a' is distance between buttons and each button is '3*a'
	//The fact that I use this math is why I hate myself

	//Numbers for x size and position are unique for each button, but still scale with windowSize

	MainMenu(sf::Vector2u windowSize) {
		background.setFillColor(sf::Color::Cyan);
		background.setPosition({ 0,0 });
		background.setSize({ float(windowSize.x), float(windowSize.y) });

		//playButton.setFillColor(sf::Color::Red);
		playButtonTexture.loadFromFile("./textures/MainMenuPlayButton.png");
		playButton.setTexture(&playButtonTexture);
		playButton.setPosition({ float(windowSize.x)/2, float(windowSize.y)/26 * 14});
		playButton.setSize({ float(windowSize.x)/10, float(windowSize.y)/26 * 3 });

		settingsButton.setFillColor(sf::Color::Red);
		settingsButton.setPosition({ float(windowSize.x)/2, float(windowSize.y) / 26 * 18});
		settingsButton.setSize({ float(windowSize.x)/10, float(windowSize.y)/26 * 3 });

		exitButton.setFillColor(sf::Color::Red);
		exitButton.setPosition({ float(windowSize.x)/2, float(windowSize.y) / 26 * 22});
		exitButton.setSize({ float(windowSize.x)/10, float(windowSize.y)/26 * 3 });
	}

	void Update(sf::RenderWindow &w) {
		background.setSize({ float(w.getSize().x), float(w.getSize().y)});
		playButton.setSize({ float(w.getSize().x) / 10, float(w.getSize().y) / 26 * 3 });
		settingsButton.setSize({ float(w.getSize().x) / 10, float(w.getSize().y) / 26 * 3 });
		exitButton.setSize({ float(w.getSize().x) / 10, float(w.getSize().y) / 26 * 3 });
		w.draw(background);
		w.draw(playButton);
		w.draw(settingsButton);
		w.draw(exitButton);
	}

};


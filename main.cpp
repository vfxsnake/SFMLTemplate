#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Start Template");

	while (window.isOpen())
	{

		window.clear();
		window.display();
	}

	return 0;
}
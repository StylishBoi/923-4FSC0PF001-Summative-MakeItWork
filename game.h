#ifndef GAME_H
#define GAME_H

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include "invader.h"
#include "projectile.h"

class Game
{
private:
	sf::RenderWindow window_;
	sf::Clock clock_;

	Projectile projectile;

public:
	Game();
	void loop();
};

#endif

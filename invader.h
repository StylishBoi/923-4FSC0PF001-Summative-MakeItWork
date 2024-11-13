#ifndef INVADER_H
#define INVADER_H

#include <SFML/Graphics.hpp>

#include "entity.h"

constexpr float KInvaderMargin = 150;
constexpr float KInvaderSpacing = 20;
constexpr float kInvadersNbLines = 15;

class Invader : public Entity
{
private:
	sf::RectangleShape invader;

public:
	Invader();

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

#endif
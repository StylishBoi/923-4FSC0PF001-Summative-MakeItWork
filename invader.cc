#ifndef INVADER_CC
#define INVADER_CC

#include "invader.h"
#include <iostream>

#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Texture.hpp>

Invader::Invader()
{
	sf::RectangleShape({ 15, 15 });
	invader.setOrigin(7.5, 7.5);
	invader.setPosition(KInvaderMargin + x * KInvaderSpacing, invader_line_altitude);
	invader.setFillColor(sf::Color::Red);

}

void Invader::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(sprite_, states);
}

#endif
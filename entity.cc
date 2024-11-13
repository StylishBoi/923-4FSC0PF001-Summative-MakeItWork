#include "entity.h"

void Entity::Explosion() const {
	for (auto& i : invaders)
	{

		if (i.getFillColor() == sf::Color::Black)
			continue;

		for (auto& p : projectiles)
		{

			if (p.getFillColor() == sf::Color::Black)
				continue;

			if (i.getGlobalBounds().intersects(p.getGlobalBounds()))
			{
				// Boom ----------------------------------------------------------------------------
				p.setFillColor(sf::Color::Black);
				i.setFillColor(sf::Color::Black);
			}
		}
	}
}
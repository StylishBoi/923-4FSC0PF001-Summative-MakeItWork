#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>

#include "entity.h"

const sf::Vector2f kProjectilesSpeed(0.f, -32.45636365f);

class Projectile : public Entity
{
private:
	sf::RectangleShape projectile;

public:
	Projectile(sf::Vector2f player);

	void SetPosition(sf::Vector2u direction);
	sf::Vector2f GetPosition() const { return getPosition(); }

	void Move(std::vector<Projectile> projectiles);

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

#endif
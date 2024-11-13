#include "projectile.h"

#include <SFML/Graphics/RenderTarget.hpp>
#include <iostream>

constexpr float kCooldown_limit_ = 0.25f;

Projectile::Projectile(sf::Vector2f player)
{
	sf::RectangleShape({ 3, 60 });
	// Define the projectiles
	projectile.setOrigin(1.5, 5);
	projectile.setPosition(player.x, player.y - 25);
	projectile.setFillColor(sf::Color::White);
}

void Projectile::SetPosition(sf::Vector2u position)
{
	projectile.setPosition(sf::Vector2f(position));
}

void Projectile::Move(std::vector<Projectile> projectiles)
{
	for (auto& p : projectiles)
	{
		p.setPosition(p.GetPosition() + kProjectilesSpeed);
	}
}

void Projectile::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(projectile, states);
}
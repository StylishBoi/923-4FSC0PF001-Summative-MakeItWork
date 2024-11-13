#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics/Sprite.hpp>

class Entity : public sf::Drawable, protected sf::Transformable
{
public:
	void Explosion() const;

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

#endif

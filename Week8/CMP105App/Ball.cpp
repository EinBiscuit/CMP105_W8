#include "Ball.h"

Ball::Ball()
{
	setSize(sf::Vector2f(50, 50));
	setVelocity(130, 560);
}

void Ball::update(float dt)
{
	if (getPosition().x < 0)								 { setPosition(0, getPosition().y);									setVelocity(-velocity.x, velocity.y); };
	if (getPosition().x + getSize().x > window->getSize().x) { setPosition(window->getSize().x-getSize().x, getPosition().y);	setVelocity(-velocity.x, velocity.y); };
	if (getPosition().y < 0)								 { setPosition(getPosition().x, 0);									setVelocity(velocity.x, -velocity.y); };
	if (getPosition().y + getSize().y > window->getSize().y) { setPosition(getPosition().x,window->getSize().y-getSize().y);    setVelocity(velocity.x, -velocity.y); };

	move(velocity*dt);
}
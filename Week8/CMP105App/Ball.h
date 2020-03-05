#pragma once
#include "Framework/GameObject.h"
class Ball :
	public GameObject
{
public:
	sf::Window* window;

	Ball();
	void setWindow(sf::Window* H) { window = H; };
	void update(float dt);

};


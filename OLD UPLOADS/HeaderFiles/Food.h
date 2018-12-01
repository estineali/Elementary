#pragma once 
#include <stdio.h>
#include <iostream>
#include <string>

struct Position
{
	float x;
	float y;
	Position(float p_x, float p_y)
	{
		x = p_x;
		y = p_y;
	}
};

class Food
{
private:
	int Health;
	std::string type_of_food;
	bool is_active;
	//Sprite;
public:
	Food();
	~Food();
	void CollisionDetection();
	void set_active(bool);
	bool get_active();
	Position get_position();
};
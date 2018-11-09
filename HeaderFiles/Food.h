#pragma once 
#include <stdio.h>
#include <string.h>
#include <iostream>


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
	std::string Type_food;
	//Sprite;
	bool is_active;
public:
	Food();
	void CollisionDetection();
	void set_active(bool);
	bool get_active();
	Position get_position();
	~Food();
	
	
};

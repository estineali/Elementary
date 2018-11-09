#pragma once 
#include <stdio.h>


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

class Bullet
{
private:
	bool is_active;
	Position pos;
	//sprite
public:
	Bullet();
	~Bullet();
	void CollisionDetection();
	void set_active(bool);
	bool get_active();
	Position get_position();
	void Move();
	
};

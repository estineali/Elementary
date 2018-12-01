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


class Buttons
{
private:
	// include Sprite
	bool is_pressed;
	bool is_active;
	Position Pos;
public:
	Buttons();
	~Buttons();
	void set_pressed(bool);
	bool get_pressed();
	void set_position(Position);
	void set_position(float x_p, float y_p);
	Position get_position();
	bool get_active();
	void set_active(bool);
};
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


class Screen
{
private:
	//Screen image?
	Position pos;
	bool is_active;
	std::string type_of_screen;
public:
	Screen();
	~Screen();
	void set_position(Position);
	void set_position(float x_p, float y_p);
	Position get_position();
	bool get_active();
	void set_active(bool);
	void set_screen_type(std::string);
	std::string get_screen_type();

	
};

#pragma once 
#include <stdio.h>
#include "../HeaderFiles/Atom.h"

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

class Enemy : public Atom
{
private:
	Position pos;
	bool is_active;
	float speed; 
public:
	Enemy();
	~Enemy();
	bool get_active();
	void set_active(t_f);
	float get_speed();
	void set_speed(float p_speed);
	Position get_pos();
	void set_position(Position p_pos);
	void move();
	bool collision();
};
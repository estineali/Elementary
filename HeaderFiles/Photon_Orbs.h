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


class Photon_Orbs
{
private:
	int points;
	Position pos;
	bool is_active;

public:
	Photon_Orbs();
	~Photon_Orbs();
	Position get_pos();
	void set_position(Position p_pos);
	bool get_active();
	void set_active(bool t_f);
	bool collision();
	void levitate();
};
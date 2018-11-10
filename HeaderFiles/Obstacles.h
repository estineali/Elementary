#pragma once
#include <stdio.h>
#include "../HeaderFiles/Atom.h"

class Obstacles : public Atom
{
private:
	int damage;
public:
	Obstacles();
	~Obstacles();
	int virtual get_damage() = 0;
	bool virtual is_colliding() = 0;
};


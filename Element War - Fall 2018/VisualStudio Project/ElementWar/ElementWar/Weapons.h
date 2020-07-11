#pragma once
#include <stdio.h>
#include <iostream>
#include "../HeaderFiles/Weapons.h"

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

class Weapons
{
private:
    Position pos;
    bool is_active;
    //sprite;
    std::string type_weapon; //primary or special weapon 
    std::string weapon_name;
    int damage;
public:
	Weapons();
	~Weapons();
	void CollisionDetection();
	void set_active(bool);
	bool get_active();
	Position get_position();
	void move();   //tentative
	
	
};
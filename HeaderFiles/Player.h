#pragma once 
#include <stdio.h>
#include <iostream>
#include <string>
#include "../HeaderFiles/Atom.h"
#include "../HeaderFiles/Prime.h"
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

class Player : public Atom, public Prime
{
private:
	Position player_position;
	int Health;
	bool can_special_weapon;
	bool is_active;
	Prime essence;
	Weapons electron_gun;
	Weapons Special_Weapon;
	int score;

public:
	Player(std::string);
	Player(const Player& ) = delete;
	~Player();
	void CollisionDetection();
	void Move();
	bool is_Alive();
	void health_boost(int);
	void set_special_weapon_ability(bool);
	void set_active(bool);
	bool get_active();
	Position get_position();
	int get_health();
	void set_health(int); 
};
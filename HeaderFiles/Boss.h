#pragma once 
#include <stdio.h>
#include "../HeaderFiles/Prime.h"
#include "../HeaderFiles/Enemy.h"
#include <iostream>
#include <string>




class Boss : public Prime, public Enemy
{
private:
	std::string name_of_boss;
	int health;
public:
	Boss();
	~Boss();
	int get_health();
	void set_health(int p_health);
	
};
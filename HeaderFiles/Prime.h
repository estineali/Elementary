#pragma once
#include <stdio.h>

class Prime
{
private:
	std::string essence;
	std::string special_weapon;

public:
	Prime(std::string essence);
	virtual ~Prime();
	void virtual move = 0;
	void virtual CollisionDetection = 0;
};

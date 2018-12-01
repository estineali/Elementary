#include <iostream>
#include "Obstacles.h"
#include "Cacti.h"


Cacti::Cacti(){
	is_active= false;
	Position Pos=0;

}
Cacti::~Cacti(){
	
}
int Cacti::get_damage(){
	return damage;
	
}
void Cacti::set_damage(){
	damage= damage-3;
}

bool Cacti::get_active(){
	return is_active;
}
void Cacti::set_position(Position){

	this->Position= Position;
}
void Cacti::set_position(float x_p, float y_p){     // discuss 
	position.x = x_p;
	position.y =y_p;
}
Position Cacti::get_position(){
	return postition;
}
bool Cacti::is_colliding()                       // discuss 
{
	
}

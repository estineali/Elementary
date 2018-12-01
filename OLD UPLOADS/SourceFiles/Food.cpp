//
//  Food.cpp
//  Element War
//
//  Created by Ali Shujjat on 07/11/2018.
//  Copyright © 2018 Ali Shujjat. All rights reserved.
//

#include "../HeaderFiles/Food.h"
#include <iostream>

Food::Food()
{

	Health=0;
	type_of_food= " ";
	is_active= true;
	
}	


Food::~Food(){
	
	
}

void Food::CollisionDetection( ){     //discuss 
}

void Food::set_active(bool is_active)
{
		this->is_active= is_active; 
	
	}
	
bool Food::get_active(){
		return is_active;
		
}

Position Food::get_position(){
		return position;
	}

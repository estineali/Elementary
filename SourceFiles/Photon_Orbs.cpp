//
//  Photon_Orbs.cpp
//  Element War
//
//  Created by Ali Shujjat on 07/11/2018.
//  Copyright © 2018 Ali Shujjat. All rights reserved.
//

#include "../HeaderFiles/Photon_Orbs.h"
#include "Obstacles.h"	
#include <iostream>
	
	
	
	Photon_Orbs::Photon_Orbs(){
		points=10;                                        //discuss 
		pos.x=0;     //for now
    pos.y=0;     //for now 
		is_active= true;
	}
	Photon_Orbs::~Photon_Orbs(){
	}
	Position Photon_Orbs::get_pos(){
		return pos;
	}
	void Photon_Orbs::set_position(Position p_pos){
			this->pos= p_pos;
	}
	bool Photon_Orbs::get_active(){
		return is_active;	
	}
	void Photon_Orbs::set_active(bool t_f){
			this->is_active= is_active;
	}
	bool Photon_Orbs::collision(){                         //discuss
		
	}
	void Photon_Orbs::levitate(){                          //discuss 
		
	}

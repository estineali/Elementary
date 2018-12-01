#include <iostream>
#include "Obstacles.h"



class Cacti : public Obstacles
{
private:
	
	bool is_active;
	Position Pos;
	//sprite?
public:
	Cacti();
	~Cacti();
	int get_damage();
	void set_damage();
	bool get_active();
	void set_position(Position);
	void set_position(float x_p, float y_p);
	Position get_position();
	bool is_colliding();
};
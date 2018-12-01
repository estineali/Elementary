#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include "LTexture.h"
#include <iostream>

struct Point
{
	float x;
	float y;

	Point()
	{
		x = 0;
		y = 0;
	}

	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	Point(const Point& point)
	{
		x = point.x;
		y = point.y;
	}
	bool operator == (Point point) //equal to operator
	{
		return (this->x == point.x && this->y == point.y);
	}
	void operator = (Point point) //assignment operator
	{
		this->x = point.x;
		this->y = point.y;
	}
	bool operator != (Point point) //not equal operator
	{
		return (this->x != point.x || this->y != point.y);
	}
	Point operator /(int divisor) //used to divide both x and y by a number
	{
		Point p;
		p.x = y / divisor;
		p.y = x / divisor;
		return p;
	}
	Point operator + (int number) //adds a number to both x and y
	{
		x += number;
		y += number;
		return *this;
	}
	Point operator - (int number) //subtracts a number from both x and y
	{
		x -= number;
		y -= number;
		return *this;
	}
};

class Character
{
private:
	Point position; //Position of the Character
	int character_value = 0; //ascii value of the Character
	int width; //width of character
	int height; //height of character
	SDL_Rect spriteClips; //clip specific to the Character
	LTexture* spriteSheetTexture; //font image
public:
	Character();
	Character(LTexture* image, float x, float y, int ascii);
	~Character();
	void Render(SDL_Renderer* gRenderer, bool debug);
	void operator = (const Character& cpy); //operator overloading for assignment operatot
};


#pragma once
#include "Screen.h"


class GameoverScreen : public Screen
{

public:
	GameoverScreen();
	GameoverScreen(std::string address, SDL_Renderer* rend);
	~GameoverScreen();
	void show();
	void hide();
	void free();
};
#pragma once
#include "Screen.h"

class MainMenu : public Screen
{

public:
	MainMenu(std::string address, SDL_Renderer* rend);
	~MainMenu();
	void show();
	void hide();
	void free();
	
};


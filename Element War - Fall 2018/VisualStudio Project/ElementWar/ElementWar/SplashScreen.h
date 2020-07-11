#pragma once
#include "Screen.h"

class SplashScreen : public Screen
{
public:
	SplashScreen();
	SplashScreen(std::string address, SDL_Renderer* rend);
	~SplashScreen();

	void show();
	void hide();
	void free();
};


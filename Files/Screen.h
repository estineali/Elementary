#pragma once
#include <iostream>
#include "LTexture.h"
#include <SDL.h>
#include <SDL_image.h>
#include <string>

class Screen
{
protected:
	LTexture screen_texture;
	std::string texture_address;
	SDL_Renderer* screen_renderer;
public:
	Screen();
	virtual ~Screen();

	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void free() = 0;
};
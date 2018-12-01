#include"GameoverScreen.h"
#include <iostream>

GameoverScreen::GameoverScreen()
{
	std::cout << "Default GameOverScreen constructor Called" << std::endl;
}

GameoverScreen::GameoverScreen(std::string address, SDL_Renderer* rend)
{
	std::cout << "Overloaded GameOverScreen constructor Called" << std::endl;
	texture_address = address;
	screen_renderer = rend;
	screen_texture.LoadFromFile(texture_address, screen_renderer);
}

GameoverScreen::~GameoverScreen()
{
	std::cout << "GameoverScreen destructor called" << std::endl;
}

void GameoverScreen::show()
{
	screen_texture.RenderTexture(0, 0, screen_renderer);
	SDL_RenderPresent(screen_renderer);
}

void GameoverScreen::hide()
{
	SDL_RenderClear(screen_renderer);
	SDL_RenderPresent(screen_renderer);
	free();
}

void GameoverScreen::free()
{
	screen_texture.Free();
}



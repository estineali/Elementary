#include "MainMenu.h"

/*-CTORS*/
MainMenu::MainMenu(std::string address, SDL_Renderer* rend)
{
	std::cout << "Overloaded main menu constructor Called" << std::endl;
	texture_address = address;
	screen_renderer = rend;
	screen_texture.LoadFromFile(texture_address, screen_renderer);
}

MainMenu::~MainMenu()
{
	std::cout << "MainMenu Destructor called" << std::endl;
	free();
}

/*METHODS*/
			//Inherited from Screen (Abstract class)
void MainMenu::show()
{
	screen_texture.RenderTexture(0, 0, screen_renderer);
	SDL_RenderPresent(screen_renderer);
}

void MainMenu::hide()
{
	SDL_RenderClear(screen_renderer);
	SDL_RenderPresent(screen_renderer);
}

void MainMenu::free()
{
	screen_texture.Free();
}

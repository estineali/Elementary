#include "SplashScreen.h"

SplashScreen::SplashScreen()
{
	std::cout << "Default SplashScreen constructor Called" << std::endl;
}

SplashScreen::SplashScreen(std::string address, SDL_Renderer* rend)
{
	std::cout << "Overloaded SplashScreen constructor Called" << std::endl;
	texture_address = address;
	screen_renderer = rend;
	screen_texture.LoadFromFile(texture_address, screen_renderer);
}

SplashScreen::~SplashScreen()
{
	std::cout << "SplashScreen Destructor Called" << std::endl;
	hide();
}

/*METHODS*/
			//Inherited from Screen (Abstract class)
void SplashScreen::show()
{
	screen_texture.RenderTexture(0, 0, screen_renderer);
	SDL_RenderPresent(screen_renderer);
	SDL_Delay(5000);
}

void SplashScreen::hide()
{
	SDL_RenderClear(screen_renderer);
	SDL_RenderPresent(screen_renderer);
	free();
}

void SplashScreen::free()
{
	screen_texture.Free();
}
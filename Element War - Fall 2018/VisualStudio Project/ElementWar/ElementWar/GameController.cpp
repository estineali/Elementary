#include "GameController.h"
#include "MainMenu.h"
#include "SplashScreen.h"
#include "GameoverScreen.h"


/*SINGLETON OBJECT*/
GameController* GameController::controller_prime = new GameController();

/*-CTORS*/
GameController::GameController()
{
	EW_window = NULL;
	EW_renderer = NULL;	
	quit_game = false;
	sprite_sheet_1 = LTexture();
}

GameController::~GameController()
{
	exit_sdl();
}

/*METHODS*/
GameController* GameController::get_instance()
{
	return controller_prime;
}

void GameController::initialize_SDL()
{
	applied_screen = "Initializing sdl";
	SDL_Init(SDL_INIT_VIDEO);
	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");
	EW_window = SDL_CreateWindow("Element War", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		screen_width, screen_height, SDL_WINDOW_SHOWN); //SDL_WINDOW_SHOWN, or the FULL SCREEN FLAG
	EW_renderer = SDL_CreateRenderer(EW_window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(EW_renderer, 0, 0, 0, 0);
	IMG_Init(IMG_INIT_PNG);
}

void GameController::splash()
{
	applied_screen = "Splash Screen";
	std::string texture_add = "Assets/Materials/SplashScreen.png";
	SplashScreen splash_screen(texture_add, EW_renderer);
	splash_screen.show();
}

void GameController::main_menu()
{
	applied_screen = "Main Menu";
	std::string texture_add = "Assets/Materials/SplashScreen.png";
	MainMenu main_menu_screen(texture_add, EW_renderer);
	main_menu_screen.show();
	while (!quit_game)
	{
		handle_events(SDL_Event());
	}
	main_menu_screen.hide();
}

std::string GameController::personality_test()
{
	applied_screen = "Personality Test";
	std::string sheet_1_address = "Assets/Materials/PersonalityTestTexture.png";
	sprite_sheet_1.LoadFromFile(sheet_1_address, EW_renderer);
	PersonalityTest test(EW_renderer, &sprite_sheet_1);
	test.on_screen();
	return test.prime_assignment();

}

void GameController::game_over()
{
	applied_screen = "Game Over";
	std::string gameover_add = "Assets/Materials/GameOver.png";
	GameoverScreen gameover_screen(gameover_add, EW_renderer);
	gameover_screen.show();
	while (!quit_game)
	{
		handle_events(SDL_Event());
	}
	gameover_screen.hide();
}

void GameController::handle_events(SDL_Event event)
{
	SDL_PollEvent(&event);
	if (event.type == SDL_QUIT)
	{
		quit_game = true;
	}
	if (event.type == SDL_KEYDOWN)
	{
		if (applied_screen == "Main Menu")
		{
			switch (event.key.keysym.sym)
			{
			case SDLK_p:
				std::cout << "Pressed p for Play " << std::endl;
				prime_essence = personality_test();
				main_menu();
				break;
			case SDLK_o:
				std::cout << "Pressed o for Options " << std::endl; break;
			case SDLK_l:
				std::cout << "Pressed l for Load " << std::endl; break;
			case SDLK_q:
				std::cout << "Pressed q for quit" << std::endl;
				game_over(); break;
			default:
				break;
			}
		}
		if (applied_screen == "Pause Menu")
		{
			switch (event.key.keysym.sym)
			{
			case SDLK_r:
				std::cout << "Pressed r for Resume " << std::endl; break;
			case SDLK_o:
				std::cout << "Pressed o for Options " << std::endl; break;
			case SDLK_l:
				std::cout << "Pressed l for Load " << std::endl; break;
			case SDLK_s:
				std::cout << "Pressed s for Save" << std::endl; break;
			case SDLK_e:
				std::cout << "Pressed e for exit" << std::endl;
				quit_game = true; break;
			default:
				break;
			}
		}
		if (applied_screen == "Game")
		{
			//ADD IN GAME EVENTS FUNCTIONALITY 
		}
		if (applied_screen == "Game Over")
		{
			switch (event.key.keysym.sym)
			{
			case SDLK_KP_ENTER:
				std::cout << "Pressed Keypad Enter for Restart " << std::endl;
				main_menu();
				break;
			case SDLK_RETURN:
				std::cout << "Pressed Enter for Restart " << std::endl;
				main_menu();
				break;
			case SDLK_q:
				std::cout << "Pressed q for Final Quit" << std::endl; 
				quit_game = true; break;
			default:
				break;
			}
		}
	}

}

void GameController::exit_sdl()
{ 
	SDL_DestroyWindow(EW_window);
	EW_window = NULL;

	SDL_DestroyRenderer(EW_renderer);
	EW_renderer = NULL;
	
	IMG_Quit();
	SDL_Quit();
}

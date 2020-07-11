/*SINGLETON CLASS*/
/*EW refers to Element War*/
#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include "PersonalityTest.h"

class GameController
{
private:
	int screen_width = 1024;
	int screen_height = 760;
	static GameController* controller_prime;
	SDL_Window* EW_window;
	SDL_Renderer* EW_renderer;
	bool quit_game;
	GameController(); 
	std::string applied_screen;
	LTexture sprite_sheet_1;
	std::string prime_essence;

public:
	~GameController();
	static GameController* get_instance();
	void initialize_SDL();
	void splash();
	void main_menu();
	std::string personality_test();
	void game_over();
	void exit_sdl();
	void handle_events(SDL_Event event);


	//Stage 1 function
	//Stage 2 Function 
	//Stage 3 Function 
	//Boss Fight Function 	
};































//#include "Player.h"
//#include "Screen.h"
//#include "Personality_test.h"
//#include "Atom.h"



//
//class GameController
//{
//	
//private:
//	bool game_over_flag;
//	bool game_paused_flag;
//	bool restart_game_flag;
//	bool sound_on;
//	float master_volume;
//	Player prime_player;
//	Screen pause_screen;
//	static GameController* controller;
//	PersonalityTest p_test;
//	std::vector<Atom> activeObjects;
//	SDL_Renderer *controller_render;
//
//	//Private constructors//
//	GameController(); //Singleton Design Pattern
//	GameController(const GameController& gc); //Copy Construction not allowed.
//
//public:
//	/*-CTORS*/
//	
//	~GameController();
//	void MainMenu(); //Show the main menu
//	void play(); // Start the game
//	void setObjects(); //Display Objects on the screen; Random Object generation; placement of objects.
//	void game_paused(); //Toggles the game_pause flag
//	void get_pause(); //Pause the game and call the pause screen
//	void restart_game(); //Sets the restart flag to True
//	void get_restart(); //Restart the game
//	void game_over(); //Set game_over_flag to True
//	void exit(); //End Game
//	void set_master_volume(float vol);
//	void mute_volume(); //Toggle Sound
//
//}

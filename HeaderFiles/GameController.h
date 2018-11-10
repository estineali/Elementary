#pragma once

#include <iostream>
#include <vector>
#include "C:\ProgrammingLibraries\SDL_Files\Include\SDL.h"
#include "C:\ProgrammingLibraries\SDL_Files\Include\SDL_Image.h"
#include "../HeaderFiles/Player.h"
#include "../HeaderFiles/Screen.h"
#include "../HeaderFiles/Personality_test.h"

class GameController
{
	
private:
	bool game_over_flag;
	bool game_paused_flag;
	bool restart_game_flag;
	bool sound_on;
	float master_volume;
	Player prime_player;
	Screen pause_screen;
	static GameController* controller;
	PersonalityTest p_test;
	std::vector<Atom> activeObjects;
	SDL_Renderer *controller_render;

	//Private constructors//
	GameController(); //Singleton Design Pattern
	GameController(const GameController& gc); //Copy Construction not allowed.

public:
	/*-CTORS*/
	
	~GameController();
	void MainMenu(); //Show the main menu
	void play(); // Start the game
	void setObjects(); //Display Objects on the screen; Random Object generation; placement of objects.
	void game_paused(); //Toggles the game_pause flag
	void get_pause(); //Pause the game and call the pause screen
	void restart_game(); //Sets the restart flag to True
	void get_restart(); //Restart the game
	void game_over(); //Set game_over_flag to True
	void exit(); //End Game
	void set_master_volume(float vol);
	void mute_volume(); //Toggle Sound

}

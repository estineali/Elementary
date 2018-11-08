#pragma once

#include <iostream>
#include <vector>

class GameController
{
	
private:
	bool game_over_flag;
	bool game_paused_flag;
	bool restart_game_flag;
	std::vector<Atom> activeObjects;
	bool sound_on;
	float master_volume;
	Player prime_player;
	Screen pause_screen;
	GameController* controller;
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
	void pause(); //Pause the game and call the pause screen
	void restart_game(); //Sets the restart flag to True
	void restart(); //Restart the game
	void game_over(); //Set game_over_flag to True
	void exit(); 
	void set_master_volume(float vol);
	void mute_volume();

}

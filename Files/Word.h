#pragma once

#include "LTexture.h"
#include "Character.h"

class Word
{
private:
	Point position; //position of word
	std::string text; //text of the word
	int wordLen;  //length of the word
	int width;   //width of the word
	int height; //height of the word
	LTexture* spriteSheetTexture;
	Character* chars; //pointer of character class(used for creating dynamic array of Characters)

public:
	Word();//Constructor 
	Word(std::string text, LTexture* image, float x, float y); //Overloaded Constructor 
	~Word(); //Destructor Constructor 
	void Render(SDL_Renderer*); //to draw the word on screen
	int get_length();
	int get_width();
	void change_word(std::string);  //changes the text of the Word
	void operator= (const Word&); //operating overloading for assignment operator.
	std::string get_text(); //used to get text of the word 
};

#pragma once
#include <iostream>
#include "Questions.h"

class PersonalityTest
{
private:
	int test_score;
	SDL_Renderer* renderer_copy;
	Questions* question_array;
	LTexture* sprite_sheet;
public:
	PersonalityTest(SDL_Renderer* rend, LTexture* sheet);
	~PersonalityTest();
	void set_questions();
	void on_screen();
	std::string prime_assignment();
	void increment_test_score(int inc_score);
	int get_test_score();
	Questions get_ques(int i);
};

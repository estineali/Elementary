#pragma once
#include <string>
#include "Word.h"
using namespace std;

class Questions
{
private:
	string the_question;
	string choice_a;
	string choice_b;
	string choice_c;
	string choice_d;

	int scr_width = 1024;
	int scr_height = 760;
	LTexture* sprite_sheet;

public:
	Questions();
	void set_texture(LTexture* sheet);
	~Questions();
	string question_get_set(string quest = "");
	string option_a(string c_a = "");
	string option_b(string c_b = "");
	string option_c(string c_c = "");
	string option_d(string c_d = "");
		//Gen Functions generate Word object from question/choice strings
	Word gen_question();
	Word gen_option_a();
	Word gen_option_b();
	Word gen_option_c();
	Word gen_option_d();

	void set_sprite_sheet(LTexture* sprite_sheet_in);
};


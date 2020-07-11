#include "Questions.h"

#include <string>
#include <iostream>


using namespace std;

/*-CTORS*/
Questions::Questions()
{
	cout << "Default Questions constructor called " << endl;
}

Questions::~Questions()
{
	sprite_sheet = NULL;
}

/*METHODS*/

void Questions::set_texture(LTexture* sheet)
{
	sprite_sheet = sheet;
}


string Questions::question_get_set(string quest)
{
	if (quest != "")
	{
		the_question = quest;
	}
	return the_question;
}

string Questions::option_a(string c_a)
{
	if (c_a != "")
	{
		choice_a = c_a;
	}
	return choice_a;
}

string Questions::option_b(string c_b)
{
	if (c_b != "")
	{
		choice_b = c_b;
	}
	return choice_b;
}

string Questions::option_c(string c_c)
{
	if (c_c != "")
	{
		choice_c = c_c;
	}
	return choice_c;
}

string Questions::option_d(string c_d)
{
	if (c_d != "")
	{
		choice_d = c_d;
	}
	return choice_d;
}
	
			//Gen functions generate word object from question/choice strings.

Word Questions::gen_question()
{
	return Word(the_question, sprite_sheet, scr_width / 2, 50);
}

Word Questions::gen_option_a()
{
	return Word(choice_a, sprite_sheet, scr_width / 2 + 50, scr_height / 2);
}

Word Questions::gen_option_b()
{
	return Word(choice_b, sprite_sheet, scr_width / 2 + 50, scr_height / 2 + 50);
}

Word Questions::gen_option_c()
{
	return Word(choice_c, sprite_sheet, scr_width / 2 + 50, scr_height / 2 + 100);
}

Word Questions::gen_option_d()
{
	return Word(choice_d, sprite_sheet, scr_width / 2 + 50, scr_height / 2 + 150);
}

void Questions::set_sprite_sheet(LTexture* sprite_sheet_in)
{
	sprite_sheet = sprite_sheet_in;
}

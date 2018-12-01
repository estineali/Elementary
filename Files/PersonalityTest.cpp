#include "PersonalityTest.h"


/*-CTORS*/
PersonalityTest::PersonalityTest(SDL_Renderer* rend, LTexture* sheet)
{
	sprite_sheet = sheet;
	renderer_copy = rend;
	question_array = new Questions[4];
	for (int i = 0; i < 4; i++)
	{
		question_array[i].set_sprite_sheet(sprite_sheet);
	}
	test_score = 0;
	set_questions();
	
}

PersonalityTest::~PersonalityTest()
{
	delete[] question_array;
}

/*METHODS*/
void PersonalityTest::set_questions()
{
	question_array[0].question_get_set("Pick a meal");
	question_array[0].option_a("A Biryani    ");
	question_array[0].option_b("B Pasta      ");
	question_array[0].option_c("C Jelly      ");
	question_array[0].option_d("D Tikka      ");

	question_array[1].question_get_set("Pick a hobby");
	question_array[1].option_a("A Gaming     ");
	question_array[1].option_b("B Sleeping   ");
	question_array[1].option_c("C Swimming   ");
	question_array[1].option_d("D Watching TV");

	question_array[2].question_get_set("Pick programming language");
	question_array[2].option_a("A Emojicode  ");
	question_array[2].option_b("B HTML       ");
	question_array[2].option_c("C Javascript ");
	question_array[2].option_d("D LOLCODE    ");

	question_array[3].question_get_set("Pick an outing spot");
	question_array[3].option_a("A Lahore     ");
	question_array[3].option_b("B Kitchen    ");
	question_array[3].option_c("C Habib      ");
	question_array[3].option_d("D Park       ");
}

void PersonalityTest::increment_test_score(int inc_score)
{
	test_score += inc_score;
}

Questions PersonalityTest::get_ques(int i)
{
	return question_array[i];
}

std::string PersonalityTest::prime_assignment()
{
	if (test_score >= 40 and test_score < 70)
	{
		return "Hydrogen Prime";
	}
	else if (test_score >= 70 and test_score < 100)
	{
		return "Nitrogen Prime";
	}
	else if (test_score >= 100 and test_score < 130)
	{
		return "Gold Prime";
	}
	else if (test_score >= 130 and test_score <= 160)
	{
		return "Carbon Prime";
	}
}

int PersonalityTest::get_test_score()
{
	return test_score;
}

void PersonalityTest::on_screen()
{
	SDL_Event events;
	bool quit = false;
	int i = 0;
	SDL_SetRenderDrawColor(renderer_copy, 0, 0, 0, 0);
	while (!quit)
	{
		while (SDL_PollEvent(&events) != 0)
		{
			if (events.type == SDL_QUIT)
			{
				quit = true;
			}
			if (events.type == SDL_KEYDOWN)
			{
				if (events.key.keysym.sym == SDLK_a)
				{
					i++;
					test_score += 10;
				}
				else if (events.key.keysym.sym == SDLK_b)
				{
					i++;
					test_score += 20;
				}
				else if (events.key.keysym.sym == SDLK_c)
				{
					i++;
					test_score += 30;
				}
				else if (events.key.keysym.sym == SDLK_d)
				{
					i++;
					test_score += 40;
				}
				else if (events.key.keysym.sym == SDLK_q)
				{
					quit = true;
				}
			}

			if (i > 3)
			{
				std::cout << prime_assignment().c_str() << std::endl;
				quit = true;
				break;
			}
			else
			{
				SDL_RenderClear(renderer_copy);
				question_array[i].gen_question().Render(renderer_copy);
				question_array[i].gen_option_a().Render(renderer_copy);
				question_array[i].gen_option_b().Render(renderer_copy);
				question_array[i].gen_option_c().Render(renderer_copy);
				question_array[i].gen_option_d().Render(renderer_copy);
				SDL_RenderPresent(renderer_copy);

			}
		}
	}
}
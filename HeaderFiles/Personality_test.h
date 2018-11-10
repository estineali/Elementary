#pragma once
#include <stdio.h>
#include "../HeaderFiles/Questions.h"


class PersonalityTest
{
private:
	Questions question_arr[4];
	int test_score();

public:
	PersonalityTest();
	~PersonalityTest();
	void set_question(int index_of_array, Questions question_object);
	int get_test_score();
	void increment_test_score(int inc_score);
	std::string prime_assignment(); 

};
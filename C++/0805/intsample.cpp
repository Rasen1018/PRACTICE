#include "intsample.h"

void IntSample::ShowScore()
{
	cout << "����: " << Score << endl;
}

void IntSample::setScore(const int s)
{
	Score = s;
}

int IntSample::getScore()
{
	return Score;
}
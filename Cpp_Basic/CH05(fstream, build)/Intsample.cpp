#include "Intsample.h"

void Intsample::Showscore()
{
	//cout << "���� : " << this->getscore() << endl;
	cout << "���� : " << score << endl;
}

void Intsample::Setscore(const int s)
{
	score = s;
}

int Intsample::getscore()
{
	return score;
}
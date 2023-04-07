﻿#include <stdlib.h>
#include "Game.h"

static bool notAWinner;

int main()
{

	srand(time(NULL));
	Game aGame;

	aGame.add("Chet");
	aGame.add("Pat");
	aGame.add("Sue");
  aGame.add("Bob");
  aGame.add("Rob");
  aGame.add("Bobert");
  aGame.add("Robert");
	do
	{

		aGame.roll(rand() % 5 + 1);

		if (rand() % 9 == 7)
		{
			notAWinner = aGame.wrongAnswer();
		}
		else
		{
			notAWinner = aGame.wasCorrectlyAnswered();
		}
	} while (notAWinner);

}
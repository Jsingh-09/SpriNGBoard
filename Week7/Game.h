#pragma once

#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Game{

	private:

		vector<string> players;

		int places[7];
		int purses[7];

	  bool inPenaltyBox[7];

		list<string> popQuestions;
		list<string> scienceQuestions;
		list<string> sportsQuestions;
		list<string> rockQuestions;

	  unsigned int currentPlayer;
		bool isGettingOutOfPenaltyBox;

  public:
	  Game();
	  string createRockQuestion(int index);
	  bool isPlayable();
	  bool add(string playerName);

	  int howManyPlayers();
	  void roll(int roll);

	private:
		void askQuestion();
		string currentCategory();

	public:
		bool wasCorrectlyAnswered();
		bool wrongAnswer();

  private:
	  bool didPlayerNotWin();
};


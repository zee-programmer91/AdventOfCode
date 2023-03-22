#include <iostream>
#include <map>
#include <vector>

#ifndef ROCK_PAPERS_SCISSORS_H
#define ROCK_PAPERS_SCISSORS_H

using namespace std;

enum playerChoices {
	Rock,
	Paper,
	Scissors,
};

enum possibleStatus {
	Draw,
	Lost,
	Win,
};

struct Player {
	int				score{ 0 };
	playerChoices	choice{};
	possibleStatus	status{};
	int				totalScore{ 0 };
};

class RockPaperScissors {

public:
	Player player1;
	Player player2;

	map<string, playerChoices> choices{
		{"A", Rock},
		{"B", Paper},
		{"C", Scissors},
		{"X", Rock},
		{"Y", Paper},
		{"Z", Scissors},
	};
	map<playerChoices, int> choiceScores{
		{Rock, 1} , {Paper, 2} , {Scissors, 3}
	};
	map<possibleStatus, int> roundScores{
		{Lost, 0} , {Draw, 3} , {Win, 6}
	};

	RockPaperScissors();
	~RockPaperScissors();
	void checkRound(string columnA, string columnB);
	void checkColumnB(string columnA, string columnB);
	void mustDraw();
	void mustLose();
	void mustWin();
	playerChoices returnChoice(string value);
	possibleStatus returnStatus(playerChoices value1, playerChoices value2);
	void setPlayersScores();
	void setPlayersStatuses();
	void processRounds(int checkNumber, map<int, vector<string>> rounds);
};

#endif // !ROCK_PAPERS_SCISSORS_H


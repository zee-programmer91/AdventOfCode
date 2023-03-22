#include "RockPaperScissors.h"

RockPaperScissors::RockPaperScissors() {};
RockPaperScissors::~RockPaperScissors() {};

void RockPaperScissors::checkRound(string columnA, string columnB) {
	player1.score = 0;
	player2.score = 0;

	//	Set players' choice
	player1.choice = returnChoice(columnA);
	player2.choice = returnChoice(columnB);

	//	Set players' statuses
	setPlayersStatuses();

	//	Set players' score
	setPlayersScores();
}

void RockPaperScissors::checkColumnB(string columnA, string columnB) {
	player1.score = 0;
	player2.score = 0;

	//	Set players' choice
	player1.choice = returnChoice(columnA);

	if (columnB == "X")
	{
		mustLose();
	}
	else if (columnB == "Y")
	{
		mustDraw();
	}
	else if (columnB == "Z")
	{
		mustWin();
	}

	//	Set players' statuses
	setPlayersStatuses();

	//	Set players' score
	setPlayersScores();
}

void RockPaperScissors::processRounds(int checkNumber, map<int, vector<string>> rounds) {
	for (pair<int, vector<string>> round : rounds) {
		switch (checkNumber) {
			case 1:
				checkRound(round.second[0], round.second[1]);
				break;
			case 2:
				checkColumnB(round.second[0], round.second[1]);
				break;
		}
	}
}

playerChoices RockPaperScissors::returnChoice(string value) {
	if (value == "A" || value == "X")
	{
		return Rock;
	}
	if (value == "B" || value == "Y")
	{
		return Paper;
	}
	return Scissors;
}

possibleStatus RockPaperScissors::returnStatus(playerChoices value1, playerChoices value2) {
	//	Rock vs Scissors
	if (value1 == Rock && value2 == Scissors)
	{
		return Win;
	}
	//	Rock vs Paper
	else if (value1 == Rock && value2 == Paper)
	{
		return Lost;
	}
	//	Rock vs Rock
	else if (value1 == Rock && value2 == Rock)
	{
		return Draw;
	}

	//	Scissors vs Paper
	if (value1 == Scissors && value2 == Paper)
	{
		return Win;
	}
	//	Scissors vs Rock
	else if (value1 == Scissors && value2 == Rock)
	{
		return Lost;
	}
	//	Scissors vs Scissors
	else if (value1 == Scissors && value2 == Scissors)
	{
		return Draw;
	}

	//	Paper vs Rock
	if (value1 == Paper && value2 == Rock)
	{
		return Win;
	}
	//	Paper vs Scissors
	else if (value1 == Paper && value2 == Scissors)
	{
		return Lost;
	}
	//	Paper vs Paper
	return Draw;
}

void RockPaperScissors::mustDraw() {
	switch (player1.choice)
	{
	case Rock:
		player2.choice = Rock;
		break;
	case Paper:
		player2.choice = Paper;
		break;
	case Scissors:
		player2.choice = Scissors;
		break;
	}
}

void RockPaperScissors::mustLose() {
	switch (player1.choice)
	{
	case Rock:
		player2.choice = Scissors;
		break;
	case Paper:
		player2.choice = Rock;
		break;
	case Scissors:
		player2.choice = Paper;
		break;
	}
}

void RockPaperScissors::mustWin() {
	switch (player1.choice)
	{
	case Rock:
		player2.choice = Paper;
		break;
	case Paper:
		player2.choice = Scissors;
		break;
	case Scissors:
		player2.choice = Rock;
		break;
	}
}

void RockPaperScissors::setPlayersScores() {
	player1.score += choiceScores[player1.choice];
	player1.score += roundScores[player1.status];
	player1.totalScore += player1.score;

	player2.score += choiceScores[player2.choice];
	player2.score += roundScores[player2.status];
	player2.totalScore += player2.score;
}

void RockPaperScissors::setPlayersStatuses() {
	player1.status = returnStatus(player1.choice, player2.choice);
	switch (player1.status)
	{
	case Draw:
		player2.status = Draw;
		break;
	case Lost:
		player2.status = Win;
		break;
	case Win:
		player2.status = Lost;
	}
}
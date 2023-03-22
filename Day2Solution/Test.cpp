#include "RockPaperScissors.h"

//	Player 1 = Rock
//	Player 2 = Scissors
bool Test1player1Wins() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Rock", "Scissors");

	//	Player 1 score must be 7
	if (rockPaperScissorsGame.player1.score != 7)
	{
		return false;
	}
	//	Player 2 score must be 3
	if (rockPaperScissorsGame.player2.score != 3)
	{
		return false;
	}

	//	Player 1 status must be Win
	if (rockPaperScissorsGame.player1.status != Win)
	{
		return false;
	}
	//	Player 2 status must be Lost
	if (rockPaperScissorsGame.player2.status != Lost)
	{
		return false;
	}

	return true;
}

//	Player 1 = Rock
//	Player 2 = Paper
bool Test2player1Lost() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Rock", "Paper");

	//	Player 1 score must be 1
	if (rockPaperScissorsGame.player1.score != 1)
	{
		return false;
	}
	//	Player 2 score must be 8
	if (rockPaperScissorsGame.player2.score != 8)
	{
		return false;
	}

	//	Player 1 status must be Lost
	if (rockPaperScissorsGame.player1.status != Lost)
	{
		return false;
	}
	//	Player 2 status must be Win
	if (rockPaperScissorsGame.player2.status != Win)
	{
		return false;
	}

	return true;
}

//	Player 1 = Rock
//	Player 2 = Rock
bool Test3player1Draw() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Rock", "Rock");

	//	Player 1 score must be 4
	if (rockPaperScissorsGame.player1.score != 4)
	{
		return false;
	}
	//	Player 2 score must be 4
	if (rockPaperScissorsGame.player2.score != 4)
	{
		return false;
	}

	//	Player 1 status must be Draw
	if (rockPaperScissorsGame.player1.status != Draw)
	{
		return false;
	}
	//	Player 2 status must be Draw
	if (rockPaperScissorsGame.player2.status != Draw)
	{
		return false;
	}

	return true;
}

//	Player 1 = Scissors
//	Player 2 = Paper
bool Test4player1Win() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Scissors", "Paper");

	//	Player 1 score must be 9
	if (rockPaperScissorsGame.player1.score != 9)
	{
		return false;
	}
	//	Player 2 score must be 2
	if (rockPaperScissorsGame.player2.score != 2)
	{
		return false;
	}

	//	Player 1 status must be Win
	if (rockPaperScissorsGame.player1.status != Win)
	{
		return false;
	}
	//	Player 2 status must be Lost
	if (rockPaperScissorsGame.player2.status != Lost)
	{
		return false;
	}

	return true;
}

//	Player 1 = Scissors
//	Player 2 = Rock
bool Test5player1Lost() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Scissors", "Rock");

	//	Player 1 score must be 3
	if (rockPaperScissorsGame.player1.score != 3)
	{
		return false;
	}
	//	Player 2 score must be 7
	if (rockPaperScissorsGame.player2.score != 7)
	{
		return false;
	}

	//	Player 1 status must be Lost
	if (rockPaperScissorsGame.player1.status != Lost)
	{
		return false;
	}
	//	Player 2 status must be Win
	if (rockPaperScissorsGame.player2.status != Win)
	{
		return false;
	}

	return true;
}

//	Player 1 = Scissors
//	Player 2 = Scissors
bool Test6player1Draw() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Scissors", "Scissors");

	//	Player 1 score must be 6
	if (rockPaperScissorsGame.player1.score != 6)
	{
		return false;
	}
	//	Player 2 score must be 6
	if (rockPaperScissorsGame.player2.score != 6)
	{
		return false;
	}

	//	Player 1 status must be Draw
	if (rockPaperScissorsGame.player1.status != Draw)
	{
		return false;
	}
	//	Player 2 status must be Win
	if (rockPaperScissorsGame.player2.status != Draw)
	{
		return false;
	}

	return true;
}

//	Player 1 = Paper
//	Player 2 = Rock
bool Test7player1Win() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Paper", "Rock");

	//	Player 1 score must be 8
	if (rockPaperScissorsGame.player1.score != 8)
	{
		return false;
	}
	//	Player 2 score must be 1
	if (rockPaperScissorsGame.player2.score != 1)
	{
		return false;
	}

	//	Player 1 status must be Win
	if (rockPaperScissorsGame.player1.status != Win)
	{
		return false;
	}
	//	Player 2 status must be Lost
	if (rockPaperScissorsGame.player2.status != Lost)
	{
		return false;
	}

	return true;
}

//	Player 1 = Paper
//	Player 2 = Scissors
bool Test8player1Lose() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Paper", "Scissors");

	//	Player 1 score must be 2
	if (rockPaperScissorsGame.player1.score != 2)
	{
		return false;
	}
	//	Player 2 score must be 9
	if (rockPaperScissorsGame.player2.score != 9)
	{
		return false;
	}

	//	Player 1 status must be Lost
	if (rockPaperScissorsGame.player1.status != Lost)
	{
		return false;
	}
	//	Player 2 status must be Win
	if (rockPaperScissorsGame.player2.status != Win)
	{
		return false;
	}

	return true;
}

//	Player 1 = Paper
//	Player 2 = Paper
bool Test9player1Draw() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Paper", "Paper");

	//	Player 1 score must be 5
	if (rockPaperScissorsGame.player1.score != 5)
	{
		return false;
	}
	//	Player 2 score must be 5
	if (rockPaperScissorsGame.player2.score != 5)
	{
		return false;
	}

	//	Player 1 status must be Lost
	if (rockPaperScissorsGame.player1.status != Draw)
	{
		return false;
	}
	//	Player 2 status must be Win
	if (rockPaperScissorsGame.player2.status != Draw)
	{
		return false;
	}

	return true;
}

//	Player 1 = Rock		| Rock
//	Player 2 = Scissors | Scissors
bool Test10player1TotalScoreIs14() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Rock", "Scissors");
	//	Player 1 score must be 7
	if (rockPaperScissorsGame.player1.score != 7)
	{
		return false;
	}

	rockPaperScissorsGame.checkRound("Rock", "Scissors");
	//	Player 1 score must be 7
	if (rockPaperScissorsGame.player1.score != 7)
	{
		return false;
	}
	//	Player 1 total score must be 14
	if (rockPaperScissorsGame.player1.totalScore != 14)
	{
		return false;
	}

	return true;
}

//	Player 1 = Rock  | Rock
//	Player 2 = Paper | Scissors
bool Test11player2TotalScoreIs11() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Rock", "Paper");
	//	Player 2 score must be 8
	if (rockPaperScissorsGame.player2.score != 8)
	{
		return false;
	}

	rockPaperScissorsGame.checkRound("Rock", "Scissors");
	//	Player 2 score must be 3
	if (rockPaperScissorsGame.player2.score != 3)
	{
		return false;
	}
	//	Player 2 total score must be 11
	if (rockPaperScissorsGame.player2.totalScore != 11)
	{
		return false;
	}

	return true;
}

//	Player 1 = Rock     | Paper    | Scissors
//	Player 2 = Scissors | Scissors | Rock
bool Test12player2TotalScoreIs12() {
	RockPaperScissors rockPaperScissorsGame{};

	rockPaperScissorsGame.checkRound("Rock", "Scissors");
	//	Player 1 score must be 7
	if (rockPaperScissorsGame.player1.score != 7)
	{
		return false;
	}

	rockPaperScissorsGame.checkRound("Paper", "Scissors");
	//	Player 1 score must be 2
	if (rockPaperScissorsGame.player1.score != 2)
	{
		return false;
	}

	rockPaperScissorsGame.checkRound("Scissors", "Rock");
	//	Player 1 score must be 3
	if (rockPaperScissorsGame.player1.score != 3)
	{
		return false;
	}
	//	Player 1 total score must be 12
	if (rockPaperScissorsGame.player1.totalScore != 12)
	{
		return false;
	}

	return true;
}

int runTests() {
	bool test{};

	test = Test1player1Wins();
	cout << "Test 1: " << (test == true ? "True" : "False") << "\n";

	test = Test2player1Lost();
	cout << "Test 2: " << (test == true ? "True" : "False") << "\n";

	test = Test3player1Draw();
	cout << "Test 3: " << (test == true ? "True" : "False") << "\n";
	
	test = Test4player1Win();
	cout << "Test 4: " << (test == true ? "True" : "False") << "\n";

	test = Test5player1Lost();
	cout << "Test 5: " << (test == true ? "True" : "False") << "\n";

	test = Test6player1Draw();
	cout << "Test 6: " << (test == true ? "True" : "False") << "\n";

	test = Test7player1Win();
	cout << "Test 7: " << (test == true ? "True" : "False") << "\n";

	test = Test8player1Lose();
	cout << "Test 8: " << (test == true ? "True" : "False") << "\n";

	test = Test9player1Draw();
	cout << "Test 9: " << (test == true ? "True" : "False") << "\n";

	test = Test10player1TotalScoreIs14();
	cout << "Test 10: " << (test == true ? "True" : "False") << "\n";
	
	test = Test11player2TotalScoreIs11();
	cout << "Test 11: " << (test == true ? "True" : "False") << "\n";
	
	test = Test12player2TotalScoreIs12();
	cout << "Test 12: " << (test == true ? "True" : "False") << "\n";
	cout << "\n";

	return 0;
}
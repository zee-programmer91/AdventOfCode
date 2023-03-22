#include "RockPaperScissors.h"

#include <time.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int runTests();
void processRoundsFromFile(ifstream& file, map<int, vector<string>>& rounds);


int main() {
	int start = clock();
	ifstream					file{};
	string						fileName{ "input.txt"};
	RockPaperScissors			RPSgame1{};
	RockPaperScissors			RPSgame2{};
	map<int, vector<string>>	rounds{};
	vector<string>				roundValues{};

	file.open(fileName);

	//runTests();

	processRoundsFromFile(file, rounds);

	RPSgame1.processRounds(1, rounds);

	cout << "Player 1 Total: " << RPSgame1.player1.totalScore << "\n";
	cout << "Player 2 Total: " << RPSgame1.player2.totalScore << "\n";

	RPSgame2.processRounds(2, rounds);

	cout << "Player 1 Total: " << RPSgame2.player1.totalScore << "\n";
	cout << "Player 2 Total: " << RPSgame2.player2.totalScore << "\n";

	file.close();
	int end = clock();
	cout << "Finished After: " << ((float)end - start) / CLOCKS_PER_SEC << " seconds.";
	
	return 0;
}

void processRoundsFromFile(ifstream &file, map<int, vector<string>> &rounds) {
	int				round{ 1 };
	string			roundInfor{};
	vector<string>	roundValues;

	while (!file.eof())
	{
		getline(file, roundInfor);
		string value1{ roundInfor.substr(0,1) };
		string value2{ roundInfor.substr(2,1) };

		roundValues.push_back(value1);
		roundValues.push_back(value2);
		rounds[round] = roundValues;

		round++;
		roundValues.clear();
	}
}

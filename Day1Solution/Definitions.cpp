#include "Declarations.h"

#include <array>
#include <iostream>
#include <set>


Elves::Elves() {}
Elves::~Elves(){}

void Elves::addToMap(ifstream& file) {
	std::string calories;
	int total{ 0 };

	while (!file.eof())
	{
		getline(file, calories);

		if (calories == "")
		{
			elfCalories[elfCount] = total;

			total = 0;
			elfCount++;
		}
		else {
			total += stoi(calories);
		}
	}
}

void Elves::setHighestCalories() {
	vector<int> calories;

	for (int i = 1; i < elfCalories.size(); i++) {
		calories.push_back(elfCalories[i]);
	}

	std::sort(calories.begin(), calories.end());

	int lastIndex = calories.size() - 1;
	int seondLastIndex = calories.size() - 2;
	int thirdLastIndex = calories.size() - 3;

	highestCalories = calories.at(lastIndex);
	secondHighestCalories = calories.at(seondLastIndex);
	thirdHighestCalories = calories.at(thirdLastIndex);

	maxCalories = (highestCalories + secondHighestCalories + thirdHighestCalories);

}
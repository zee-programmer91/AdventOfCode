#include "Declarations.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <map>

using namespace std;

int main() {
	Elves		elves{};
	ifstream	file("input.txt", ios::in);

	elves.addToMap(file);
	elves.setHighestCalories();

	cout << "Number of Elves: " << (elves.elfCount-1) << "\n";
	cout << "Highest Calories: " << elves.highestCalories << "\n";
	cout << "Second Highest Calories: " << elves.secondHighestCalories << "\n";
	cout << "Third Highest Calories: " << elves.thirdHighestCalories << "\n";
	cout << "Top 3 Calories: " << elves.maxCalories << "\n";

	return 0;
}

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <map>

using namespace std;

#ifndef DECLARATIONS_H

#define DECLARATIONS_H

class Elves
{
public:
	int				elfCount{ 1 };
	map<int, int>	elfCalories;
	int				highestCalories{ 0 };
	int				maxCalories{ 0 };
	int				secondHighestCalories{ 0 };
	int				thirdHighestCalories{ 0 };

	Elves();
	~Elves();
	void addToMap(ifstream& file);
	void setHighestCalories();
};

#endif // !DECLARATIONS_H

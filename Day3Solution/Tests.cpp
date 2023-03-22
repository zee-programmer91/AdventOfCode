#include <iostream>
#include "Rucksack.h"

using namespace std;

bool testAddToRucksackComponent() {
	Rucksack rucksack{};

	Item item1{'a'};
	Item item2{'b'};

	rucksack.addToCompartment1(item1);
	rucksack.addToCompartment2(item2);
	
	//	Check size of compartments
	int size = rucksack.getCompartment1().size();
	if (size != 1)
	{
		cout << "1 != " << size << "\n";
		return false;
	}

	size = rucksack.getCompartment2().size();
	if (size != 1)
	{
		cout << "1 != " << size << "\n";
		return false;
	}

	//	Check the Item values in compartments
	char character = rucksack.getCompartment1()[0].value;
	if (character != 'a')
	{
		cout << "a != " << character << "\n";
		return false;
	}

	character = rucksack.getCompartment2()[0].value;
	if (character != 'b')
	{
		cout << "b != " << character << "\n";
		return false;
	}

	return true;
}

bool testRepeatingItemsInRucksack() {
	Item					item1{ 'a' };
	Item					item2{ 'V' };
	Item					item3{ 'c' };
	Item					item4{ 'D' };
	Item					item5{ 'd' };
	Item					item6{ 'V' };
	Item					item7{ 'a' };
	Item					item8{ 'D' };

	vector<Item>	compartment1{
		item1,
		item2,
		item3,
		item4,
	};
	vector<Item> compartment2{
		item5,
		item6,
		item7,
		item8,
	};

	Rucksack	rucksack{};
	rucksack.setCompartment1(compartment1);
	rucksack.setCompartment2(compartment2);

	map<char, int> repeatingItems{ rucksack.repeatingItemsInRucksack() };

	//	Check that there's 3 items repeating
	int size = repeatingItems.size();

	if (size != 3)
	{
		cout << "3 != " << size << "\n";
		return false;
	}

	//	Check the total of repeating items
	int total{ 0 };
	for (pair<const char, int> item : repeatingItems) {
		total += item.second;
	}

	if (total != 79) {
		cout << "79 != " << total << "\n";
		return false;
	}

	return true;
}

bool testItemsPriorityTotal() {
	Item					item1{ 'a' };
	Item					item2{ 'V' };
	Item					item3{ 'c' };
	Item					item4{ 'D' };
	
	Item					item5{ 'd' };
	Item					item6{ 'V' };
	Item					item7{ 'V' };
	Item					item8{ 'D' };

	vector<Item>	compartment1{
		item1,
		item2,
		item3,
		item4,
	};
	vector<Item> compartment2{
		item5,
		item6,
		item7,
		item8,
	};

	Rucksack	rucksack{};
	rucksack.setCompartment1(compartment1);
	rucksack.setCompartment2(compartment2);

	int total{ rucksack.rucksackItemsPriorityTotal() };

	if (total != 78) {
		cout << "78 != " << total << "\n";
		return false;
	}

	return true;
}

bool runTests() {
	//if (!testAddToRucksackComponent())
	//{
	//	cout << "testAddToRucksackComponent Test failed!\n";
	//	return false;
	//}
	//if (!testRepeatingItemsInRucksack())
	//{
	//	cout << "testRepeatingItemsInRucksack Test failed!\n";
	//	return false;
	//}
	//if (!testItemsPriorityTotal())
	//{
	//	cout << "testItemsPriorityTotal Test failed!\n";
	//	return false;
	//}

	return true;
}
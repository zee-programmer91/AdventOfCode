#include "Rucksack.h"

#include <iostream>
#include <vector>

using namespace std;

Rucksack::Rucksack(){}
Rucksack::~Rucksack(){}

vector<Item> Rucksack::getCompartment1() {
	return compartment1;
}

vector<Item> Rucksack::getCompartment2() {
	return compartment2;
}

void Rucksack::addToCompartment1(Item item) {
	compartment1.push_back(item);
}

void Rucksack::addToCompartment2(Item item) {
	compartment2.push_back(item);
}

void Rucksack::setCompartment1(vector<Item> compartment) {
	compartment1 = compartment;
}

void Rucksack::setCompartment2(vector<Item> compartment) {
	compartment2 = compartment;
}

vector<Item> createItems(string values) {
	vector<Item> items;

	for (size_t i = 0; i < values.length(); i++)
	{
		Item item{};
		item.value = values[i];
		items.push_back(item);
	}
	return items;
}

map<char, int> Rucksack::repeatingItemsInRucksack() {
	map<char, int> repeatingItems{};

	for (size_t i = 0; i < compartment1.size(); i++)
	{
		for (size_t j = 0; j < compartment2.size(); j++)
		{
			Item item1{ compartment1[i] };
			Item item2{ compartment2[j] };

			if (item1.value == item2.value)
			{
				repeatingItems[item1.value] = priorities[item1.value];
			}
		}
	}

	return repeatingItems;
}

int Rucksack::rucksackItemsPriorityTotal() {
	int total{ 0 };
	vector<char> foundItems{};

	for (size_t i = 0; i < compartment1.size(); i++)
	{
		for (size_t j = 0; j < compartment2.size(); j++)
		{
			Item item1{ compartment1[i] };
			Item item2{ compartment2[j] };

			int itemCount{ count(foundItems.begin(), foundItems.end(), item2.value) };

			if (item1.value == item2.value && itemCount == 0)
			{
				/*cout << "Similar item: " << item1.value << "  value: " << priorities[item1.value] << "\n";*/
				total += priorities[item1.value];
				foundItems.push_back(item1.value);
			}
		}
	}

	return total;
}
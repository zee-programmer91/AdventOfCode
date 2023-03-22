#include "IO.h"
#include "Rucksack.h"

#include <iostream>
#include <string>

bool runTests();
vector<Item> createItems(string values);

int main() {
  string              filePath{ "input.txt" };
  IO                  inputOutputObject;
  int                 rucksacksCount{ 1 };
  map<int, Rucksack>  rucksacks;

  if (runTests())
  {
    inputOutputObject.openFile(filePath);

    while (!inputOutputObject.getOpenedFile().eof())
    {
      Rucksack rucksack{};
      Item item{};

      // Get contents of opened file
      string rucksackItems{};
      inputOutputObject.getOpenedFile() >> rucksackItems;

      //  Split the rucksackItems string into 2 substrings
      int rucksackItemsLen = rucksackItems.length();
      int halfLen = rucksackItemsLen / 2;
      string substring1{ rucksackItems.substr(0, halfLen) };
      string substring2{ rucksackItems.substr(halfLen, rucksackItemsLen) };

      //  Split compartments elements into Item objects and add to Rucksack object
      rucksack.setCompartment1(createItems(substring1));
      rucksack.setCompartment2(createItems(substring2));

      //  Add Rucksack object to Rucksacks map object
      rucksacks[rucksacksCount] = rucksack;

      rucksacksCount++;
    }

    int total{ 0 };

    for (pair<int, Rucksack> rucksackInfo: rucksacks)
    {
      Rucksack rucksack{ rucksackInfo.second };
      int RucksackPriorityTotal{ rucksack.rucksackItemsPriorityTotal() };
      total += RucksackPriorityTotal;
      //cout << "Rucksack No: "     << rucksackInfo.first
      //     << " Priority total: " << RucksackPriorityTotal << "\n";
    }

    cout << "Priorities count: " << total << "\n";

    inputOutputObject.closeFile();
    return 0;
  }
  
  return 1;
}

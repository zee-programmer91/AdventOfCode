#include "IO.h"
#include <iostream>

using namespace std;

IO::IO(){}
IO::~IO(){}

ifstream& IO::getOpenedFile() {
	return file;
}

void IO::openFile(string filePath) {
	file.open(filePath);
}

void IO::closeFile() {
	file.close();
}

void IO::print(string value) {
	cout << value << "\n";
}
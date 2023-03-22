#include <fstream>
#ifndef IO_H
#define IO_H

using namespace std;

class IO {
public:
	IO();
	~IO();

	ifstream& getOpenedFile();
	void openFile(string filePath);
	void closeFile();
	void print(string value);
private:
	ifstream file;

};

#endif // !IO_H

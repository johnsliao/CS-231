// Student: John Liao
// BU MET CS 231
// HW #2

#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
	ifstream myFile;
	int letters[26];
	int counter = 0;
	char temp;

	for (char i = 'a'; i <= 'z'; i++)
		letters[i] = 0;

	myFile.open("mysterious_code.txt");

	while (!myFile.eof()){
		myFile >> temp;
		if (isalpha(temp)) {
			letters[temp]++;
			counter++;
		}
	}

	for (char i = 'a'; i <= 'z'; i++)
		if (letters[i]!=0)
			cout<<"LETTER COUNT: "<<i<< " has " << letters[i]<< " counts."<<endl;
	
	myFile.close();
}
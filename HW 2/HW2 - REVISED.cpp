// Student: John Liao
// BU MET CS 231
// HW #2 - REVISED

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
	char letter;

	for (int i = 0; i < 26; i++)
		letters[i] = 0;

	myFile.open("mysterious_code.txt");

	while (!myFile.eof()){
		myFile >> temp;
		if (isalpha(temp)) {
			letters[temp - 'a']++;
			counter++;
		}
	}

	for (int i = 0; i < 26; i++){
		letter = i+97; // ASCII char 97 = 'a'

		if (letters[i] != 0)
			cout << "LETTER COUNT: " << letter << " has " << letters[i] << " counts." << endl;
	}
	myFile.close();
}
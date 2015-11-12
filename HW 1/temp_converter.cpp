#include <iostream>
#include <string>
#include "temp_functions.h"
using namespace std;

int main()
{
	float temp = 0;
	string scale;

	cout << "Temperature? ";
	cin >> temp;
	cout << "Scale? (c or f): ";
	cin >> scale;

	if (scale == "c")
		cout << "converted temp to fahrenheit: " << celsius_to_fahrenheit(temp) << endl;
	else if (scale == "f")
		cout << "converted temp to celsius: " << fahrenheit_to_celsius(temp) << endl;
	else
		cout << "invalid input" << endl;

	return 0;
}
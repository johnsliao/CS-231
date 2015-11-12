// John Liao
// CS MET 231
// HW #3
// main.cpp

#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
	Thermometer thermometer1(50, 'F');
	cout << "Instantiated a Thermometer class, thermometer1(50, 'F')." << endl;
	cout << "thermometer1.get_temp(): " << thermometer1.get_temp('F') << endl;
	cout << "thermometer1.get_scale(): " << thermometer1.get_scale() << endl;
	
	cout << "Do function: thermometer1.set_scale('C')" << endl;
	thermometer1.set_scale('C');
	cout << "thermometer1.get_scale(): " << thermometer1.get_scale() << endl;

	cout << "Do function: thermometer1.set_temp('0')" << endl;
	thermometer1.set_temp(0);

	cout << "What is the temp in F? " << thermometer1.get_temp('F') << endl;
	
	Thermometer thermometer2(thermometer1);
	cout << "Do function: thermometer2.set_temp(100)" << endl;
	thermometer2.set_temp(100);

	cout << "thermometer1.get_scale(): " << thermometer1.get_scale() << endl;
	cout << "thermometer1.get_temp(): " << thermometer1.get_temp('C') << endl;

	cout << "thermometer2.get_scale(): " << thermometer2.get_scale() << endl;
	cout << "thermometer2.get_temp(): " << thermometer2.get_temp('C') << endl;

	return 0;
}
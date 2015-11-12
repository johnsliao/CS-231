// John Liao
// CS MET 231
// HW #3
// functions.cpp

#include "functions.h"

float Thermometer::get_temp(char input_scale) { // input char (C or F), return temp value with or without conversion
	if (input_scale == 'C' && scale != input_scale) // turn F into C
		return (temp - 32) / 1.8;
	else if (input_scale == 'F' && scale != input_scale) // turn F into C
		return (temp * 1.8) + 32;
	else
		return temp;
}

void Thermometer::reset_temp() {
	if (scale == 'C')
		temp = 0;
	if (scale == 'F')
		temp = 32;
}


Thermometer::Thermometer(Thermometer& a_thermometer) { //copy constructor
	scale = a_thermometer.get_scale();
	temp = a_thermometer.get_temp(a_thermometer.get_scale());
}

char Thermometer::get_scale() { return scale; }
void Thermometer::set_scale(char input_scale) { scale = input_scale; }
void Thermometer::set_temp(float input_temp) { temp = input_temp; }
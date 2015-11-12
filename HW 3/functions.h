// John Liao
// CS MET 231
// HW #3
// functions.h

class Thermometer {
private:
	char scale;
	float temp;

public:
	float get_temp(char); // input char (C or F), return temp value with or without conversion
	void reset_temp(); // resets temp to 0 if C, 32 if F
	void set_scale(char); // set scale, based on input
	void set_temp(float); // set temp
	char get_scale(); // get scale
	
	Thermometer() { scale = 'C'; temp = 0; }
	Thermometer(float input_temp, char input_scale){ temp = input_temp; scale = input_scale; }
	Thermometer(Thermometer&); //copy constructor
};
//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program calculates the Celsius to Farenheit conversion from a range of numbers by way of looping. 
//Also, some ceiling and flooring of numbers. Just for fun...

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	double cels1, cels2;

	const int COL1 = 12;
	const int COL2 = 12;

	cout << "Welcome to Rounding Converter!" << endl;
	cout << endl;
	cout << "Please enter a temperature in degrees Celsius: ";
	cin >> cels1;
	cout << "Please enter a temperature in degrees Celsius: ";
	cin >> cels2;
	cout << " " << endl;
	cout << "	TEMPERATURE RANGES" << endl;
	cout << "	CELSIUS		FARENHEIT" << endl;

	double count = 1;

	while (count <= COL1 + COL2) {
		cout << "__";
		count++;
	}
	cout << endl;

	int start;
	double stop;

	if (cels1 < cels2) {
		start = cels1;
		stop = cels2;
	}
	else {
		start = cels2;
		stop = cels1;
	}

	start = floor(start);
	stop = ceil(stop);

	while (start <= stop) {
		count = start;
		count = (count * (9.00 / 5.00)) + 32;
		cout << right;
		cout << setw(COL1) << start << "	";
		cout << fixed << showpoint << setprecision(2);
		cout << setw(COL2) << count << endl;
		start++;
	}

	return 0;
}
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
	const int PREC = 2;
	
	cout << "Welcome to Rounding Converter!" << endl;
	cout << endl;
	cout << "Please enter a temperature in degrees Celsius: ";
	cin >> cels2;
	cout << "Please enter a temperature in degrees Celsius: ";
	cin >> cels1;
	cout << " " << endl;
	cout << "	TEMPERATURE RANGES" << endl;
	cout << "	CELSIUS		FARENHEIT" << endl;

	double count = 1;

	while (count <= COL1 + COL2) {
		cout << "__";
		count++;
	}
	cout << endl;

	if (cels1 < cels2) {
		while (cels1 <= cels2) {
			count = cels1;
			count = (count * (9 / 5)) + 32;
			cout << right;
			cout << setw(COL1) << floor(cels1);
			cout << fixed << showpoint << setprecision(PREC);
			cout << "	" << setw(COL2) << ceil(count) << endl;
			cels1++;
		}
	}
	else if (cels2 < cels1) {
		while (cels2 <= cels1) {
			count = cels2;
			count = (count * (9 / 5)) + 32;
			cout << right;
			cout << setw(COL1) << floor(cels2);
			cout << fixed << showpoint << setprecision(PREC);
			cout << "	" << setw(COL2) << ceil(count) << endl;
			cels2++;
		}
	}

	return 0;
}
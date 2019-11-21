//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//This program squares numbers for the user. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int start_val, stop_val, value1, value2;

	const int COL1 = 15;
	const int COL2 = 15;

	cout << "Welcome to the Number Squaring Machine!" << endl; //Greet user, ask for numbers to square.
	cout << "" << endl;								
	cout << "Please choose a value: ";
	cin >> value1;
	cout << "" << endl;
	cout << "Please choose another value: ";
	cin >> value2;												//Accept Numbers.
	cout << "" << endl;
	cout << "		Square Table   " << endl;							//Beginning of Table
	cout << "	Value	Squared" << endl;

	if (value1 > value2) { //Contingency code. Makes it so the user doesn't have to input the values in any particular order. 
		start_val = value2;
		stop_val = value1;
	}
	else {
		start_val = value1;
		stop_val = value2;
	}

	for (int num_val = 1; num_val <= COL1 + COL2; num_val++) { //Make it look nice. It'll extend the underscore as far as the numbers go out. 
		cout << "__";
	}
	cout << "" << endl;

	for (int num_val = start_val; num_val <= stop_val; num_val++) { //The actual table creation. Formatting and computation handled in body, count handled by the for loop.
		cout << fixed << showpoint << setprecision(2);
		cout << right;
		cout << setw(COL1) << num_val << "	" << setw(COL2) << (num_val * num_val) << endl;
	}

	return 0;
}
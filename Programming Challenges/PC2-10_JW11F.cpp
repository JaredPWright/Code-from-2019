//Jared Wright, Intro to Programming, Section 11F
//This Program calculates Miles Per Gallon

#include <iostream>
using namespace std;

int main() {

	double miles, gallons, mpg;

	//This asks the user for the miles driven.
	cout << "Please enter miles driven:";
	cin >> miles;

	//This asks for gallons of gas burned by user.
	cout << "Please enter gallons of gas used:";
	cin >> gallons;

	//The calculation for miles per gallon
	mpg = miles / gallons;

	//The final output telling the user their miles per gallon
	cout << "You drove " << miles << " miles"
		<< " and used " << gallons << " gallons of gasoline."
		<< " Therefore you achieved " << mpg << " mpg!" << endl;



	return 0;
}
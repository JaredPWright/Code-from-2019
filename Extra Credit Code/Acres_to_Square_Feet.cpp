//Team Members: Jared Wright, Fayed Chaaban
//Professor Goulden's Intro to Programming, Section 11F
//This Program converts acres into square feet

#include <iostream>
using namespace std;

int main()
{
	double acres, feet_squared; //These are the identifiers for the program

	cout << "Please input the number of acres."; //These lines accept the acres value from the user.
	cin >> acres; 

	feet_squared = acres * 43560;

	cout << acres << " acres are equal to " << feet_squared << " feet squared.";











	return 0;
}
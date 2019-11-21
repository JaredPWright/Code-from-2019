//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden, 2019
//This program reads the list of presidents from a file. 

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string filename;
	cout << "Please enter file name: ";
	getline(cin, filename);

	ifstream fin;
	fin.open(filename);

	if (!fin) {
		cout << "ERROR OPENING FILE " << filename << endl;
	}

	int count = 0;
	string thePresident;
	string thePresident1;
	string high;
	string low;
	string mid;
	const int test = 1;

	getline(fin, thePresident);
	thePresident1 = thePresident;
	high = thePresident1;
	low = thePresident1;

	while(getline(fin, thePresident)) { //This loop tells the program to read the list until its done, alphabetizing as it goes.
		if (thePresident < low || thePresident > high) {//The condition here distinguishes between a new end value or a middle value.
			if (thePresident < low) {//This one distinguishes between high midpoint and low midpoint.
				low = thePresident;
			}
			else {
				high = thePresident;
			}
		}
		else {
			mid = thePresident;
		}

		count++;//Update condition.
	}

	cout << "The First item alphabetically is: " << low << "." << endl; //Display results.
	cout << "The last item alphabetically is: " << high << "." << endl;

	cout << endl;
	cout << "I read " << count << " items from the file " << filename << endl; //Report number of items read.

	return 0;
}
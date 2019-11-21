//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program reads a list of scores in, displaying the smallest one to two digits after the decimal. 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

double findLowest(double a, double b);

int main() {

	ifstream inputFile;
	double numberSearch, low;
	string userFileName;

	cout << "Welcome to the Lowest Number Searcher!" << endl;
	cout << "Please input the directory path of the file you would like read: ";
	getline(cin, userFileName);
	cout << endl;

	inputFile.open(userFileName);

	inputFile >> numberSearch;
	low = numberSearch;

	 do{
		low = findLowest(low, numberSearch);
	 } while (inputFile >> numberSearch);

	 cout << "The lowest number in the file is: " << low << "." << endl;

	return 0;
}

double findLowest(double a, double b) {
	double result = a;
	if (a > b) {
		result = b;
	}

	return result;
}
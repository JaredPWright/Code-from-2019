//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//Array Introduction

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

void displayArray(const int theArray[], int theSize);//Displaying Array Family
void displayArray(const int theArray[], int startIndex, int stopIndex);

void randomizeArray(int theArray[], int theSize);//Randomization function for the array. Not actually in use atm.

int findSmallestInArray(const int theArray[], int theSize);//Seaches the array for the smallest number there.
bool searchArray(const int theArray[], int theSize, int theSearchItem);//Searches the array for a user-input number.

int sumOfArray(const int theArray[], int theSize);//Add the whole array.
double averageOfArray(const int theArray[], int theSize);//Averages the whole array.

bool isPrime(const int theArray[], int a, const int theSize); 

int main()
{
	const int SIZE = 100000;// Size setting. It is a constant.

	int searchParameter;

	int primeCounter = 0;

	string fileName;
	string fout;
	

	int myArray[SIZE] = {   };// The compiler will count what you feed it if you don't wanna give it the definition.

	srand(unsigned(time(0)));//Used in the currently unused randomization function.

	
	cout << "Please input a name for the file: ";
	getline(cin, fileName);
	cout << endl;
	cout << "Please input a number to search for: ";
	cin >> searchParameter;
	cout << endl;

	ifstream fin;
	fin.open(fileName.c_str());

	if (!fin) {//Error test.
		cout << "ERROR OPENING FILE " << fileName << "!!!" << endl;
		exit(0);
	}

	//randomizeArray(myArray, SIZE);
	
	for (int i = 0; i < SIZE; i++) {//Read in the file.
		fin >> myArray[i];
	}

	displayArray(myArray, SIZE);// Call the display function.

	for (int i = 0; i < SIZE; i++) {
		if (isPrime(myArray, i, SIZE)) {
			primeCounter++;
		}
	}

	cout << endl;
	cout << "The sum of these is " << sumOfArray(myArray, SIZE) << "." << endl;
	cout << "The average of these is " << averageOfArray(myArray, SIZE) << "." << endl;
	cout << "The smallest of these is " << findSmallestInArray(myArray, SIZE) << "." << endl;
	cout << "There are " << primeCounter << " prime numbers in the array." << endl;

	if (searchArray(myArray, SIZE, searchParameter) == true) {
		cout << "The number	" << searchParameter << " was found." << endl;
	}
	else {
		cout << "The number " << searchParameter << " was not found." << endl;
	}

	return 0;
}

int sumOfArray(const int theArray[], int theSize) {
	int result = 0;

	for (int i = 0; i < theSize; i++) {
		result += theArray[i];//Accumulator. Adds whatever it is currently reading to the result variable.
	}

	return result;
}

void displayArray(const int theArray[], int theSize) {//Sending the address, but not allowed to change the data there. */

	if (theSize <= 200) {
		displayArray(theArray, 0, theSize);
	}
	else {
		displayArray(theArray, 0, 100);
		displayArray(theArray, theSize - 100, theSize);
	}
}

void randomizeArray(int theArray[], int theSize) {
	for (int i = 0; i < theSize; i++) {
		theArray[i] = { rand() % 1000 };
	}
}

double averageOfArray(const int theArray[], int theSize) {
	return (double) (sumOfArray(theArray, theSize)) / theSize;
}

int findSmallestInArray(const int theArray[], int theSize) {

	int smallest = theArray[0];

	for (int i = 0; i < theSize; i++) {
		if (smallest > theArray[i]) {
			smallest = theArray[i];
		}
	}

	return smallest;
}

bool searchArray(const int theArray[], int theSize, int theSearchItem) {
	bool result = false;

	for (int i = 0; i < theSize; i++) {
		if (theArray[i] == theSearchItem) {
			result = true;
			break;
		}
	}
	return result;
}

void displayArray(const int theArray[], int startIndex, int stopIndex) {
	for (int i = startIndex; i < stopIndex; i++) {

		if (i % 10 == 0) {
			cout << endl;
		}

		cout << setw(7) << theArray[i];
	}
	cout << endl;
	cout << endl;
}

bool isPrime(const int theArray[], int a, const int theSize) {
	bool result = true; //Set the Default

	if (theArray[a] >= 2) { //Precheck. Is this Number in the running at all? If not, it's not prime. If so, please continue.
		int d = 2;
		int stop = sqrt(theArray[a]); //Find the square root. It'll be the maximum option for divisibility. Our "stop" value.
		int answer;

		if (d <= stop) {//Another precheck. Is the given stop value greater than two? If not, falsify. If so, begin more tests.
			do {
				answer = theArray[a] % d;//Mod to find remainder. If there isn't one, it ain't prime.
				if (answer == 0) {//If it is, the result is false. Break the loop.
					result = false;
					break;
				}
				else {//Mod the counter if it came back clean.
					d++;
				}
			} while (d <= stop);//Default exit condition for the loop.
		}
	}
	else {//The other end of the first precheck.
		result = false;
	}

	return result;//Send the result.
}
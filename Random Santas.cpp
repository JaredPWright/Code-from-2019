//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program reads in two arrays from files and compares them. It's basically a grading machine. 

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

void randomSanta(const string myArray1[], const string myArray2[], string myArray3[], int theSize);

void displayArray(const string theArray[], int startIndex, int stopIndex); 

bool verifier(const string theArray[], const string theTest, const int theSize);
bool verifier2(const string theArray[], const string theTest, const int theSize);


int main()
{
	srand(unsigned(time(0)));

	const int SIZE = 11;

	string fileNameKey;
	string fileNameTest;
	
	string recipientReadout[SIZE];
	string giverArray[SIZE];
	string recipientArray[SIZE];

	cout << "Hello and welcome to the Christmas Randomizer!" << endl;
	cout << endl;
	cout << "Please input the gifter file path: ";
	getline(cin, fileNameKey);
	cin.ignore();
	cout << endl;

	ifstream fin;
	fin.open(fileNameKey);

	if (!fin) {
		cout << "CRITICAL ERROR OPENING FILE" << endl;
		exit(0);
	}

	for (int i = 0; i < SIZE; i++) {
		fin >> giverArray[i];
	}

	fin.close();

	cout << "Please input the recipient file path: ";
	getline(cin, fileNameTest);

	ifstream fan;
	fan.open(fileNameTest);

	if (!fan) {
		cout << "CRITICAL ERROR OPENING FILE" << endl;
		exit(0);
	}

	for (int i = 0; i < SIZE; i++) {
		fan >> recipientArray[i];
	}

	cout << endl;

	randomSanta(giverArray, recipientArray, recipientReadout ,SIZE);

	return 0;
}

void randomSanta(const string myArray1[], const string myArray2[], string myArray3[], int theSize) {
	
	

	for (int i = 0; i < theSize; i++) {

		bool matchTest;
		
		string temporaryStorageRecipients;
		string finalVerification;

		do {
			
			do {

				do {
					temporaryStorageRecipients = myArray2[rand() % 11];

					finalVerification = temporaryStorageRecipients;

					if (myArray1[10] == finalVerification) {
						break;
					}

				} while (myArray1[i] == temporaryStorageRecipients);

			} while (!verifier(myArray3, temporaryStorageRecipients, theSize));

			cout << (i + 1) << ". " << myArray1[i] << " is giving a gift to " << temporaryStorageRecipients << "." << endl;
			cout << endl;

			myArray3[i] = { temporaryStorageRecipients };
			
		} while (myArray1[10] == myArray3[10]);
	}

}

void displayArray(const string theArray[], int startIndex, int stopIndex) {
	for (int i = startIndex; i < stopIndex; i++) {

		if (i % 10 == 0) {
			cout << endl;
		}

		cout << setw(7) << theArray[i];
	}
	cout << endl;
	cout << endl;
}

bool verifier(const string theArray[], const string theTest, const int theSize) {

	bool result = true;

	for (int i = 0; i < theSize; i++) {
		if (theArray[i] == theTest) {
			result = false;
		}
	}

	return result;
}

bool verifier2(const string theArray[], const string theTest, const int theSize) {

	bool result = false;

	if (theArray[10] == theTest) {
		result = true;
	}

	return result;
}
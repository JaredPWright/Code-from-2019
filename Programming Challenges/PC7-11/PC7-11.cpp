//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program reads in two arrays from files and compares them. It's basically a grading machine. 

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

void getFileName(string& a);

void testGrader(int numberRight, int questionsTotal);
void testGrader(const char myArray1[], const char myArray2[], int theSize, int numberOfQuestions);

int main()
{

	int questionsOnTest, numberRight;

	const int SIZE = 101;

	string fileNameKey;
	string fileNameTest;

	char keyArray[SIZE];
	char testArray[SIZE];

	cout << "Hello and welcome to the test grading machine. You give us a grading key, the number of questions on the test, and a student's answers, and we give you their score!" << endl;
	cout << "Please input the key's file path: ";
	getFileName(fileNameKey);
	cout << endl;

	ifstream fin1;
	fin1.open(fileNameKey.c_str());

	if (!fin1) {
		cout << "CRITICAL ERROR OPENING FILE" << endl;
		exit(0);
	}

	for (int i = 0; i < SIZE; i++) {
		fin1 >> keyArray[i];
	}

	cout << "Please input the test's file path: ";
	cin.ignore();
	getFileName(fileNameTest);

	ifstream fin2;
	fin2.open(fileNameTest.c_str());

	if (!fin2) {
		cout << "CRITICAL ERROR OPENING FILE" << endl;
		exit(0);
	}

	for (int i = 0; i < SIZE; i++) {
		fin2 >> testArray[i];
	}

	cout << "Please input the number of questions on the test: ";
	cin >> questionsOnTest;
	cout << endl;

	testGrader(keyArray, testArray, SIZE, questionsOnTest);

	return 0;
}

void getFileName(string& a) {

	getline(cin, a);
	cout << endl;

}

void testGrader(int numberRight, int questionsTotal) {
	
	double result = (numberRight / questionsTotal) * 100;

	cout << "This student recieved a grade of " << result << "% on this test." << endl;
}

void testGrader(const char myArray1[], const char myArray2[], int theSize, int numberOfQuestions) {

	int numberRight = 0, numberWrong = 0;

	bool result = false;

	for (int i = 0; i < theSize; i++) {
		if (myArray1[i] == myArray2[i]) {
			result = true;
			cout << (i + 1) << ". CORRECT" << endl;
			numberRight++;
		}
		else {
			cout << (i + 1) << ". INCORRECT" << endl;
			numberWrong++;
		}
	}

	cout << endl;

	testGrader(numberRight, numberOfQuestions);

}
//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program calculates the score averages  using separate functions, dropping the lowest and highest scores. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool isValid(double theScore, double max, double min);
void getJudgeData(double theArray[], int theSize);
void calcScore(double a, double b);
double sumOfFive(const double theArray[], int theSize, double a, double b);
double findLowest(const double theArray[], int theSize);
double findHighest(const double theArray[], int theSize);

int main()
{

	const int NUMBEROFJUDGES = 5;//The sizing variable for the program.
	
	cout << "Hello and welcome to the Score Calculator!" << endl;

	double score[NUMBEROFJUDGES];//The array is declared/defined.
	getJudgeData(score, NUMBEROFJUDGES);//Function call to initialize the array and store the scores in it.

	double lowest = findLowest(score, NUMBEROFJUDGES);//Function call to find the lowest score.
	double highest = findHighest(score, NUMBEROFJUDGES);//Function call to determine the highest score.
	double sumAll = sumOfFive(score, NUMBEROFJUDGES, lowest, highest);//Function call to determine the sum of all five, minus the highest and lowest scores.

	calcScore(sumAll, NUMBEROFJUDGES);//Function call to average the scores. 

	return 0;
}

void getJudgeData(double theArray[], int theSize) {
	const double maxScore = 10.00;//These are variables for use in the input validation. It'll loop until an acceptable value is entered.
	const double min = 0.00;

	for (int i = 0; i < theSize; i++) {
		do {//Input validation loop.
			cout << "Please input a score between 1 and 10. Decimals are allowed: ";
			cin >> theArray[i];//Allow user to input score. 
		} while (isValid(theArray[i], maxScore, min) == false);//Calling the validation function as the while condition.
		
	}
}

bool isValid(double theScore, double maxScore, double min) {
	bool result;
	if (theScore >= min && theScore <= maxScore) {//Check to see if user's input is between acceptable values.
		result = true;//If so, allow them to continue.
	}
	else {
		result = false;//If not, repeat until acceptable.
	}
	return result;
}

double findLowest(const double theArray[], int theSize) {//This function determines the lowest score that was input. 

	double smallest = theArray[0];//Set the baseline value. 

	for (int i = 0; i < theSize; i++) {//Check all other values against it. If a smaller one is found, store it in the return variable.
		if (smallest > theArray[i]) {
			smallest = theArray[i];
		}
	}

	return smallest;
}

double findHighest(const double theArray[], int theSize) {

	double largest = theArray[0];

	for (int i = 0; i < theSize; i++) {
		if (largest < theArray[i]) {
			largest = theArray[i];
		}
	}

	return largest;
}

double sumOfFive(const double theArray[], int theSize, double a, double b) {
	double result = 0;

	for (int i = 0; i < theSize; i++) {//Add everything in the array. 
		result += theArray[i];
	}

	result -= (a + b);//Subtract out the highest and smallest values, found in their respective functions.

	return result;
}

void calcScore(double a, double b) {//This function calculates the average and displays it to the user. 
	double result;

	result = a / (b-2);//Take the sum of the five (with the extremes taken out), and average them by the size variable minus two.

	cout << fixed << showpoint << setprecision(2);//Format the output.
	cout << endl;
	cout << "The average grade of the " << b << " scores, in which the lowest score was dropped is: " << setw(5) << result << "." << endl;
}
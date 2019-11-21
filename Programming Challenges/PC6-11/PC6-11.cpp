//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program calculates the score averages  using separate functions, dropping the lowest scores. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool isValid(double theScore, double max, double min);
void getScore(double &);
void calcAverage(double a);
double sumOfFive(double a, double b, double c, double d, double e, double f);
double findLowest(double a, double b, double c, double d, double e);

int main()
{
	double score1, score2, score3, score4, score5;
	
	
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	double lowest = findLowest(score1, score2, score3, score4, score5);

	double sumAll = sumOfFive(score1, score2, score3, score4, score5, lowest);

	calcAverage(sumAll);

	return 0;
}

void getScore(double& theScore) {
	const double maxScore = 100.00;
	const double min = 0.00;
	
	do{
	
	cout << "Please input a score: ";
	cin >> theScore;

	} while (isValid(theScore, maxScore, min) == false);
}

bool isValid(double theScore, double maxScore, double min) {
	bool result;
	if (theScore >= min && theScore <= maxScore) {
		result = true;
	}
	else {
		result = false;
	}
	return result;
}

double findLowest(double a, double b, double c, double d, double e) {
	double result;
	double lowest = a;
	if (b < a) {
		lowest = b;
	}
	if (c < b && c < a) {
		lowest = c;
	}
	if (d < c && d < b) {
		lowest = d;
	}
	if (e < d && e < c) {
		lowest = e;
	}

	result = lowest;

	return result;
}

double sumOfFive(double a, double b, double c, double d, double e, double f) {
	double result;

	result = a + b + c + d + e;
	result -= f;

	return result;
}

void calcAverage(double a) {
	double result;

	result = a / 5;

	cout << fixed << showpoint << setprecision(2);
	cout << endl;
	cout << "The average grade of the five tests, in which the lowest score was dropped is: " << setw(5) << result << "." << endl;
}
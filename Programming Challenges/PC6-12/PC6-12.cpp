//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program calculates the score averages  using separate functions, dropping the lowest and highest scores. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool isValid(double theScore, double max, double min);
void getJudgeData(double&);
void calcScore(double a);
double sumOfFive(double a, double b, double c, double d, double e, double f, double g);
double findLowest(double a, double b, double c, double d, double e);
double findHighest(double a, double b, double c, double d, double e);

int main()
{
	double score1, score2, score3, score4, score5;


	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);

	double lowest = findLowest(score1, score2, score3, score4, score5);
	double highest = findHighest(score1, score2, score3, score4, score5);
	double sumAll = sumOfFive(score1, score2, score3, score4, score5, lowest, highest);

	calcScore(sumAll);

	return 0;
}

void getJudgeData(double& theScore) {
	const double maxScore = 10.00;
	const double min = 0.00;

	do {

		cout << "Please input a score between 1 and 10. Decimals are allowed: ";
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
	double lowest = a;
	if (b < a) {
		lowest = b;
	}
	else if (b < c) {
		lowest = c;
	}
	else if (c < d) {
		lowest = d;
	}
	else if (d < e) {
		lowest = e;
	}

	return lowest;
}

double sumOfFive(double a, double b, double c, double d, double e, double f, double g) {
	double result;

	result = a + b + c + d + e;
	result -= f;
	result -= g;

	return result;
}

void calcScore(double a) {
	double result;

	result = a / 5;

	cout << fixed << showpoint << setprecision(2);
	cout << endl;
	cout << "The average grade of the five tests, in which the lowest score was dropped is: " << setw(5) << result << "." << endl;
}

double findHighest(double a, double b, double c, double d, double e) {
	double highest = a;
	if (b > a) {
		highest = b;
	}
	else if (b < c) {
		highest = c;
	}
	else if (c < d) {
		highest = d;
	}
	else if (d < e) {
		highest = e;
	}

	return highest;
}
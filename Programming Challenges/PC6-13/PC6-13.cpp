//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program calculates the average number of days that a company's employees are absent from work.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void numEmployees(int&);
int numDays(int a);
double averageCalculator(double a, double b);

int main ()
{

	int numberOfEmploys, totalDaysMissed; 
	double avgDaysMissed;
	do{
	numEmployees(numberOfEmploys);

	totalDaysMissed = numDays(numberOfEmploys);

	avgDaysMissed = averageCalculator(totalDaysMissed, numberOfEmploys);

	cout << right;
	cout << fixed << showpoint << setprecision(2);
	cout << "Your employees have missed an average of " << avgDaysMissed << " days this year." << endl;

	return 0;
}

void numEmployees(int& a) {
	cout << "Please input the number of employees: ";
	cin >> a;
	cout << endl;
}

int numDays(int a) {
	int totalDays = 0;

	for (int i = 0; i < a; i++) {
		int added;
		cout << "How many days has this Employee missed: ";
		cin >> added;

		totalDays += added;
	}

	return totalDays;
}

double averageCalculator(double a, double b) {
	double result;

	result = (a / b) * 1.0;

	return result;
}
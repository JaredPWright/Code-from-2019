//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This is a menu-driven program that calculates the present value needed or the future value accrued based on user's choice.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void menuMain(int &);
void menuInputOneA(double&);
void menuInputOneB(double&);
void menuInputTwo(double&);
void menuInputThree(double&);
double valuePresent(double f, double r, double n);
double valueFuture(double p, double r, double n);

int main()
{
	int menuChoice;
	double presentValue, futureValue, interestRate, lengthOfTime;
	
	do {
		menuMain(menuChoice);
		
		if (system("CLS")) system("clear");
		
		if (menuChoice == 1) {
			menuInputOneA(futureValue);
			menuInputTwo(lengthOfTime);
			menuInputThree(interestRate);

			presentValue = valuePresent(futureValue, interestRate, lengthOfTime);

			cout << right;
			cout << "The amount that you would need to deposit today to receive " << futureValue << " in " << lengthOfTime << " years is: " << presentValue << " dollars." << endl;
			cout << endl;
		}
		else if (menuChoice == 2) {
			menuInputOneB(presentValue);
			menuInputTwo(lengthOfTime);
			menuInputThree(interestRate);

			futureValue = valueFuture(presentValue, interestRate, lengthOfTime);

			cout << right;
			cout << "If you deposited " << presentValue << " today at an interest rate of " << interestRate << " then in " << lengthOfTime << " years you would have " << futureValue << " dollars." << endl;
			cout << endl;
		}
		
	} while (menuChoice == 1 || menuChoice == 2);

	cout << "Thank you for choosing our product today! Please press any key to exit." << endl;

	return 0;
}

void menuMain(int &a) {
	cout << right;
	cout << "MENU SELECT" << endl;
	cout << "________________" << endl;
	cout << "1. FUTURE  VALUE CALCULATOR" << endl;
	cout << "2. PRESENT VALUE CALCULATOR" << endl;
	cout << "3. EXIT PROGRAM			" << endl;
	cin >> a;
}

void menuInputOneA(double &a) {
	cout << right;
	cout << "Please input the indicated values:" << endl;
	cout << "______________________________________" << endl;
	cout << "What value do you wish to recieve: ";
	cin >> a;
	cout << endl;
}

void menuInputTwo(double &a) {
	cout << right;
	cout << "Length of time to wait: ";
	cin >> a;
	cout << endl;
}

void menuInputThree(double &a) {
	cout << right;
	cout << "Interest rate at time of deposit: ";
	cin >> a;
	cout << endl;
}

double valuePresent(double f, double r, double n) {
	double bottomHalf;
	double result;

	r /= 100;

	bottomHalf = 1 + r;
	bottomHalf = pow(bottomHalf, n);

	result = f / bottomHalf;

	return result;
}

void menuInputOneB(double& a) {
	cout << right;
	cout << "Please input the indicated values:" << endl;
	cout << "______________________________________" << endl;
	cout << "What value do you wish to deposit: ";
	cin >> a;
	cout << endl;
}

double valueFuture(double p, double r, double n) {
	double result;
	double secondHalf;

	r /= 100;

	secondHalf = 1 + r;
	secondHalf = pow(secondHalf, n);

	result = secondHalf * p;

	return result;
}
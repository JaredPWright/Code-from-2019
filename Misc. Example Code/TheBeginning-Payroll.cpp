//Jared Wright, Intro to Programming, Section 11F
//This Program calculates Gross Pay

#include <iostream>
using namespace std;

int main() {

	double hours, rate, pay;

	cout << "Please enter hours worked:";
	cin >> hours;

	cout << "Please enter rate of pay:";
	cin >> rate;

	pay = hours * rate;

	cout << "You worked " << hours << " hours"
		<< " at a rate of " << rate
		<< " and earned " << pay << " !!!" << endl;



	return 0;
}
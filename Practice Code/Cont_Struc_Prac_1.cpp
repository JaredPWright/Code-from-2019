//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//This program calculates grade averages, and, if high enough, congratulates the user.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double grade1, grade2, grade3, grade_av;

	cout << "Hello, User! This is a grade average calculator." << endl;
	cout << "Please enter Grade 1: ";
	cin >> grade1;
	cout << " " << endl;
	cout << "Please enter Grade 2: ";
	cin >> grade2;
	cout << " " << endl;
	cout << "Please enter Grade 3: ";
	cin >> grade3;
	cout << " " << endl;

	grade_av = (grade1 + grade2 + grade3) / 3;

	const int COL1 = 12;
	const int COL2 = 15;

	cout << fixed << showpoint << setprecision(2);
	cout << right;

	cout << "GRADE TABLE" << endl;
	cout << "___________" << endl;
	cout << setw(COL1) << "Grade 1: " << endl;

	if (grade_av >= 90) {
		cout << "Congratulations! You're in the A-Range!" << endl;
	}

	cout << "Thank you for using the Grade Average Calculator!";

	return 0;
}
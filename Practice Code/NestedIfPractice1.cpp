//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This is practice with the if/else control structure

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double user_score;

	cout << "Hello there! This program will tell you your letter grade based on your score." << endl;
	cout << "Please input your score: ";
	cin >> user_score;
	cout << " " << endl;

	const double A_Grade = 90;
	const double B_Grade = 80;
	const double C_Grade = 70;
	const double D_Grade = 60;
	const double F_Grade = 50;
	const double min_grade = 0;
	const double max_grade = 100;


	if (user_score >= min_grade && user_score =< max_grade) {
		if (user_score >= A_Grade) {
			cout << "You recieved an A! Great job!" << endl;
		}
		else if (user_score >= B_Grade && user_score =< A_Grade) {
			cout << "You recieved a B! Good work!" << endl;
		}
		else if (user_score >= C_Grade && user_score =< B_Grade) {
			cout << "You recieved a C! Not bad!" << endl;
		}
		else if (user_score >= D_Grade && user_score =< C_Grade) {
			cout << "You recieved a D! What should we work on for next time?" << endl;
		}
		else if (user_score >= D_Grade && user_score =< D_Grade) {
			cout << "You recieved an F. Better luck next time?" << endl;
		}
	}
	return 0;
}
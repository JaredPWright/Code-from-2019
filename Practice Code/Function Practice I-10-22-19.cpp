//Jared Wright
//Intro to Programming with Prof. Goulden
//Practice with Functions

#include <iostream>
using namespace std;

double addThree(double, double, double);
double averageThree(double, double, double);
double smallestThree(double, double, double);

int main()
{
	double p, d, q;

	cout << "Hello, User!" << endl;
	cout << "Please enter a number: ";
	cin >> p;
	cout << endl;
	cout << "Please enter another number: ";
	cin >> d;
	cout << endl;
	cout << "Please enter a third number: "; 
	cin >> q;
	cout << endl;

	cout << "The three numbers added together is: " << addThree(p, d, q) << "." << endl;
	cout << "The three numbers averaged is: " << averageThree(p, d, q) << "." << endl;
	cout << "The smallest of the three numbers is: " << smallestThree(p, d, q) << "." << endl;
	return 0;
}

double addThree(double a, double b, double c){
	double result;
	result = a + b + c;
	return result;
}

double averageThree(double a, double b, double c) {
	double result;
	result =  addThree(a, b, c) / 3;
	return result;

}

double smallestThree(double a, double  b, double c) {
	double result = a;

	if (a < b && a < c) {
		result = a;
	}
	else if (b < c && b < a) {
		result = b;
	}
	else if (c < a && c < b) {
		result = c;
	}

	return result;
}
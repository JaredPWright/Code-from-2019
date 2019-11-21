//Jared Wright, Section 11F
//Intro to programming with Prof. Goulden
//This program demonstrates how to exchange function parameters.

#include <iostream>
using namespace std;

void rswap(int & a, int & b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{

	int a = 10, b = 20;


	cout << "A is " << a << " and B is " << b << endl;
	rswap(a, b);
	cout << "A is " << a << " and B is " << b << endl;

	return 0;
}
//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program is to practice input validation with looping.

#include <iostream>
#include <string>
using namespace std;

int main()
{

	int num;
	int count = 0;
	const int dummy = 1;

	do {
		cout << "Hello, User! Please input an even number: ";
		cin >> num;
		num = num % 2;
		count++;

	} while (num > 0); 
	if (count > dummy) {
			cout << "It took you " << count << " times to input an even number! Yikes... " << endl;
	}
	else {
			cout << "It took you " << count << " time to input an even number. Good job!" << endl;
	}


	return 0;
}
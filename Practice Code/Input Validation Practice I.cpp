//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program is to practice input validation with looping.

#include <iostream>
#include <string>
using namespace std;

int main()
{

	double num;
	int count = 1;
	const int dummy = 1;

	cout << "Hello, User! Please input an even number: ";
	cin >> num;

	num = num / 2;

	while (num > 1) {
		cout << "That is not an EVEN number. Please input an EVEN number: ";
		cin >> num;
		num = num / 2;
		count++;
	}

	if (count > dummy) {
		cout << "It took you " << count << " times to input an even number. Yikes..." << endl;
	}
	else {
		cout << "It took you " << count << " times to input an even number. Good job!" << endl;
	}
	return 0;
}
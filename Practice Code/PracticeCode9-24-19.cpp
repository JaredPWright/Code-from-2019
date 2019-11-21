//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//A Program the Prof asked for. It's a Star Trek reference.

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {

	int lights;

	cout << "How many lights are there? ";
	cin >> lights;

	const int val_1 = 1;

	if (lights == val_1) {
		cout << "THERE IS ONE LIGHT!!!!" << endl;
	}
	else {
		cout << "THERE ARE " << lights << " LIGHTS!!!!" << endl;
	}

	return 0;
}
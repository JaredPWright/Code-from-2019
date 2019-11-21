//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program is a number guessing game. The computer refs, human plays. 

#include <iostream>
#include <iomanip> 
#include <cmath>
#include <string>
using namespace std;

int main()
{

	int the_number, guess;
	int count = 0;

	cout << "Hello there! This is the Random Number game. I'll think of a number, and you'll guess it!" << endl;
	cout << "Let's begin!" << endl;
	cout << "" << endl;
	srand((unsigned)time(0));
	the_number = rand() % 1000;
	cout << "Alright I've thought of my number. Give me an integer between 0 and 1000. I'll tell you if it's high or low, then you'll guess again." << endl;
	do {
		cout << "Please input your guess: ";
		cin >> guess;
		cout << endl;
		if (guess < the_number) {
			cout << "Your number is less than the number I guessed." << endl;
			cout << endl;
		}
		else if(guess > the_number) {
			cout << "Your number is greater than the number I guessed." << endl;
			cout << endl;
		}
		else {
			cout << endl;
		}

		count++;

	} while (guess < the_number || guess > the_number);

	cout << "Congratulations, you guessed the number! It took you " << count << " tries!" << endl;
	cout << "Thanks for playing!" << endl;

	return 0;
}
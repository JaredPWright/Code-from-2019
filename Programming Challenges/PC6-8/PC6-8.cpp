//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program simulates a coin toss. 


#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int coinToss();

int main()
{

	int numToss;
	int numHeads = 0;
	int numTails = 0;

	srand((unsigned)time(0));
	
	cout << "Welcome to Coin Toss Simulator!" << endl;
	cout << "How many times would you like the coin to be tossed: ";
	cin >> numToss;

	for (int count = 0; count < numToss; count++) {
		int tossVal;
		int heads = 0;
		int tails = 1;
		
		tossVal = coinToss();

		if (tossVal == heads) {
			cout << "Heads" << endl;
			numHeads++;
		}
		else {
			cout << "Tails" << endl;
			numTails++;
		}
	}

	cout << endl;
	cout << "The number of Heads was: " << numHeads << "." << endl;
	cout << "The number of Tails was: " << numTails << "." << endl;

	return 0;
}

int coinToss() {
	int result;

	result = (rand() % (1 - 0 + 1)) + 0;

	return result;
}
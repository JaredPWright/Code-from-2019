//Jared Wright, Section 11F
//Intro to programming with Prof. Goulden
//This program determines if a number is prime.

#include <iostream>
using namespace std;

bool isPrime(int p) {
	bool result = true; //Set the Default

	if (p >= 2) { //Precheck. Is this Number in the running at all? If not, it's not prime. If so, please continue.
		int d = 2;
		int stop = sqrt(p); //Find the square root. It'll be the maximum option for divisibility. Our "stop" value.
		int answer;

		if (d <= stop) {//Another precheck. Is the given stop value greater than two? If not, falsify. If so, begin more tests.
			do {
				answer = p % d;//Mod to find remainder. If there isn't one, it ain't prime.
				if (answer == 0) {//If it is, the result is false. Break the loop.
					result = false;
					break;
				}
				else {//Mod the counter if it came back clean.
					d++;
				}
			} while (d <= stop);//Default exit condition for the loop.
		}
	}
	else {//The other end of the first precheck.
		result = false;
	}

	return result;//Send the result.
}

int main() {

	for (int i = 0; i <= 101; i++) {//Feeds values into the function to test. 
		if (isPrime(i)) {//The verification message. It'll only show the primes. 
			cout << i << " is prime!" << endl;
		}
	}

	return 0;
}
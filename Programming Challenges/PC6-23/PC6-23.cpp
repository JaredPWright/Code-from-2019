//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program delivers a file with a list of prime numbers to the user.

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
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

void getRange(int & a) {//This Function collects the range from the User. No particular order.
	
	cout << "Please enter a value for the range: ";
	cin >> a;
	cout << endl;
	
}

void getName(string & a) {//This Function collects the file name that the user wants.
	cout << "Please name your file: ";
	cin.ignore();
	getline(cin, a);
	cout << endl;

}

int decideHigh(int a, int b) {//This Function determines the highest number of the two inputs as the ceilling for the loop.
	int high = a;

	if (b > a) {
		high = b;
	}

	return high;
}

int decideLow(int a, int b) {//This Function determines the highest number of the two inputs as the floor for the loop.
	int low = a;

	if (b < a) {
		low = b;
	}

	return low;
}



int main() {

	int numRange1, numRange2;
	
	cout << "Welcome to the Prime List Generator! You give us a range of numbers, we give you the primes!" << endl;
	
	getRange(numRange1);//Call the function to get the numbers for the ranges.
	getRange(numRange2);
	
	string userFileName;//define the variable.
	getName(userFileName);//Call the name collection function

	ofstream outputFile;//Preparing the file for writing.
	outputFile.open(userFileName.c_str());//Opening the file for writing, telling it to accept user input for the name. The
										  //The .c_str() tells it to convert the string to a collection of characters so the function can understand it.
	for (int i = decideLow(numRange1,numRange2); i <= decideHigh(numRange1, numRange2); i++) {//Feeds values into the function to test. 
		if (isPrime(i)) {//The verification message. It'll only show the primes. 
			outputFile << i << " is prime!" << endl;
		}
	}
	
	outputFile.close();//Close the file. 

	return 0;
}
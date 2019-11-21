//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program reads a file of numbers and tells the user how many there were.

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

bool isPrime(int p){
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

	int primeCounter = 0;
	string filename;
	int reader = 0;

	cout << "Welcome to the Prime List Generator! You give us a file to read, we give you the number of primes!" << endl;
	cout << "Please input the directory path of the file you wish to read: ";
	getline(cin, filename);
	
	ifstream fin;
	fin.open(filename);

	while (fin >> reader){//Read file until finished. 
		if (isPrime(reader)) {//The verification function call.  
			primeCounter++;//Augment the counter if you encounter a true report.
		}
	}
	
	cout << endl;
	cout << "There were " <<  primeCounter << " prime numbers in the file." << endl;//Report the count back to the user. 

	return 0;
}
//Jared Wright
//Intro to Programming with Professor Goulden, Section 11F
//A stat rolling program

#include <iostream>
#include <ctime>
using namespace std;

int main()
{

	//This gets a random seed
	srand((unsigned)time(0));

	//The dice rolls are simulated here. Though they are pseudorandom
	int d1 = rand() % 6 + 1;
	int d2 = rand() % 6 + 1;
	int d3 = rand() % 6 + 1;

	//Calculating out the results of the rolling
	int stat = d1 + d2 + d3;

	//Spit out the results
	cout << "Programming Skill: " << stat << endl;

	return 0;
}
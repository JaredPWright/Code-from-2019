//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//A program that rolls some dice.

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int rollDice(int rollNum, int rollSide);
int rollDice(int rollNum);

int main()
{

	srand((unsigned)time(0));

	cout << "Programming Skill: " << rollDice(3, 6) << endl;
	cout << "Rolling 5 6 sided dice: " << rollDice(5) << endl;

	return 0;
}

int rollDice(int rollNum, int rollSide) {

	int stat;

	int roll;
	int rollAll = 0;

	for (int count = 1; count <= rollNum; count++) {
		roll = rand() % rollSide + 1;
		rollAll += roll;
	}
	
	stat = rollAll;

	return stat;
}

int rollDice(int rollNum) {

	int stat;

	int roll;
	int rollAll = 0;

	for (int count = 1; count <= rollNum; count++) {
		roll = rand() % 6 + 1;
		rollAll += roll;
	}

	stat = rollAll;

	return stat;
}
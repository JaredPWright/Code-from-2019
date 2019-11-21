//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//This program teaches some basic concepts of looping.

#include <iostream>
using namespace std;

int main()
{

	cout << "Welcome to 'Hello Counter!'" << endl;
	cout << "" << endl;

	cout << "How many times would you like to be greeted with a Hello? ";
	int countHello;
	cin >> countHello;

	int count = 1;
	while (count <= countHello)
	{
		cout << "Hello!" << endl;
		count++;
	}

	return 0;
}
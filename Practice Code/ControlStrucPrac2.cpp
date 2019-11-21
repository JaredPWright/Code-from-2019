//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//More practice with Control Structures

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int integer_1, even_odd; //Declaring Variables

	cout << "Hello, User! Please input an integer: "; //Greeting user and asking for the integer
	cin >> integer_1;

	even_odd = integer_1 % 2; //Ask for the remainder of the integer div 2, if there is no remainder, it's even.

	if (even_odd == 0){//Here's the if/else statement. If the number equals anything other than 0, it's odd. 
		cout << "Your number is even!" << endl;
	}
	else {
		cout << "Your number is odd!" << endl;
	}

	cout << "Thank you!" << endl;

	return 0;
}
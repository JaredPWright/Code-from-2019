//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This is an ATM menu screen. It doesn't do much more than loop.

#include <iostream>
#include <iomanip>	
#include <cmath>
using namespace std;

int main()
{

	int menu_option;
	const int ext_key = 5;
	const int opt_one = 1;
	const int opt_two = 2;
	const int opt_three = 3;
	const int opt_four = 4;

	do {
		cout << "OCCC ATM				   " << endl; //This is the Menu. Nothing fancy.
		cout << "__________________________" << endl;
		cout << "Please choose an option:  " << endl;
		cout << "1. BALANCE INQUIRY		   " << endl;
		cout << "2. WITHDRAW FROM CHECKING " << endl;
		cout << "3. WITHDRAW FROM SAVINGS  " << endl;
		cout << "4. DEPOSIT				   " << endl;
		cout << "5. EXIT				   " << endl;
		cin >> menu_option;						 //Input from user accepted.
		if (system("CLS")) system("clear");
		switch (menu_option) {
		case opt_one: cout << "Your balance is: " << endl;
			break;
		case opt_two: cout << "Enter withdrawl amount: " << endl;
			break;
		case opt_three: cout << "Enter withdrawl amount: " << endl;
			break;
		case opt_four: cout << "Please insert Bills or Check below. " << endl;
			break;
		}
	} while (menu_option < ext_key || menu_option > ext_key);
	
	return 0;
}
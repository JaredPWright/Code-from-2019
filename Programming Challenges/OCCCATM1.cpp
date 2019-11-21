//Jared Wright, Section 11F
//Intro to Programming with Prof. Goulden
//This program is an extra credit assignment. The task is to create an ATM selection menu that refreshes itself with every selection
//until the exit option is selected.
//Made with help from cplusplus.com. It was an article by User Duthomhas called "Clear the Screen."

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

	int menu_selection; //The user's input variable
	const int ext_key = 5; //The Post-Test Variable

	do {
		cout << "OCCC ATM				   " << endl; //This is the Menu. Nothing fancy.
		cout << "__________________________" << endl;
		cout << "Please choose an option:  " << endl;
		cout << "1. BALANCE INQUIRY		   " << endl;
		cout << "2. WITHDRAW FROM CHECKING " << endl;
		cout << "3. WITHDRAW FROM SAVINGS  " << endl;
		cout << "4. DEPOSIT				   " << endl;
		cout << "5. EXIT				   " << endl;
		cin >> menu_selection;						 //Input from user accepted.
		if (system("CLS")) system("clear");			 //This ugly thing clears the screen upon input. Had to look online. I don't even really understand it. 
	} while (menu_selection < ext_key || menu_selection > ext_key); //Basically, this is an input validation to keep the loop running.
																	//While the user's input is below the ext_key constant, or above it,
	cout << "Thank you for using OCCC ATM!" << endl;				// keep the thing running. Once it's hit, though, terminate. 
	cout << "Have a wonderful day!" << endl;

	return 0;
}
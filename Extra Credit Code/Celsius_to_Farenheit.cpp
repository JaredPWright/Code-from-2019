//Jared Wright, Intro to Programming with Dr. Goulden
//Section 11F
//This program converts degrees Celsius to degrees Farenheit.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double f, c;
	//These two lines greet the user and tell them the program's purpose.
	cout << "Hello, there! This program converts degrees Celsius into" << endl;
	cout << "degrees Farenheit." << endl;
	cout << "" << endl;

	//Asks user for the "c" input, and then accepts it.
	cout << "Please input the temperature in Celsius" << endl;
	cin >> c;
	cout << "" << endl;

	//The conversion of degrees Celsius to degrees Farenheit.
	f = (9. / 5.) * c + 32.;

	//Return result to the user.
	cout << fixed << showpoint << setprecision(2);
	cout << "The temperature is " << setw(2) << f << " degrees Farenheit." << endl;











	return 0;
}
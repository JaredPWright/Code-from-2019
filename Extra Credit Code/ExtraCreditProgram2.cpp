//Jared Wright, Section 11F
//INTRO TO PROGRAMMING with Professor Goulden
//This program Calculates the sale price and profit from a sold box.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//Variable names for User input data.
	double length, width, height, volume, charge, cost, profit;
	double charge_per_ft3 = 0.50; //These two lines are the two constants used in calculations.
	double cost_per_ft3 = 0.23;  // Ditto ^^

	//This chunk of code accepts the user's input for desired crate dimensions.
	cout << "Please input the desired Length of the crate: " << endl;
	cin >> length;
	cout << endl;
	cout << "Please input the desired Width of the crate: " << endl;
	cin >> width;
	cout << endl;
	cout << "Please input the desired height of the crate: " << endl;
	cin >> height;

	//Calculates volume
	volume = length * width * height;

	//Calculates the charge and cost for the desired crate.
	charge = charge_per_ft3 * volume;
	cost = cost_per_ft3 * volume;

	//Calculates the profit based off of the respective costs of the crates.
	profit = charge - cost;

	const int COL = 12;
	cout << right;
	//Display all of the User's Information and all the Cost and Pricing information
	cout << fixed << showpoint << setprecision(3);
	cout << "DIMESIONS OF THE CRATE" << endl;
	cout << "----------------------" << endl;
	cout << "The desired length of the crate was: " << setw(COL) << length << "." << endl;
	cout << "The  desired width of the crate was: " << setw(COL) << width << "." << endl;
	cout << "The desired height of the crate was: " << setw(COL) << height << "." << endl;
	cout << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << right;
	cout << "COST AND PROFIT" << endl;
	cout << "---------------" << endl;
	cout << "The  cost  of  the Crate is: " << setw(COL) << cost << "." << endl;
	cout << "The charge for the Crate is: " << setw(COL) << charge << "." << endl;
	cout << "The profit for the Crate is: " << setw(COL) << profit << "." << endl;

	return 0;
}
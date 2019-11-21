//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//This program calculates the shipping charges of a ceratain company.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{

	double pak_weight, charge_miles, miles_traveled;

	const int range1 = 2;
	const int range2 = 6;
	const int range3 = 10;
	const int range4 = 20;

	const int weight_min = 0;
	const int weight_max = 20;
	const int distance_min = 10;
	const int distance_max = 3000;
	const int miles_base = 500;

	const double rate1 = 1.10;
	const double rate2 = 2.20;
	const double rate3 = 3.70;
	const double rate4 = 4.80;

	const int sprd = 15;

	cout << "Thank you for choosing We Ship 'Em Inc.! 'You pack 'em, we ship em!'" << endl;
	cout << "" << endl;
	cout << "What is the weight of the package you would like shipped? (In kilograms.) ";
	cin >> pak_weight;
	cout << "" << endl;
	cout << "How far would you like the package shipped? (In miles.) ";
	cin >> miles_traveled;
	cout << "" << endl;

	if ((miles_traveled >= distance_min && pak_weight >= weight_min) && (miles_traveled <= distance_max && pak_weight <= weight_max)) {
		if (pak_weight < range1) {
			charge_miles = (rate1 * miles_traveled) / miles_base;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "ORDER REVIEW" << endl;
			cout << "_____________" << endl;
			cout << "Charge per 500 Miles: " << setw(sprd) << rate1 << endl;
			cout << "Weight of Package:    " << setw(sprd) << pak_weight << endl;
			cout << "Miles to be Shipped:  " << setw(sprd) << miles_traveled << endl;
			cout << "Total Charge:         " << setw(sprd) << charge_miles << endl;
		}
		else if (pak_weight > range1 && pak_weight <= range2) {
			charge_miles = (rate2 * miles_traveled) / miles_base;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "ORDER REVIEW" << endl;
			cout << "_____________" << endl;
			cout << "Charge per 500 Miles: " << setw(sprd) << rate2 << endl;
			cout << "Weight of Package:    " << setw(sprd) << pak_weight << endl;
			cout << "Miles to be Shipped:  " << setw(sprd) << miles_traveled << endl;
			cout << "Total Charge:         " << setw(sprd) << charge_miles << endl;
		}
		else if (pak_weight > range2 && pak_weight <= range3) {
			charge_miles = (rate3 * miles_traveled) / miles_base;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "ORDER REVIEW" << endl;
			cout << "_____________" << endl;
			cout << "Charge per 500 Miles: " << setw(sprd) << rate3 << endl;
			cout << "Weight of Package:    " << setw(sprd) << pak_weight << endl;
			cout << "Miles to be Shipped:  " << setw(sprd) << miles_traveled << endl;
			cout << "Total Charge:         " << setw(sprd) << charge_miles << endl;
		}
		else if (pak_weight > range3 && pak_weight <= range4) {
			charge_miles = (rate4 * miles_traveled) / miles_base;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "ORDER REVIEW" << endl;
			cout << "_____________" << endl;
			cout << "Charge per 500 Miles: " << setw(sprd) << rate4 << endl;
			cout << "Weight of Package:    " << setw(sprd) << pak_weight << endl;
			cout << "Miles to be Shipped:  " << setw(sprd) << miles_traveled << endl;
			cout << "Total Charge:         " << setw(sprd) << charge_miles << endl;
		}
	}
	else {
		cout << "Please restart the program and input a weight of at least 0kg, but less than 20kg, and a distance of at least 10mi, but no more than 3000mi." << endl;
	}

	return 0;
}
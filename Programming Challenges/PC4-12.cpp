//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//This program calculates bulk sales discounts.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

	//Variables having to do with the pricing of the order.
	double number_of_paks;
	double price_of_order;
	double pricewithdiscount;

	//Constants having to do with the discounts and their ranges.
	const double discount1 = .2;
	const double discount2 = .3;
	const double discount3 = .4;
	const double discount4 = .5;
	const double range1a = 10;
	const double range1b = 19;
	const double range2a = 20;
	const double range2b = 49;
	const double range3a = 50;
	const double range3b = 99;
	const double range4 = 100;

	//The minimum number of the packs, and the price of each pack.
	const int priceofpak = 99;
	const int min_numpaks = 1;

	//Prompt the user for the number of packages to purchase.
	cout << "How many packages would you like to purchase? ";
	cin >> number_of_paks;
	cout << " " << endl;

	//Calculate the price of the order.
	price_of_order = priceofpak * number_of_paks;

	//The calculation of the price of the order with an input validation. 
	if (number_of_paks >= min_numpaks) {
		if (number_of_paks <= range1a && number_of_paks >= min_numpaks) {
			cout << "Your order will cost " << price_of_order << " dollars." << endl;
		}
		else if (number_of_paks >= range1a && number_of_paks <= range1b) {
			pricewithdiscount = (price_of_order * discount1);
			pricewithdiscount = price_of_order - pricewithdiscount;
			cout << "Your order before the discount would have cost " << price_of_order << "." << endl;
			cout << "Your order with the discount will cost " << pricewithdiscount << " dollars." << endl;
		}
		else if (number_of_paks >= range2a && number_of_paks <= range2b) {
			pricewithdiscount = price_of_order * discount2;
			pricewithdiscount = price_of_order - pricewithdiscount;
			cout << "Your order before the discount would have cost " << price_of_order << "." << endl;
			cout << "Your order with the discount will cost " << pricewithdiscount << " dollars." << endl;
		}
		else if (number_of_paks >= range3a && number_of_paks <= range3b) {
			pricewithdiscount = price_of_order * discount3;
			pricewithdiscount = price_of_order - pricewithdiscount;
			cout << "Your order before the discount would have cost " << price_of_order << "." << endl;
			cout << "Your order will cost " << pricewithdiscount << " dollars." << endl;
		}
		else if (number_of_paks >= range4) {
			pricewithdiscount = price_of_order * discount4;
			pricewithdiscount = price_of_order - pricewithdiscount;
			cout << "Your order before the discount would have cost " << price_of_order << "." << endl;
			cout << "Your order will cost " << pricewithdiscount << " dollars." << endl;
		}
	}
	else {
		cout << "Please close and relaunch the program, then enter a number greater than zero." << endl;
	}

	return 0;
}
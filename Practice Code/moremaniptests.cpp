//Jared Wright
//Intro to Programming with Dr. Goulden, Section 11F
//This program asks for sales figures for three days. The total sales are calculated and displayed in a table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double day1, day2, day3, total;
	int COL = 8;

	//Ask for sales for each day
	cout << "Enter the sales for Day One: ";
	cin >> day1;
	cout << "Enter the sales for Day Two: ";
	cin >> day2;
	cout << "Enter the sales for Day Three: ";
	cin >> day3;

	//calculate total sales.
	total = day1 + day2 + day3;

	//Display the total sales figures.
	cout << "\nSales Figures\n";
	cout << "---------------\n";
	cout << setprecision(2) << fixed;
	cout << "Day One: " << setw(COL) << day1 << endl;
	cout << "Day Two: " << setw(COL) << day2 << endl;
	cout << "Day Three: " << setw(COL) << day3 << endl;
	cout << "Total: " << setw(COL) << total << endl;
	return 0;
}
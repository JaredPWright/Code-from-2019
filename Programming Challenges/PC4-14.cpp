//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//This Program Calculates bank charges.

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//The variables for checks and balance, as well as the constant minimums for input validation (inpval)
	int checks;
	double balance, extra_charge, total_charge;
	const int min_checks = 0;
	const double min_balance = 0;
	
	//These are the range values of checks for inpval.
	const int range1a = 20;
	const int range1b = 39;
	const int range2a = 40;
	const int range2b = 59;
	const int range3 = 60;

	//The different rates of charge per number of checks.
	const double charge1 = .10;
	const double charge2 = .08;
	const double charge3 = .06;
	const double charge4 = .04;

	//Constant fees defined, low balance constant defined. 
	const double base_fee = 10.00;
	const double low_fee = 15.00;
	const double low_fee1 = 0.00;
	const double low_balance = 400.00;

	//The setw value
	const int COL = 15;

	//Prompt user for # of checks and their current balance, accept results.
	cout << "Please enther the number of checks cashed this month: ";
	cin >> checks;
	cout << " " << endl;
	cout << "Please input your current bank balance: ";
	cin >> balance;
	cout << " " << endl;

	if (checks >= min_checks && balance >= min_balance) {
		if (balance < low_balance) {
			if (checks < range1a) {
				extra_charge = checks * charge1;
				total_charge = extra_charge + low_fee + base_fee;
				cout << fixed << showpoint << setprecision(2);
				cout << right;
				cout << "Your Fees" << endl;
				cout << "_________" << endl;
				cout << "Base Fee:        " << setw(COL) << base_fee << endl;
				cout << "Low Balance Fee: " << setw(COL) << low_fee << endl;
				cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
				cout << "Total Fees:      " << setw(COL) << total_charge << endl;
			}
			else if (checks >= range1a && checks <= range1b) {
				extra_charge = checks * charge2;
				total_charge = extra_charge + low_fee + base_fee;
				cout << fixed << showpoint << setprecision(2);
				cout << right;
				cout << "Your Fees" << endl;
				cout << "_________" << endl;
				cout << "Base Fee:        " << setw(COL) << base_fee << endl;
				cout << "Low Balance Fee: " << setw(COL) << low_fee << endl;
				cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
				cout << "Total Fees:      " << setw(COL) << total_charge << endl;
			}
			else if (checks >= range2a && checks <= range2b) {
				extra_charge = checks * charge3;
				total_charge = extra_charge + low_fee + base_fee;
				cout << fixed << showpoint << setprecision(2);
				cout << right;
				cout << "Your Fees" << endl;
				cout << "_________" << endl;
				cout << "Base Fee:        " << setw(COL) << base_fee << endl;
				cout << "Low Balance Fee: " << setw(COL) << low_fee << endl;
				cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
				cout << "Total Fees:      " << setw(COL) << total_charge << endl;
			}
			else if (checks >= range3) {
				extra_charge = checks * charge4;
				total_charge = extra_charge + low_fee + base_fee;
				cout << fixed << showpoint << setprecision(2);
				cout << right;
				cout << "Your Fees" << endl;
				cout << "_________" << endl;
				cout << "Base Fee:        " << setw(COL) << base_fee << endl;
				cout << "Low Balance Fee: " << setw(COL) << low_fee << endl;
				cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
				cout << "Total Fees:      " << setw(COL) << total_charge << endl;
			}
		}
		else if (checks < range1a) {
			extra_charge = checks * charge1;
			total_charge = extra_charge + base_fee;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "Your Fees" << endl;
			cout << "_________" << endl;
			cout << "Base Fee:        " << setw(COL) << base_fee << endl;
			cout << "Low Balance Fee: " << setw(COL) << low_fee1 << endl;
			cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
			cout << "Total Fees:      " << setw(COL) << total_charge << endl;
		}
		else if (checks >= range1a && checks <= range1b) {
			extra_charge = checks * charge2;
			total_charge = extra_charge + base_fee;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "Your Fees" << endl;
			cout << "_________" << endl;
			cout << "Base Fee:        " << setw(COL) << base_fee << endl;
			cout << "Low Balance Fee: " << setw(COL) << low_fee1 << endl;
			cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
			cout << "Total Fees:      " << setw(COL) << total_charge << endl;
		}
		else if (checks >= range2a && checks <= range2b) {
			extra_charge = checks * charge3;
			total_charge = extra_charge + base_fee;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "Your Fees" << endl;
			cout << "_________" << endl;
			cout << "Base Fee:        " << setw(COL) << base_fee << endl;
			cout << "Low Balance Fee: " << setw(COL) << low_fee1 << endl;
			cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
			cout << "Total Fees:      " << setw(COL) << total_charge << endl;
		}
		else if (checks >= range3) {
			extra_charge = checks * charge4;
			total_charge = extra_charge + base_fee;
			cout << fixed << showpoint << setprecision(2);
			cout << right;
			cout << "Your Fees" << endl;
			cout << "________________________________________________________" << endl;
			cout << "Base Fee:        " << setw(COL) << base_fee << endl;
			cout << "Low Balance Fee: " << setw(COL) << low_fee1 << endl;
			cout << "Checking Fee:    " << setw(COL) << extra_charge << endl;
			cout << "Total Fees:      " << setw(COL) << total_charge << endl;
		}
	}
	else {
		cout << "Please exit the application and enter only non-negative numbers." << endl;
	}

	cout << "" << endl;
	cout << "Thank you for using our service today!" << endl;

	return 0;
}
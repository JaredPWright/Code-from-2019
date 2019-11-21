//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//This program takes sales and respresents them in bar graph form by hundreds.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

	double store1, store2, store3, store4, store5, store6, store7, store8, store9, store10;
	int display;

	const int TOP = 50;
	const int COL1 = 15;
	const int COL2 = 15;
	
	cout << "Hello! Welcome to the Sales Bar Creator! " << endl;
	cout << "Please input today's sales totals for ten stores: " << endl;
	cout << "__________________________________________________" << endl;
	cout << "Store 1: ";
	cin >> store1;
	cout << endl;
	cout << "Store 2: ";
	cin >> store2;
	cout << endl;
	cout << "Store 3: ";
	cin >> store3;
	cout << endl;
	cout << "Store 4: ";
	cin >> store4;
	cout << endl;
	cout << "Store 5: ";
	cin >> store5;
	cout << endl;
	cout << "Store 6: ";
	cin >> store6;
	cout << endl;
	cout << "Store 7: ";
	cin >> store7;
	cout << endl;
	cout << "Store 8: ";
	cin >> store8;
	cout << endl;
	cout << "Store 9: ";
	cin >> store9;
	cout << endl;
	cout << "Store 10: ";
	cin >> store10;
	cout << endl;

	cout << right;

	cout << "SALES GRAPH" << endl;

	for (int count = 1; count <= COL1 + COL2; count++) {
		cout << "_";
	}
	
	cout << endl;

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store1 / 100;
	}

	cout << "Store  1: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store2 / 100;
	}

	cout << "Store  2: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store3 / 100;
	}

	cout << "Store  3: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store4 / 100;
	}

	cout << "Store  4: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store5 / 100;
	}

	cout << "Store  5: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store6 / 100;
	}

	cout << "Store  6: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store7 / 100;
	}

	cout << "Store  7: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store8 / 100;
	}

	cout << "Store  8: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store9 / 100;
	}

	cout << "Store  9: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	for (int count1 = 0; count1 <= 10; count1++) {
		display = store10 / 100;
	}

	cout << "Store 10: ";

	if (display <= TOP) {
		for (int count = 1; count <= display; count++) {
			cout << "*";
		}
		cout << endl;
	}
	else {
		for (int count = 1; count <= TOP; count++) {
			cout << "*";
		}
		cout << "..." << endl;
	}

	return 0;
}
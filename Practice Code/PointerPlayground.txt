//Jared Wright
//This code is just gibberish as I practice and fumble around with pointers. 

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

void pointerTestI() {
	
	int testIntI = 25;
	
	int* testPoint = &testIntI;//The * operator tells the compiler that this is a pointer value. Not just some number. 
								//The & operator calls up the variable's actual address in memory to store in the pointer variable.
	int testIntII = *testPoint;
	//Be careful when initializing pointers. It can screw up memory if you don't keep them free, or know exactly where they are going. 
	//As best I understand it, anyway.
	cout << testIntII << endl;
	cout << endl;

}

void dynamicArrayTestUsingPointers() {
cout << "STARTING NEW TEST_________________________________________________________________________________________" << endl;

	int* arrayPoint = NULL;//Initialize it to NULL for safety. It tells the pointer that it isn't really pointing to anything.

	int inputParameter;

	cout << "INPUT NUMBER FOR ARRAY SIZE: ";
	cin >> inputParameter;

	arrayPoint = new int[inputParameter];
	for (int i = 0; i < inputParameter; i++) {
		arrayPoint[i] = { rand() % 1000000 };
		
		if (i % 10 == 0) {
			cout << endl;
		}

		cout << setw(7) << arrayPoint[i];
	}
	cout << endl;
	cout << endl;

	delete[] arrayPoint;

	arrayPoint = NULL;

}

int main() {

	srand(unsigned(time(0)));

	char decisionI;

	do {
		cout << "Do you want to run the pointerTest function? 'Y' or 'N': ";
		cin >> decisionI;
		cout << endl;
	} while ((decisionI != 'y' || decisionI != 'Y') && (decisionI != 'n' || decisionI != 'N'));

	if (decisionI == 'Y' || decisionI == 'y') {
		pointerTestI();
	}
	else if(decisionI == 'N' || decisionI == 'n'){
		cout << "CONTINUING PROGRAM..." << endl;
	}

	char decisionII;
	
	do {
		cout << "Do you want to run the dynamicArrayTestUsingPointers function? 'Y' or 'N': ";
		cin >> decisionII;
		cout << endl;
	} while ((decisionII != 'y' || decisionII != 'Y') || (decisionII != 'n' || decisionII != 'N'));

	if (decisionII == 'Y' || decisionII == 'y') {
		dynamicArrayTestUsingPointers();
	}
	else if (decisionII == 'N' || decisionII == 'n') {
		cout << "CONTINUING PROGRAM..." << endl;
	}

	return 0;
}
//Jared Wright
//Intro to Programming w/ Dr. Goulden, Section 11f
//This programming is an example of the setw command

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	int num1 = 2897, num2 = 5,	 num3 = 837,
		num4 = 34,   num5 = 7,	 num6 = 1623,
		num7 = 390,  num8 = 3456, num9 = 12;

	const int COL = 6;
	cout << right;
	
	//Display the first row of numbers
	cout << setw(COL) << num1 << setw(COL)
		<< num2 << setw(COL) << num3 << endl;

	//Display row 2
	cout << setw(COL) << num4 << setw(COL)
		<< num5 << setw(COL) << num6 << endl;

	//Display row Three
	cout << setw(COL) << num7 << setw(COL)
		<< num8 << setw(COL) << num9 << endl;
	return 0;
}

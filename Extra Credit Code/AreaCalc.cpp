//Jared Wright, Section 11F- Intro to Programming
//Professor: Dr. Goulden
//This program calculates area for the user

#include <iostream>
using namespace std;

int main()
{
	double length, width, area;

	cout << "This program calcuates the area of a rectangle";
	cout << "What is the length of the rectangle?";
	cin >> length;
	cout << "What is the width of the rectangle?";
	cin >> width;
	area = length * width;
	cout << "The area of a rectangle with " << length << "length, and " << width << "width " << endl;
	cout << "is " << area << "square units." << endl;
	cout << "Thanks for playing!";











	return 0;

}
//Jared Wright
//Intro to Programming with Dr. Goulden, Section 11F
//This program further familiarizes us with <string> library commands, by taking a series of inputs, and then sending them 
//back out. Specifically the use of the "getline" specification to deal with spaces in User text inputs. 

#include <iostream>
#include <string> 
using namespace std;

int main()
{
	string name, school;

	//Get the Name and School of the User
	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Please enter your school: ";
	getline(cin, school);
	cout << endl;

	//Spit out the input Name and School
	cout << "Your name is " << name
		<< " and you attend " << school << "." << endl;
	cout << endl;
	
	int hours;
	//Ask for the hours of class being taken.
	cout << "How many hours are you taking? ";
	cin >> hours;

	//Display output.
	cout << "You are taking " << hours << " hours there." << endl;

	string prof;

	//Get the name of User's favorite professor.
	cout << "Who is your favorite Professor?";
	cin.ignore();
	getline(cin, prof);
	cout << endl;
	cout << "Your favorite professor is " << prof << "." << endl;

	cout << endl;
	return 0;
}
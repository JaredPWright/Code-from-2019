//Jared Wright, Section 11F
//Intro to Programming with Professor Goulden
//Even more Control Structure Practice!!!

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	char employment,//The employment status variable.
		 graduate;//The graduation status variable.

	cout << "Hello and welcome to Credit Application!" << endl; //Greet User.
	cout << " " << endl; //The ones that look like this are just spacers to make reading easier on the user. 
	cout << "Are you employed? (Y or N): "; //Ask for employment status, retrieve input.
	cin >> employment;
	cout << " " << endl;
	cout << "Did you graduate from college in the last two years (Y or N): "; //Ask for graduation information, retrieve input.
	cin >> graduate;
	cout << " " << endl;

	employment = toupper(employment); //Converting user input to uppercase, in case they don't pay attention.
	graduate = toupper(graduate);

	if (employment == 'Y'){ //Beginning of if_1. This is a nested if statement. Confusing to look at, I know.
		if (graduate == 'Y'){ //Beginning of if_2.
			cout << "Congratulations! You qualify for the special interest rate!" << endl; //If they are employed and graduated in the last two years, they should recieve this message.
		}
		else { //End of if_2.
			cout << "Sorry, but you do not qualify for the special interest rate." << endl; //If employed but didn't graduate in the last two years, they should recieve this one.
		}
	}
	else { //End of if_1.
		cout << "Sorry, but you do not qualify for a loan." << endl;

	}
	return 0;
}
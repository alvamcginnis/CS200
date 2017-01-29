// HW1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>     // input/output commands
using namespace std;    // standard library

int main()              // program entry function
{
	// Variable declarations
	float width;
	float length;
	float area;
	float perimeter;

	cout << "ROOM CALCULATOR" << endl; // header of the program name 
	cout << '\n';

	cout << "Room 1" << endl;
	cout << '\n';

	// Get user input:
	cout << "Enter the width: ";        // text output
	cin >> width;                       // input from the user

	cout << "Enter the length: ";
	cin >> length;

	area = width * length;              // assignment statement

										// Display results:
	cout << endl;                       // empty line
	cout << "Area: " << area << endl;


	perimeter = 2 * width + 2 * length;                       // assignment statment 

	cout << "perimeter: " << perimeter << endl;              // Display results



	// Duplicate the code

	cout << '\n' << "Room 2" ;
	cout << '\n';


	// Get user input:

	cout << "Enter the width: ";        // text output
	cin >> width;                       // input from the user

	cout << "Enter the length: ";
	cin >> length;

	area = width * length;              // assignment statement

										// Display results:
	cout << endl;                       // empty line
	cout << "Area: " << area << endl;


	perimeter = 2 * width + 2 * length;                       // assignment statment 

	cout << "perimeter: " << perimeter << endl;









	while (true);
	return 0;           // end of program
}

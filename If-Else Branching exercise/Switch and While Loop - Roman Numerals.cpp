// Switch and While Loop - Roman Numerals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include  <string>
using namespace std;

int main()
{
	int Num;                            // an integer
	string romanNumeral = " "; // roman numeral value
	while (true)
	{
		cout << "Enter a number between 1 and 5: ";
		cin >> Num;

		switch (Num)
		{
		case 1:
			romanNumeral = "I";
			break;
		case 2:
			 romanNumeral = "II";
			break;
		case 3:
			 romanNumeral = "III";
			break;
		case 4:
			romanNumeral = "IV";
			break;
		case 5:
			romanNumeral = "V";
			break;
		default: cout << "Incorrect insert. " << endl;

		}
		cout << "Roman numeral is:" << romanNumeral << endl;
	}   

	return 0;
}


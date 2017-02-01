// If statement and a boolean expression.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string> 
using namespace std;


/* if i write (feet <= 3 ) as a condition of an if statement then the output 
statements will switch because the variable will sign to false.
*/


int main()
{
	bool isTallEnoughForRide;
	int feet;
	
	cout << "what is your height? ";
	cin >> feet;

	isTallEnoughForRide = feet > 3;

	if (isTallEnoughForRide == true )

		cout << " Permitted to ride the roller coaster. ";

	else
		cout << "Too short to ride the roller coaster. ";


	while (true);
    return 0;
}


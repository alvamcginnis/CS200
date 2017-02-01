// If-Else Branching exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>    // For displaying text with cout and getting input with cin.
#include <string>      // For making string variables
using namespace std;

/*  What is the scope of your age variable?
    age > 13 
    
	What is the scope of your ticket price variable?
	7.00
*/


int main()
{
	int age;
	float ticketPrice;

	cout << "Age? ";
	cin >> age;

	if (age < 13)
	{
		ticketPrice = 5.00;
	}
	else
	{
		ticketPrice = 7.00;
	}

	cout << "Ticket price: " << ticketPrice << endl;

	while (true) {} // temp - don't let program quit.

	return 0;
}


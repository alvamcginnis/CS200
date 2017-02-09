// Adding change.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

float CountChange (int quarterCount, int dimeCount, int nickleCount, int penneyCount)// Declare function here
{

	double Q = quarterCount * 0.25;
	double D = dimeCount * 0.10;
	double N = nickleCount * .05;
	double P = penneyCount * .01;

	double moneyValue = Q + D + N + P;
	return (moneyValue);


 }




int main()
{
	while (true)
	{
		int quarters, dimes, nickels, pennies;

		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = CountChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
	}

	return 0;
}
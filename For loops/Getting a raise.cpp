// Getting a raise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;




int main()
{
	float startingWage;
	float percentRaisePerYear;
	int yearsWorked;

	cout << "What is your starting wage? >> ";
		cin >> startingWage;

	cout << "What % of a raise do you get per year? >> %";
        cin >> percentRaisePerYear;

		percentRaisePerYear /= 100;

	cout << "How many years have you worked? >> ";
	    cin >> yearsWorked;

		float adjustedWage = startingWage;

		for (int i = 0; i < yearsWorked; i++)
		{
			adjustedWage += adjustedWage * percentRaisePerYear;

		}
		cout << "Your new wage is $" << adjustedWage << endl;


    return 0;
}


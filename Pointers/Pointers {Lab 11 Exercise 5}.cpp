// Pointers {Lab 11 Exercise 5}.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



int main()
{
	float  priceHamburger = 3.99;
	float  priceFries = 2.55;
	float  priceSalad = 4.45;

	float* ptrPrice;
	float taxAmt = 0;
	char choice;

	cout << "[h]amburger, [f]ries, or [s]alad? ";
	cin >> choice;




	if (choice == 'h') 
	{

		ptrPrice = &priceHamburger;
		cout << "Original Price : $" << priceHamburger << endl;
		taxAmt = *ptrPrice * 0.065;
		*ptrPrice = *ptrPrice + taxAmt;
		cout << "With tax price: $" << *ptrPrice << endl;
	}


	else if (choice == 'f')
	{
		ptrPrice = &priceFries;
		cout << "Original Price : $" << priceFries << endl;
		taxAmt = *ptrPrice * 0.065;
		*ptrPrice = *ptrPrice + taxAmt;
		cout << "With tax price: $" << *ptrPrice << endl;
	}


	else if (choice == 's')
	{
		ptrPrice = &priceSalad;
		cout << "Original Price : $" << priceSalad << endl;
		taxAmt = *ptrPrice * 0.065;
		*ptrPrice = *ptrPrice + taxAmt;
		cout << "With tax price: $" << *ptrPrice << endl;

	}

    return 0;
}


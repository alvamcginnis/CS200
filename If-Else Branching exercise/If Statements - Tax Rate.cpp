// If Statements - Tax Rate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double tax = 0;
	float price;
	string City;

	while (true)
	{
	cout << "What is the item price?  ";
	cin >> price;

	cout << "What city? ";
	cin >> City;

	float  pricePlusTax = price + (price * tax);


	if (City == "Olathe")
	{
		tax = 0.065;
		pricePlusTax = price + (price * tax);
		cout << "Total price is: " << " $" << pricePlusTax << endl;
	}

	else if (City == "OverlandPark")
	{
		tax = 0.0935;
		pricePlusTax = price + (price * tax);
		cout << "Total price is: " << " $" << pricePlusTax << endl;
	}

	else if (City == "Raytown")
	{
		tax = 0.08225;
		pricePlusTax = price + (price * tax);
		cout << "Total price is: " << " $" << pricePlusTax << endl;
	}

	else if (City == "Independence")
	{
		tax = 0.07725;
		pricePlusTax = price + (price * tax);
		cout << "Total price is: " << " $" << pricePlusTax << endl;
	}

	else
	{
		tax = 0.08;
		pricePlusTax = price + (price * tax);
		cout << "Total price is: " << " $" << pricePlusTax << endl;
	}

}
	return 0;
}
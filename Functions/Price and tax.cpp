// Price and tax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float AddTax( float dollar)           // Declare function here
{
	float S = dollar * (0.12);
	float withTax = S + dollar; 
	  

	return withTax;

}


int main()
{
	cout << "Price: $" << 9.99 << " \t with tax: $" << AddTax(9.99) << endl;
	cout << "Price: $" << 19.95 << " \t with tax: $" << AddTax(19.95) << endl;
	cout << "Price: $" << 10.00 << " \t with tax: $" << AddTax(10.00) << endl;

	return 0;
}

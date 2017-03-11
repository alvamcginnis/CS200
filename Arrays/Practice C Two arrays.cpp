// Practice C Two arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3, itemCount = 0;

	while (itemCount < arraySize)

	{
		cout << "Enter item name: ";
		cin >> items[itemCount];


		cout << "Enter price: ";
		cin >> prices[itemCount];

		itemCount++;
	}

	cout << endl;

	int counter = 0;
	while (counter < itemCount)

	{
		cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
		counter++;
	}

	return 0;
}
// Lab 14 Ex.1 Dyn var- arr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



int main()
{
	int* myInt;
	string* myStr;
	float* myFloat;

	myInt = new int(20);
	myStr = new string("Maryam");
	myFloat = new float(199.99);

	cout << *myInt << "    " << *myStr << "    " << *myFloat << "    " << endl;

	delete myInt;
	delete myStr;
	delete myFloat;

    return 0;
}


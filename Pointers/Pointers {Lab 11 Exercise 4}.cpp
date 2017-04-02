// Pointers {Lab 11 Exercise 4}.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;



int main()
{
	char choice;

	cout << "[i]nt, [f]loat, [b]oolean, [d]ouble ? ";
	cin >> choice;



	if (choice == 'i')
	{
		int i = 7;
		int* ptrInt = &i;
		cout << "Integer Size: " << sizeof(i) << ", address: " << ptrInt << endl;
	}



	else if (choice == 'f')
	{
		float f = 7.77;
		float* ptrFloat = &f;
		cout << "Float Size: " << sizeof(f) << ", address: " << ptrFloat << endl;
	}



	else if (choice == 'b')
	{
		bool b = true;
		bool* ptrBoolean = &b;
		cout << "Boolean Size: " << sizeof(b) << ", address: " << ptrBoolean << endl;
	}


	else if (choice == 'd')
	{
		double d = 7.7777;
		double* ptrDouble = &d;
		cout << "Double Size: " << sizeof(d) << ", address: " << ptrDouble << endl;

	}

	while (true);
    return 0;
}


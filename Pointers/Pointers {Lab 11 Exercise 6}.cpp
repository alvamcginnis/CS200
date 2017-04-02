// Pointers {Lab 11 Exercise 6}.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



int main()
{
	string students[3] = { "Ann" , "John" , "Peter" };
	string* ptrStudent;

	int input;
	cout << " Please Enter 0, 1, or 2:  ";
	cin >> input;


	ptrStudent = &students[input];

	cout << "New Name: ";
	cin >> *ptrStudent;

	for (int i = 0; i < 3; i++)
	{
		cout << "Student " << i << " = " << students[i] << endl;
	} 

	while (true)
    return 0;
}


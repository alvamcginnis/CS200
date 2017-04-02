// Pointers {Lab 11 Exercise 2}.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



int main()
{

	string colleges[4] = { "JCCC" , "UMKC" , "KU" , "MS&T" };

	cout << "Array adress: " << colleges << endl;


	for (int i = 0; i < 4; i++)
	{
		cout << "Item " << i << " address: " << &colleges[i] << " value: " << colleges[i] << endl;
	}
    return 0;
}


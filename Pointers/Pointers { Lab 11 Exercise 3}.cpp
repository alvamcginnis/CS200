// Pointers { Lab 11 Exercise 3}.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
	int N = 100;
	float D = 7.77;
	string T = "Maryam";

	int* ptrInteger = &N;
	float* ptrFloat = &D;
	string* ptrString = &T;

	cout << ptrInteger << " = " << *ptrInteger << endl;
	cout << ptrFloat << " = " << *ptrFloat << endl;
	cout << ptrString << " = " << *ptrString << endl;




    return 0;
}


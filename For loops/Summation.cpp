// Summation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	float sum = 0;
	int i;
	cout << " calculate a sum ... 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 " ;

	for (int i = 1; i <= 10; ++i) {
		sum += i;
	}
	cout << endl;
	cout << "sum = " << sum << endl;

	return 0;
}

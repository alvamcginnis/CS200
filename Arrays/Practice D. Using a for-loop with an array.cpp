// Practice D. Using a for-loop with an array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string letters[5] = { "A", "B", "C", "D", "E" };

	for (int i = 0; i < 5; i++)
	{
		cout << letters[i] << endl;
	}

	return 0;
}

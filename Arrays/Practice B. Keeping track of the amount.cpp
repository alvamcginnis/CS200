// Practice B. Keeping track of the amount.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

int main()
{


	string names[5];
	names[0] = "Xia";
	names[1] = "Shang";
	names[2] = "Zhou";
	names[3] = "Qin";
	names[4] = "Han";

	int index = 0;
	int arraySize = 5;

	while (index < arraySize)
	{
		cout << names[index] << endl;
		index++;
	}

	return 0;
}
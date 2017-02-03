// 1 through 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int countUp = 1;

	while (countUp < 11)
	{
		cout << countUp << " ";
		countUp++;
	 }

	cout << "Done!" << endl;


    return 0;
}


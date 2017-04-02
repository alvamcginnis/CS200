// Lab 14 Ex.3 Dyn var-arry.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;




int main()
{
	srand(time(NULL));

	int size;
	cout << "Enter the amount of lotto balls: ";
	cin >> size; 

	int*lottoNumbers;
	lottoNumbers = new int[size];

	for (int i = 0; i < size; i++)
	{
		lottoNumbers[i] = rand() % 101;
		cout << lottoNumbers[i] << "   ";
	}

	delete lottoNumbers;


	while (true)
    return 0;
}


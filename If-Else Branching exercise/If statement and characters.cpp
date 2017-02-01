// If statement and characters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

/*
I think it is not  correct if the we enters 'a' and 'A' . we will get that the capital 'A'
is comes first before small 'a'.
*/


int main()
{

	char letter1, letter2;
	cout << "Enter two letters please ";
	cin >> letter1 >> letter2;

	if (letter1 < letter2)
	{
		cout << "first letter comes first";
	}
	else
	{
		cout << "second letter comes first ";
	}


	while (true);

    return 0;
}


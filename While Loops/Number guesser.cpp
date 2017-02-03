// Number guesser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int secretNumber = 27;
	int playerGuess;

	do
	{
		cout << "please enter your guess ";
		cin >> playerGuess;

		if (playerGuess < secretNumber)
		{
			cout << "Too Low!" << endl;
		}

		else if (playerGuess > secretNumber)
		{
			cout << "Too high!" << endl;
		}
	} while (playerGuess != secretNumber);

		cout << "You win!" << endl;



    return 0;
}


// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi(string english)
{
	string  cat, dog, frog, rabbit;
	
	if (english == "cat" )
	{
		return "billee ";
	}
	else if (english == "dog")
	{
		return "Kutta";

	}
	else if (english == "frog")
	{
		return "medhak";
	}
	else if (english == "rabbit")
	{
		return "Khargosh";
	}
	else 
	{
		return "Word is not found";
	}

}



string GetEnglish(string hindi)
{ 
	string billee,kutta, medhak, khargosh;

	if (hindi == "billee")
	{
		return "cat ";
	}
	else if (hindi == "kutta")
	{
		return "dog";

	}
	else if (hindi == "medhak")
	{
		return "frog";
	}
	else if (hindi == "khargosh")
	{
		return "rabbit";
	}
	else
	{
		return "Word is not found";
	}
}




// Menu functions

void DisplayMenu()
{ 
	cout << "1. English to Hindi " << endl;
	cout << "2. Hindi to English " << endl;
	cout << "3. Quit " << endl;
	
}


void EnglishToHindi()
{
	string English;
	cout << "English: ";
	cin >> English; 
	cout << "Hindi translation : " << GetHindi(English) << endl << endl;
}

void HindiToEnglish()
{
	string Hindi;
	cout << "Hindi: ";
	cin >> Hindi;
	cout << "English translation : " << GetEnglish(Hindi) << endl << endl;

}

int main()

{
	int num;
	bool isDone = false;
	while (isDone == false)
	{
		 DisplayMenu();

		 cout << "please enter the number: ";
		 cin >> num;

		 if (num == 1)
		 {
			 EnglishToHindi();
		 }
		 else if (num == 2)
		 {
			 HindiToEnglish();
		 }
		 else if (num == 3)
		 {
			isDone = true;
		 }

	}
	
	return 0;
}


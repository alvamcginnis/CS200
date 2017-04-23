// Lab 14 File IO and Structs.cpp : Defines the entry point for the console application.
//
#include <fstream>
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct Option
{
	string title;
	int count;
};

struct Poll
{
	string question;
	Option options[4];

};
int main()
{
	Poll myPoll;

	myPoll.question = "What is the best food?";

	myPoll.options[0].title = "Pizza";
	myPoll.options[0].count = 0;

	myPoll.options[1].title = "Veggie Taco";
	myPoll.options[1].count = 0;

	myPoll.options[2].title = "Samosas";
	myPoll.options[2].count = 0;

	myPoll.options[3].title = "Sushi";
	myPoll.options[3].count = 0;

	bool done = false;
	while (!done)
	{
		cout << myPoll.question << endl <<
			"0. " << myPoll.options[0].title << endl <<
			"1. " << myPoll.options[1].title << endl <<
			"2. " << myPoll.options[2].title << endl <<
			"3. " << myPoll.options[3].title << endl <<
			"4. Exit " << endl;

		int choice;
		cin >> choice;
		if (choice > 4)
		{
			cout << "Invalid choice, please try again." << endl;
		}
		else
		{
			myPoll.options[choice].count++;
		}
	}
	

	ofstream output;
	output.open("results.txt");
	output << "Question" << endl;
	output << myPoll.question << endl << endl;
	output << "Results" << endl;

	for (int i = 0; i < 4; i++)
	{


		output << myPoll.options[i].title << "......" << myPoll.options[i].count << endl;
	}

  output.close();

	return 0;
}



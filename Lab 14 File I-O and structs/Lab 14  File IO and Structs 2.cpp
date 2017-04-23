// Lab 14  File IO and Structs 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string word;
	cout << "What word to search for?" << endl;
	cin >> word;

	string replace;
	cout << "what to replace that word with" << endl;
	cin >> replace;

	string buffer;

	ifstream input("story_original.txt");
	ofstream output("story_modified.txt");

	while (input >> buffer)
	{
		if (buffer == word)
		{
			output << replace << " ";
		}
		else
		{
			output << buffer << " ";
		}

	}

	input.close();
	output.close();
	return 0;
}

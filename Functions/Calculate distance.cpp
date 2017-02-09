// Calculate distance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath> // needed for square root
using namespace std;

float GetDistance(float x1, float y1, float x2, float y2)
{
	float D = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));

	return (D);

}

int main()
{
	while (true)
	{
		float x1, y1, x2, y2;

		cout << "First coordinate pair, enter x and y: ";
		cin >> x1 >> y1;

		cout << "Second coordinate pair, enter x and y: ";
		cin >> x2 >> y2;

		float distance = GetDistance(x1, y1, x2, y2);
		cout << "Distance: " << distance << endl;

		cout << endl << endl;
	}

	return 0;
}
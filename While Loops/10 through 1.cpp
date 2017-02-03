// 10 through 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int countDown = 10;
	 
	while (countDown > 0)
	{
		cout << countDown << " ";
	    countDown--;
	} 
	   

	cout << "Done!" << endl;
    return 0;
}


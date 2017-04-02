// Lab 12 Pointer review lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


struct College
{
	string name;
	string state;

};

struct Student
{
	string name;
	College* ptrSchool;
};


int main()
{
	College college[3];
	college[0].name = " JCCC ";
	college[0].state = " KS ";

	college[1].name = " MCCKC ";
	college[1].state = " MO ";

	college[2].name = " KCKCC ";
	college[2].state = " KS ";


	Student student[5];


	for (int i = 0; i < 5; i++)
	{
		int s;
		cout << "Enter Name for Student " << i + 1 << ": " ;
		cin >> student[i].name;

		


		cout << "Which College for " << student[i].name << "?" << endl << endl;
		

		for (int k = 0; k < 3; k++)
		{
			cout << k + 1 << "." << college[k].name << endl;
			
		}
		
		cout << "\n>>  ";
		cin >> s;
		cout << endl;
		student[i].ptrSchool = &college[s - 1];

		
	}

	cout << "All students: " << endl << endl;

	for (int i = 0; i < 5; i++)
	{	
		cout << i + 1 << ". " << student[i].name <<" ";
		cout <<  student[i].ptrSchool->name << " " << student[i].ptrSchool->state << endl;
	}

	while (true);
	return 0;
}
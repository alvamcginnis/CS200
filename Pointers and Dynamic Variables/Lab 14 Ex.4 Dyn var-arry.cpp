// Lab 14 Ex.4 Dyn var-arry.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Employee
{
	string name;
};
struct Manager
{
	string name;
	Employee* employees;
	int employeeCount;
};


int main()
{
	string names[16] = { "Koios", "Julianna", "Agata", "Arundhati",
		"Zemfira", "Fedya", "Kim", "Ashok",
		"Jouni", "Blandina", "Ampelio", "Rosmunda",
		"Breeshey", "Ferdinand", "Gertrude", "Sarit" 
	};


	cout << "How Many Managers there Should be? " << endl;
	int managerCount;
	cin >> managerCount;


	Manager* managers;
	managers = new Manager[managerCount];

	for (int i = 0; i < managerCount; i++)
	{
		managers[i].name = names[rand() % 16];
		managers[i].employeeCount = rand() % 4;


		if (managers[i].employeeCount > 0)
		{
			managers[i].employees = new Employee[managers[i].employeeCount];

			for (int k = 0; k < managers[i].employeeCount; k++)
			{
				managers[i].employees[k].name = names[rand() % 16];
			}

		}
	}


	for (int m = 0; m < managerCount; m++)
		{
			cout << endl;
			cout << "Manager:           "
				<< managers[m].name << endl;
			cout << "Underling Count:   "
				<< managers[m].employeeCount << endl;

			for (int e = 0; e < managers[m].employeeCount; e++)
			{
				cout << "\t" << e + 1 << ". "
					<< managers[m].employees[e].name << endl;
			}
		}

		for (int j = 0; j < managerCount; j++)
		{
			if (managers[j].employeeCount > 0)
			{
				delete[]managers[j].employees;

			}
	   }


		delete[]managers;
    return 0;
}


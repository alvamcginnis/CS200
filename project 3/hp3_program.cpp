/*
MODIFY THIS FILE
*/

#include "hp3_program.hpp"

#include <iostream>
using namespace std;


/* Setup() - 	Create the list of locations
 *              Allocate needed memory
 * */
void Program::Setup()
{
	// This is called automatically when the program begins

	locationList = new Location[6];

	// loction names and descriotion 
	locationList[0].name = "Moscow Kremlin";
	locationList[0].description = "Russia, fortified compound of churches & palaces, with museums of Russian state regalia & art.";

	locationList[1].name = "Statue Of Liberty";
	locationList[1].description = "USA, symbol of freedom";

	locationList[2].name = "Milan Cathedral";
	locationList[2].description = "Italy, one of the largest cathedrals in the world";

	locationList[3].name = "Great Wall of China";
	locationList[3].description = "China, one of a series of fortifications made of stone";

	locationList[4].name = "Kruger National Park";
	locationList[4].description = "South Africa, One of Africa’s high density of wild animals";

	locationList[5].name = "Great Barrier Reef";
	locationList[5].description = "Australia, one of the largest living thing on Earth, ";


	// Location 1
	locationList[1].ptrToEast = &locationList[2];
	// Location 2
	locationList[2].ptrToWest = &locationList[1];
	locationList[2].ptrToSouth = &locationList[4];
	// Location 3
	locationList[3].ptrToSouth = &locationList[5];
	locationList[3].ptrToNorth = &locationList[0];
	locationList[3].ptrToWest = &locationList[2];
	// Location 4
	locationList[4].ptrToEast = &locationList[5];
	locationList[4].ptrToNorth = &locationList[2];
	// Location 
	locationList[5].ptrToWest = &locationList[4];
	locationList[5].ptrToNorth = &locationList[3];

}



/* Cleanup() - 	Clean up memory allocated
 * */
void Program::Cleanup()
{
    // This is called automatically when the program ends


	if (locationList != nullptr)
	{
		delete[]locationList;
	}
}






/* Main() - Main program loop
 * */
void Program::Main()
{
	bool done = false;
	while (!done)
	{
		DisplayCurrentLocation();

		if (ptrCurrentLocation == ptrEndLocation)
		{
			cout << "You have reached your destination!";
				break;
		}


		// Get the user choice
        string UsersChoice = GetUserInput();

		if (UsersChoice == "n" && ptrCurrentLocation->ptrToNorth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToNorth;
		}
		else if (UsersChoice == "s" && ptrCurrentLocation->ptrToSouth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToSouth;
		}
		else if (UsersChoice == "e" && ptrCurrentLocation->ptrToEast != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToEast;
		}
		else if (UsersChoice == "w" && ptrCurrentLocation->ptrToWest != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToWest;
		}
		else if(UsersChoice == "q")
		{
			done = true;
		}
		else
		{
			cout << "Invalid Choice" << endl;
		}
	}


	cout << "Good Bye!" << endl;


}
/* DisplayCurrentLocation() - Use the current location
 *              pointer to display the location's name
 *              and description, as well as which
 *              directions the player can move next.
 * */
void Program::DisplayCurrentLocation()
{
	cout << ptrCurrentLocation->name << endl;
	cout << ptrCurrentLocation->description << endl;

	cout << "You can move:" << endl << endl;

	if (ptrCurrentLocation->ptrToNorth != nullptr)
	{
		cout << "You can move:" << "\t *north" << endl;
	}
	if (ptrCurrentLocation->ptrToSouth != nullptr)
	{
		cout << "You can move:" << "\t *South" << endl;
	}
	if (ptrCurrentLocation->ptrToEast != nullptr)
	{
		cout << "You can move:" << "\t *East" << endl;
	}
	if (ptrCurrentLocation->ptrToWest != nullptr)
	{
		cout << "You can move:" << "\t *West" << endl;
	}
	cout << endl << endl;
}



/* GetUserInput() - Display the list of options to the
 *                  user, then get their input and return
 *                  their choice.
 * */
string Program::GetUserInput()
{
	string option;
	cout << "Welcome to World Wide Map:" << endl;
	cout << "Options : (n)orth, (s)outh, (e)ast, (w)est, (q)uit";
	cin >> option;
	cout << endl;

		return option;
}

/************************************/
/* Don't modify *********************/
/************************************/

Program::Program()
{
    locationList = nullptr;
    ptrCurrentLocation = nullptr;
    Setup();
}

Program::~Program()
{
    Cleanup();
}

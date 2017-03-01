#include "hp1_program.hpp"

/*
MODIFY THIS FILE
*/

#include <iostream>
#include <string>
using namespace std; 

/* Menu Functions **********************************************/

/*
DisplayMenu()
Inputs: None
Outputs: None
This function should just display a simple # list and header, such as:
1. Set mission parameters, 2. View parameters, 3. Run simulation, 4. Quit
*/
void Program::DisplayMenu()
{
	cout << "1. Set mission parameters" << endl
		 << "2.View parameters" << endl
		 << "3.Run simulation" << endl
		 << "4.Quit" << endl;
}

/*
SetParameters()
Inputs: None
Outputs: None
In this function, we will get the user's input for the following fields:
- food grown per day (int)		- cleanup per person per day (int)
- team name	(string)			- team size (int)
- mission length in days (int)	- starting units of food (int)

Create variables for each of these. Prompt the user for each
of these items with a cout command ("please enter ___:"),
and get their input through cin.

Finally, once those are all entered, you will use the following functions
to set these variables in the simulator:
- SetFoodGrown_PerDay(int)		- SetCleanup_PerPersonPerDay(int)
- SetTeamName(string)			- SetTeamSize(int)
- SetMissionLength(int)			- SetFoodCount(int)
*/
void Program::SetParameters()
{
	int FoodGrown_PerDay;
	int Cleanup_PerPersonPerDay;
	string TeamName;
	int TeamSize;
	int MissionLengthinDay;
	int StartingUnitsOfFood;

	cout << "Please enter the amount of food grown per day: " << endl;
	cin >> FoodGrown_PerDay;

	cout << "Please enter the Cleanup per person per day: " << endl;
	cin >> Cleanup_PerPersonPerDay;

	cout << "Please enter the team name: " << endl;
	cin >> TeamName;

	cout << "Please enter the team size: " << endl;
	cin >> TeamSize;

	cout << "Please enter the mission length in days: " << endl;
	cin >> MissionLengthinDay;

	cout << "Please enter the starting units of food: " << endl;
	cin >> StartingUnitsOfFood;


	SetFoodGrown_PerDay(FoodGrown_PerDay);
	SetCleanup_PerPersonPerDay(Cleanup_PerPersonPerDay);
	SetTeamName(TeamName);
	SetTeamSize(TeamSize);
	SetMissionLength (MissionLengthinDay);
	SetFoodCount(StartingUnitsOfFood);


}

/*
ViewParameters()
Inputs: None
Outputs: None
In this function, you will just display the parameters that were entered
in the SetParameters() function. You can do this by utilizing the "getter"
functions available to the simulation...:
- GetFoodConsumed_PerPersonPerDay()			- GetWasteCreated_PerPersonPerDay()
- GetOxygenCreated_PerDay()					- GetOxygenUsed_PerPersonPerDay()
- GetFoodGrown_PerDay()						- GetCleanup_PerPersonPerDay()
- GetTeamName()								- GetTeamSize()
- GetMissionLength()

All of these functions *return* a value - either ints or strings.
You can cout each of these, like:
cout << GetOxygenUsed_PerPersonPerDay() << endl;

Just display each value, but also make sure to display a label for each.
*/
void Program::ViewParameters()
{
	cout << "Food Counsumed Per Person-Per Day: " << GetFoodConsumed_PerPersonPerDay() << endl;
	cout << "Waste Created Per Person-Per Day: " << GetWasteCreated_PerPersonPerDay() << endl;
	cout << "Oxygen Created Per Day: " << GetOxygenCreated_PerDay() << endl;
	cout << "Oxygen Used Per Person-Per Day: " << GetOxygenUsed_PerPersonPerDay() << endl;
	cout << "Food Grown Per Day: " << GetFoodGrown_PerDay() << endl;
	cout << "Cleanup Per Person-Per Day" << GetCleanup_PerPersonPerDay() << endl;
	cout << "Team Name: " << GetTeamName() << endl;
	cout << "Team Size: " << GetTeamSize() << endl;
	cout << "Mission Length: " << GetMissionLength() << endl;

}

/*
AdjustFood()
Inputs: None
Outputs: None
This function deals with the following functions:
- GetFoodGrown_PerDay()		- GetFoodConsumed_PerPersonPerDay()		
- GetFoodCount()			- GetTeamSize()

It will calculate the amount of food produced and consumed,
and update the food count.

First, create a temporary local int variable, named something like "foodCount".
Assign it the return value of the GetFoodCount() function.

Then, adjust the food count with the formula:
	new food count = old food count + food grown per day - ( food consumed per person per day * team size )

After the calculation, update the food count using SetFoodCount(int).
*/
void Program::AdjustFood()
{
	int foodCount;
	foodCount = GetFoodCount();
	foodCount = foodCount + GetFoodGrown_PerDay() - (GetFoodConsumed_PerPersonPerDay() * GetTeamSize());

	SetFoodCount(foodCount);
}

/*
AdjustWaste()
Inputs: None
Outputs: None
This function deals with the following functions:
- GetWasteCount()		- GetWasteCreated_PerPersonPerDay()
- GetTeamSize()			- GetCleanup_PerPersonPerDay()

Create a temporary variable and assign it the value of GetWasteCount().

Calculate the new waste count with the formula:
	new waste count = old waste count + (waste created per person per day * team size) - (cleanup per person per day * team size)

After the calculation, update the waste count using SetWasteCount(int).
*/
void Program::AdjustWaste()
{
	int wasteCount;
	wasteCount = GetWasteCount();
	wasteCount = wasteCount + (GetWasteCreated_PerPersonPerDay()*GetTeamSize()) - (GetCleanup_PerPersonPerDay()* GetTeamSize());

	SetWasteCount(wasteCount);
}

/*
AdjustOxygen()
Inputs: None
Outputs: None
This function deals with the following functions:
- GetOxygenCount()		- GetOxygenCreated_PerDay()
- GetTeamSize()			- GetOxygenUsed_PerPersonPerDay()

Create a temporary variable and assign it the value of GetOxygenCount().

Calculate the new oxygen count with the formula:
	new oxygen count = old oxygen count + oxygen created per day - (oxygen used per person per day * team size)

After the calculation, update the oxygen count using SetOxygenCount(int).
*/
void Program::AdjustOxygen()
{
	int oxygenCount;
	oxygenCount = GetOxygenCount();
	oxygenCount = oxygenCount + GetOxygenCreated_PerDay() - (GetOxygenUsed_PerPersonPerDay()* GetTeamSize());
	
	SetOxygenCount(oxygenCount);
}

/*
RunSimulation()
Inputs: None
Outputs: None
The simulation runs through each day, adjusting values to see if
the astronauts can survive for the set amount of days.
Follow the comments below for the steps.
*/
void Program::RunSimulation()
{
	cout << endl << "RUN SIMULATION" << endl;


	// Set up the simulation:
	// * Create an integer variable called day, and initialize it to 1.
	// * Use SetOxygenCount(int) to initialize the oxygen count to 100.
	// * Use SetWasteCount(int) to initialize the waste count to 0.
	// * Create a boolean variable called missionSuccess, and set it to true.
	int day = 1;
	SetOxygenCount(100);
	SetWasteCount(0);
	bool missionSuccess = true;


	// Create a while loop. This will continue looping while
	// the day is less than the mission length (GetMissionLength()),
	// and while missionSuccess is true.
	while ((/* Replace this: */day <  GetMissionLength()) && (( missionSuccess < GetMissionLenght())
	{
		// Adjust current supplies via the AdjustFood(), AdjustWaste(), and AdjustOxygen() functions.

		AdjustFood();
		AdjustWaste();
		AdjustOxygen();

		// Display the following values, and make sure to label them as well.
		// e.g., cout << "LABEL: " << values << endl;

		// * The current day
		cout << "The Current Day: " << day << endl;


		// * Food grown				GetFoodGrown_PerDay()
		cout << "Food Grown: " << GetFoodGrown_PerDay() << endl;


		// * Waste cleaned			GetCleanup_PerPersonPerDay()
		cout << "Waste Cleaned: " << GetCleanup_PerPersonPerDay() << endl;


		// * Oxygen created			GetOxygenCreated_PerDay 
		cout << "Oxygen Created: " << GetOxygenCreated_PerDay() << endl;


		// * Food consumed			GetFoodConsumed_PerPersonPerDay()
		cout << "Food Consumed: " << GetFoodConsumed_PerPersonPerDay() << endl;


		// * Waste created			GetWasteCreated_PerPersonPerDay
		cout << "Waste Created: " << GetWasteCreated_PerPersonPerDay() << endl;


		// * Oxygen consumed		GetOxygenUsed_PerPersonPerDay
		cout << "Oxygen Consumed: " << GetOxygenUsed_PerPersonPerDay() << endl;


		// * Current food count		GetFoodCount()
		cout << "Current Food Count: " << GetFoodCount() << endl;


		// * Current waste count	GetWasteCount()
		cout << "Current Waste Count:  " << GetWasteCount() << endl;


		// * Current oxygen count	GetOxygenCount()
		cout << "Current Oxygen Count:  " << GetOxygenCount() << endl;



		// Check to see if resources have been depleted.
		// If so, then the mission is a failure.
		// If food count is less than 0, display a message that they ran out of food and set missionSuccess to false.
		// If waste count is greater than 20, display a message that they drowned in trash and set missionSuccess to false.
		// If oxygen count is less than 0, display a message that they ran out of air and set missionSuccess to false.
		// Increment the day variable by 1.

		if (GetFoodCount() < 0)
		{
			cout << "Ran Out of Food" << endl;
			missionSuccess = false;
		}

		else if (GetWasteCount() > 20)
		{
			cout << "Drowned in Trash" << endl;
			missionSuccess = false;
		}

		else if (GetOxygenCount() < 0)
		{
			cout << "Ran Out of Air" << endl;
			missionSuccess = false;
		}

		day++;
	}



	// After the while loop: Display the results.
	// If missionSuccess is true, display "MISSION SUCCESS!"
	// Otherwise, display "MISSION FAILURE!"

	cout << endl << "RESULTS" << endl;

	if (missionSuccess == true)
	{
		cout << "MISSION SUCCESS!" << endl;
	}
	else
	{
		cout << "MISSION FAILURE!" << endl;
	}

}
/* Utility Functions **********************************************/

/*
GetValidInput(int, int)
Inputs: min (int), max (int)
Outputs: int
This function takes in a minimum and maximum value that
can be entered by the user.

First, prompt the user for input with a cout statement.
Create a variable (int) to store their decision,
and get the user's input with cin.

Then, create a while loop that will keep asking the user
to re-enter their selection, WHILE the input is invalid.

Invalid input is if it is < min or > max.

After the while loop (once the input is valid), return
the variable that is storing the user's choice.
*/
int Program::GetValidInput(int min, int max)
{
	// Create an integer variable to store the user's choice
	int UserChoice;

	// Output to console: Ask the user to enter a value
	// Get the user's input and store it in your choice variable
	cout << "Please Enter a value:" << endl;
	cin >> UserChoice;



	// While the input is invalid...
	while ((UserChoice < min) || (UserChoice > max))
	{
		// Display "invalid input"
		cout << "Invalid Input " << endl;

       // Get the user's input again, and store it in the same choice variable
		cout << "Please Enter a Value: " << endl;
		cin >> UserChoice;
	}


	// Return the choice variable after the while loop

	return UserChoice; // replace this
}


/*
DO NOT MODIFY BELOW
*/

/* Setter Functions **********************************************/

void Program::SetFoodGrown_PerDay(int value)
{
	foodGrown_PerDay = value;
}

void Program::SetCleanup_PerPersonPerDay(int value)
{
	cleanup_PerPersonPerDay = value;
}

void Program::SetTeamSize(int value)
{
	teamSize = value;
}

void Program::SetMissionLength(int value)
{
	missionLengthInDays = value;
}

void Program::SetTeamName(string value)
{
	teamName = value;
}

void Program::SetFoodCount(int value)
{
	countFood = value;
}

void Program::SetWasteCount(int value)
{
	countWaste = value;
}

void Program::SetOxygenCount(int value)
{
	countOxygen = value;
}


/* Getter Functions **********************************************/

int Program::GetFoodGrown_PerDay()
{
	return foodGrown_PerDay;
}

int Program::GetCleanup_PerPersonPerDay()
{
	return cleanup_PerPersonPerDay;
}

int Program::GetTeamSize()
{
	return teamSize;
}

int Program::GetMissionLength()
{
	return missionLengthInDays;
}

string Program::GetTeamName()
{
	return teamName;
}

int Program::GetFoodConsumed_PerPersonPerDay()
{
	return foodConsumed_PerPersonPerDay;
}

int Program::GetWasteCreated_PerPersonPerDay()
{
	return wasteCreated_PerPersonPerDay;
}

int Program::GetOxygenUsed_PerPersonPerDay()
{
	return oxygenUsed_PerPersonPerDay;
}

int Program::GetOxygenCreated_PerDay()
{
	return oxygenCreated_PerDay;
}

int Program::GetFoodCount()
{
	return countFood;
}

int Program::GetWasteCount()
{
	return countWaste;
}

int Program::GetOxygenCount()
{
	return countOxygen;
}





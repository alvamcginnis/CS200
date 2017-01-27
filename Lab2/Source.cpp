#include <iostream>
#include <string>
using namespace std;

int main()
{

	float battery;
	cout << "What is your current battery charge ? ";
	cin >> battery;


	if ( battery >= 75)
	{
		cout << "[****]";
	}


	if (battery >= 50 &&  battery < 75)
	{
		cout << "[***.]";
	}
	
	
	if  (battery >= 25 && battery < 50 ) 
	{
		cout << "[**..]";
	}


	if (battery < 25)
	{
		cout << "[*...]";
	}



	while (true);
	return 0;
}
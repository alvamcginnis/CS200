#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Iraq;
	cout << "What is your home town?";
	cin >> Iraq;

	if (Iraq.size() > 6)
	{

		cout << "That's a long name!" << endl;

	}

	string Maryam;
	cout << "What is your name?";
	cin >> Maryam;

	cout << "Hi there " << Maryam
		<< " from " << Iraq << endl;

	while (true);
    return 0;
}

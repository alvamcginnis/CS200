#include <iostream>
#include <string>
using namespace std;

int main()
{

	float x1, x2;
	x1 = 5.00;
	
	cout << "x1 = " << x1 << endl;
	cout << "Where is x2 ? ";
	cin >> x2;

	if (x1 - 5 <= x2 && x2 <= x1 + 5)
	{

		cout << " Within 5 units from x1 !";

	}
	else
	{
		cout << " Too far Away...";
	}





	while (true);
	return 0;
}

// Author Grayson Beam
// With shoutout to Lewis for all of his extra help.

#include <iostream>
#include <string>
#include "LargeInt.h"

using namespace std;

int main()
{
	LargeInt Large;
	string temp;
	cout << "Please enter a large numbers with no decimals: ";
	cin >> temp;
	Large.SetString(temp);

	LargeInt Large2;
	string temp;
	cout << "Please enter a second large number with no decimals: ";
	cin >> temp;
	Large2.SetString(temp);

	LargeInt Final;
	cout << Final.Addition << endl;

	system("pause");
	return 0;
}
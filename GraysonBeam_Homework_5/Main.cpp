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

	system("pause");
	return 0;
}
#include <cmath>
#include <iostream>
#include <string>
#include <vector>


#include "LargeInt.h"

using namespace std;

LargeInt::LargeInt()
{
	vector<int> numArrayA;
	string userString = "";
}

string LargeInt::GetStringA()
{
	return std::string();
}

vector<int> LargeInt::GetDigits()
{
	return numArrayA;
}

string LargeInt::newString()
{
	return userString;
}

void LargeInt::SetString(string newString)
{
	for (int x = 0; x < newString.length() - 1; x++)
	{
		// The value at the current location on newString at x is equal to 
		// the current value of numVectorA at x.
		if (newString[x] == 48)
		{
			numArrayA.push_back(0);
		}
		else if (newString[x] == 49)
		{
			numArrayA.push_back(1);
		}
		else if (newString[x] == 50)
		{
			numArrayA.push_back(2);
		}
		else if (newString[x] == 51)
		{
			numArrayA.push_back(3);
		}
		else if (newString[x] == 52)
		{
			numArrayA.push_back(4);
		}
		else if (newString[x] == 53)
		{
			numArrayA.push_back(5);
		}
		else if (newString[x] == 54)
		{
			numArrayA.push_back(6);
		}
		else if (newString[x] == 55)
		{
			numArrayA.push_back(7);
		}
		else if (newString[x] == 56)
		{
			numArrayA.push_back(8);
		}
		else if (newString[x] == 57)
		{
			numArrayA.push_back(9);
		}
		else if (newString[x] != 49 || newString[x] != 50 || newString[x] != 51 || newString[x] != 52 || newString[x] != 53 ||
			newString[x] != 54 || newString[x] != 55 || newString[x] != 56 || newString[x] != 57)
		{
			cout << "Current String Character is NOT a numerical value..." << endl;
			cout << "Ending Function..." << endl;
			break;
		}
		cout << numArrayA[x] << endl;
	}
	userString = newString;
}

LargeInt::~LargeInt()
{
}

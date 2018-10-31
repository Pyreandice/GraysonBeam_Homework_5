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
		// Take the current value at newString[x] and make it the same value at vector<int> numArrayA via .push_back()...
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
		// If the current value at newString[x] is not a number then stop the function from running for a graceful exit of the operation.
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

std::string LargeInt::Addition(LargeInt &right)
{
	vector<int> tempVector;
	int tempResult = 0;
	int carry = 0;
	string newerString = "";

	// Only does vectors of the same .size();
	for (size_t x = 0; x < right.GetDigits.size(); x++)
	{
		tempResult = numArrayA[numArrayA.size() - 1 - x] + right.GetDigits()[right.GetDigits().size - 1 - x] + carry;
		tempVector.push_back(tempResult % 10);
		carry = (tempResult - tempVector[tempVector.size() - 1]) / 10;
	}
	// If there are any numbers to carry over put them in the correct position.
	if (carry != 0)
	{
		tempVector.push_back(carry);
		// Set carry equal to zero again.
		carry = 0;
	}

}

LargeInt::~LargeInt()
{
}

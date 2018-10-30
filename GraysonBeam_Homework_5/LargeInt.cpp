#include <cmath>
#include <iostream>
#include <string>
#include <vector>


#include "LargeInt.h"

using namespace std;

LargeInt::LargeInt()
{
}

// Take the user inputA and transfer it to ReturnVectorA.
void LargeInt::ReturnArrayA()
{
	cout << "Please enter a large numbers with no decimals: ";
	getline(cin, GetStringA);
	cout << "The number you have entered is: " << GetStringA << endl;

	for (size_t x = 0; x <= GetStringA.size(); x++)
	{
		// The value at the current location on GetStringA at x is equal to 
		// the current value of numVectorA at x.
		if (GetStringA[x] == 48)
		{
			numArrayA[x] = 0;
		}
		else if (GetStringA[x] == 49)
		{
			numArrayA[x] = 1;
		}
		else if (GetStringA[x] == 50)
		{
			numArrayA[x] = 2;
		}
		else if (GetStringA[x] == 51)
		{
			numArrayA[x] = 3;
		}
		else if (GetStringA[x] == 52)
		{
			numArrayA[x] = 4;
		}
		else if (GetStringA[x] == 53)
		{
			numArrayA[x] = 5;
		}
		else if (GetStringA[x] == 54)
		{
			numArrayA[x] = 6;
		}
		else if (GetStringA[x] == 55)
		{
			numArrayA[x] = 7;
		}
		else if (GetStringA[x] == 56)
		{
			numArrayA[x] = 8;
		}
		else if (GetStringA[x] == 57)
		{
			numArrayA[x] = 9;
		}
		else if (GetStringA[x] != 49 || GetStringA[x] != 50 || GetStringA[x] != 51 || GetStringA[x] != 52 || GetStringA[x] != 53 ||
				 GetStringA[x] != 54 || GetStringA[x] != 55 || GetStringA[x] != 56 || GetStringA[x] != 57)
		{
			cout << "Current String Character is NOT a numerical value..." << endl;
			cout << "Ending Function..." << endl;
			break;
		}
		cout << numArrayA[x] << endl;
	}
}

// Take the user inputB and transfer it to ReturnArrayB.
void LargeInt::ReturnArrayB()
{
	cout << "Please enter a second large numbers with no decimals: ";
	getline(cin, GetStringB);
	cout << "The second number you have entered is: " << GetStringB << endl;

	for (size_t x = 0; x < GetStringB.size(); x++)
	{
		// The value at the current location on GetStringB at xis equal to 
		// the current value of numArrayB at x.
		if (GetStringB[x] == 48)
		{
			numArrayB[x] = 0;
		}
		else if (GetStringB[x] == 49)
		{
			numArrayB[x] = 1;
		}
		else if (GetStringB[x] == 50)
		{
			numArrayB[x] = 2;
		}
		else if (GetStringB[x] == 51)
		{
			numArrayB[x] = 3;
		}
		else if (GetStringB[x] == 52)
		{
			numArrayB[x] = 4;
		}
		else if (GetStringB[x] == 53)
		{
			numArrayB[x] = 5;
		}
		else if (GetStringB[x] == 54)
		{
			numArrayB[x] = 6;
		}
		else if (GetStringB[x] == 55)
		{
			numArrayB[x] = 7;
		}
		else if (GetStringB[x] == 56)
		{
			numArrayB[x] = 8;
		}
		else if (GetStringB[x] == 57)
		{
			numArrayB[x] = 9;
		}
		else if (GetStringB[x] != 49 || GetStringB[x] != 50 || GetStringB[x] != 51 || GetStringB[x] != 52 || GetStringB[x] != 53 ||
			GetStringB[x] != 54 || GetStringB[x] != 55 || GetStringB[x] != 56 || GetStringB[x] != 57)
		{
			cout << "Current String Character is NOT a numerical value..." << endl;
			cout << "Ending Function..." << endl;
			break;
		}
		cout << GetStringB[x] << endl;
	}
}


LargeInt::~LargeInt()
{
}

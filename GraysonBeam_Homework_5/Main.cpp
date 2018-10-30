#include <iostream>

#include "LargeInt.h"

using namespace std;

int main()
{
	// Use 'Large' to call functions from the LargeInt class.
	LargeInt Large;

	// Call Void function ReturnArrayA for user input on GetStringA
	// And manipulation GetStringA.
	Large.ReturnArrayA();

	// Call Void function ReturnArrayB for user input on GetStringB
	// And manipulation on GetStringB.
	Large.ReturnArrayB();

	system("pause");
	return 0;
}
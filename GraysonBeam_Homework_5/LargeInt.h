#ifndef LARGE_INT_
#define LARGE_INT_
#include <vector>

class LargeInt
{
private:
	std::vector<int> numArrayA;
	std::string userString;

public:
	// Constructor
	LargeInt();

	// Getter
	std::string GetStringA();
	std::vector<int> GetDigits();

	// Setter
	std::string newString();
	void SetString(std::string newString);

	// Take the user inputA and transfer it to ReturnArrayA.
	//void ReturnArrayA();

	// Destructor
	~LargeInt();
};
#endif LARGE_INT_
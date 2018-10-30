#ifndef LARGE_INT_
#define LARGE_INT_

class LargeInt
{
private:
	
	std::vector<int> numArrayA;
	std::vector<int> numArrayB;

public:
	// Constructor
	LargeInt();

	std::string GetStringA;
	std::string GetStringB;
	//const int arrlength = 50;

	// Take the user inputA and transfer it to ReturnArrayA.
	void ReturnArrayA();

	// Take the user inputB and transfer it to ReturnArrayB.
	void ReturnArrayB();

	// Destructor
	~LargeInt();
};
#endif LARGE_INT_
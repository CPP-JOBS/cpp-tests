#include "test_0011.h"

#include <array>
#include <iostream>

class X
{
public:
	X() { ++mVal; }
	~X() { --mVal; }

	int GetVal() const { return mVal; }

private:
	static int mVal;
};

int X::mVal = 0;

void test_0011()
{
	std::array<X, 3> cont;

	std::cout << (cont[0].GetVal() + cont[2].GetVal()) << std::endl;
}

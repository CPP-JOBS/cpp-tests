#include "test_0006.h"
#include <iostream>

class Base
{
public:
    Base(int v = 0) : mVal(v) { }
    int GetVal() const { return mVal; }

private:
    int mVal;
};

void test_0006()
{
	Base b1(30);
	Base b2(20);

	Base & rb = b1;
	rb = b2;

	std::cout << (rb.GetVal() - b1.GetVal()) << std::endl;
}

#include "test_0013.h"

#include <iostream>

class Base
{
public:
    virtual int Foo(int val = 1) const { return val; }
};

class Derived : public Base
{
public:
    int Foo(int val = 10) const override { return val + 1; }
};

void test_0013()
{
	Base * b = new Derived;

	std::cout << b->Foo() << std::endl;

	delete b;
}

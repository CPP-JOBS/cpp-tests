#include "test_0008.h"

#include <iostream>

int acc(int & a, int & b)
{
	--a;
	++b;
	return a + b;
}

void test_0008()
{
	int a = 1;
	int b = 1;
	int c = acc(a, a);

	std::cout << (a + b + c) << std::endl;
}

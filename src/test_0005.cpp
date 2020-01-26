#include "test_0005.h"

#include <iostream>

void test_0005()
{
	int a = 2;
	int b = --a + 2 * 0;
	int c = b++ * --a;

	std::cout << (a + b + c) << std::endl;
}

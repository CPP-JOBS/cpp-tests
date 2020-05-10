#include "test_0015.h"

#include <iostream>

void test_0015()
{
	const int a = 1;
	const int b = 2;
	const int c = (a, b);

	std::cout << c << std::endl;
}

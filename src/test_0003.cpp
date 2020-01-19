#include "test_0003.h"

#include <iostream>

void test_0003()
{
	const int a = 1;
	const int b = 2;
	const int res = a + b << 1;

	std::cout << res << std::endl;
}

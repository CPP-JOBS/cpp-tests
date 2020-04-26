#include "test_0010.h"

#include <iostream>

void test_0010()
{
	int a = 3;
	int b = 2;

	[&]()
	{
		--a;
		--a;
		++b;
	};

	std::cout << (a + b) << std::endl;
}

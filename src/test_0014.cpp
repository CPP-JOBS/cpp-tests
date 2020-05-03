#include "test_0014.h"

#include <iostream>

void test_0014()
{
	int a = 0;
	int b = 11;

	for(a = 1; a < 10; a += 3)
	{
		++a;
		--b;
	}

	std::cout << (a - b) << std::endl;
}

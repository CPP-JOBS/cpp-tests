#include "test_0007.h"

#include <iostream>

int a = 10;

void test_0007()
{
	int a = 20;

	{
		int a = 30;
		std::cout << a << std::endl;
	}
}

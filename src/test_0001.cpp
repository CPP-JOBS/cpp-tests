#include "test_0001.h"

#include <iostream>

bool f(int a) { return a % 2; }
bool g(int a) { return a % 3; }
bool h(int a) { return (a * 2) % 4; }

void test_0001()
{
	if(f(3) && g(2) && h(1))
		std::cout << "A" << std::endl;
	else
		std::cout << "B" << std::endl;
}

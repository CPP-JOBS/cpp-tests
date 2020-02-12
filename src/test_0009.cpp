#include "test_0009.h"

#include <iostream>

void test_0009()
{
	if(3 > 1 + '1')
		std::cout << "3" << std::endl;
	else
		std::cout << "2" << std::endl;
}

#include "test_0012.h"

#include <algorithm>
#include <iostream>
#include <vector>

void test_0012()
{
	std::vector<int> h = { 2, 3, 4, 1 };
	std::make_heap(h.begin(), h.end());

	std::cout << h.front() << std::endl;
}

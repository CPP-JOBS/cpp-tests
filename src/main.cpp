#include <functional>
#include <iomanip>
#include <iostream>
#include <vector>

#include "tests.h"

int main(int, char **)
{
	// -- REGISTER TESTS --
	std::vector<std::function<void()>> tests;
	tests.emplace_back(test_0001);
	tests.emplace_back(test_0002);
	tests.emplace_back(test_0003);

	// -- RUN TESTS --
	for(unsigned int i = 0; i < tests.size(); ++i)
	{
		std::cout << "test " << std::setw(4) << std::setfill('0') << (i + 1) << std::endl;
		tests[i]();
		std::cout << std::endl;
	}

	return 0;
}

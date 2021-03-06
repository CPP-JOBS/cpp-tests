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
	tests.emplace_back(test_0004);
	tests.emplace_back(test_0005);
	tests.emplace_back(test_0006);
	tests.emplace_back(test_0007);
	tests.emplace_back(test_0008);
	tests.emplace_back(test_0009);
	tests.emplace_back(test_0010);
	tests.emplace_back(test_0011);
	tests.emplace_back(test_0012);
	tests.emplace_back(test_0013);
	tests.emplace_back(test_0014);
	tests.emplace_back(test_0015);

	// -- RUN TESTS --
	for(unsigned int i = 0; i < tests.size(); ++i)
	{
		std::cout << "test " << std::setw(4) << std::setfill('0') << (i + 1) << std::endl;
		tests[i]();
		std::cout << std::endl;
	}

	return 0;
}

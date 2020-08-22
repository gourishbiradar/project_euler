#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <numeric>
#include <algorithm>
#include <cassert>
#include "utility.h"

unsigned long long int sumPrimes (int range)
{
	unsigned long long int sum = 0;
	std::vector<int> primes(numberUtils::getUpperLimitPrimes(range));
	std::for_each(primes.begin(),primes.end(),[&](int n) { sum+=n; });
	return sum;
}
int main(int argc, char** argv)
{
	Timer t("Project Euler problem 9");
	if(argc < 2)
	{
		std::cout << "Usage solution <upper_limit>\n";
		return -1;
	}
	std::string range_str(argv[1]);
	int range = stoi(range_str);
	std::cout << "Sum of all primes below " << range << " is " << sumPrimes(range) << "\n";
	return 0;
}

#include <iostream>
#include <vector>
#include <cmath>
#include "utility.h"
#define LIMIT 600851475143
int main()
{
	Timer t("Project Euler 3");
	long int number(LIMIT);
	double find_primes_till(sqrt(LIMIT));
	std::vector<long int> primes(PrimeGenerator::getPrimes(find_primes_till));
	for(auto itr = primes.rbegin();itr!=primes.rend();itr++)
	{
		if(number%(*itr) == 0)
		{
			std::cout << "Answer is : " << (*itr) << "\n";
			return 0;
		}
	}
	return 0;
}

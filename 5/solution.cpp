#include <iostream>
#include <vector>
#include <cmath>
#include "utility.h"
#define LIMIT 20
using namespace std;


int main()
{
	Timer t("Project Euler problem 5: Smallest multiple");
	int answer = 1;
	std::vector<long int> primes(numberUtils::getPrimes(LIMIT));
	std::set<long int> primes_set(numberUtils::getSet(primes));
	for(int i=2;i<=LIMIT;i++)
	{
		if(numberUtils::isPrime(i,primes_set))
		{
			answer = answer * pow(i,numberUtils::getLargestExponent(i,LIMIT));
			std::cout << "Number : " << i << "\n";
		}
	}
	std::cout << "Smallest multiple is " << answer << "\n";
	return 0;
}

#include "include/utility.h"
#include <iostream>

Timer::Timer()
{
	using namespace std::chrono;
	start = high_resolution_clock::now();
}

Timer::Timer(std::string log_message)
{
	using namespace std::chrono;
	this->log_message = log_message;
	std::cout << "Timer started for : " << log_message << "\n";
	start = high_resolution_clock::now();
}

Timer::~Timer()
{
	using namespace std::chrono;
	end = high_resolution_clock::now();
	duration<double> time_spent = duration_cast<duration<double>>(end-start);
	std::cout << "Timer stopped for : " << this->log_message << " Took " << time_spent.count() << " seconds \n";
}

namespace numberUtils
{
	std::vector<long int> getPrimes(double limit)
	{
		std::vector<bool> potential_primes(limit,true);
		potential_primes[0] = false;
		potential_primes[1] = false;
		for(double i=0;i<limit;i++)
		{
			if(potential_primes[i])
			{
				for(double j=i;i*j<limit;j++)
				{
					potential_primes[i*j] = false;
				}
			}
		}
		std::vector<long int> primes;
		for(double i=2;i<limit;i++)
		{
			if(potential_primes[i])
			{
				primes.push_back(i);
			}
		}
		return primes;
	}

	std::vector<long int> getPrimeDivisors(long int number)
	{
		std::vector<long int> prime_divisors;
		std::vector<long int> primes(getPrimes(sqrt(number)));
		for(auto& prime : primes)
		{
			if((number%prime) == 0)
			{
				prime_divisors.push_back(prime);
			}
		}
		return prime_divisors;
	}
	bool isPalindrome(int number)
	{
		int reversedNumber = 0;
		int remainder,originalNumber = number;
		while(number)
		{
			remainder = number % 10;
			reversedNumber = reversedNumber*10 + remainder;
			number /= 10;
		}
		if(originalNumber == reversedNumber)
			return true;
		return false;
	}
}


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
	//Notice the difference in signature
	std::vector<int> getUpperLimitPrimes(int upperLimit)
	{
		int sieveBound = (int)(upperLimit - 1) / 2;
		int upperSqrt = ((int)sqrt(upperLimit)-1)/2;
		std::vector<bool> potential_primes(sieveBound+1,true);
		for(int i=1;i<=upperSqrt;i++)
		{
			if(potential_primes[i])
			{
				for(int j=i*2*(i+1);j<=sieveBound;j+=2*i+1)
				{
					potential_primes[j] = false;
				}
			}
		}
		std::vector<int> primes(upperLimit/(log(upperLimit) - 1.08366));
		primes.push_back(2);
		for(int i=1;i<=sieveBound;i++)
		{
			if(potential_primes[i])
			{
				primes.push_back(2*i+1);
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
	bool isPrime(int number,std::set<long int> primes)
	{
		if(primes.find(number) != primes.end())
		{
			return true;
		}
		return false;
	}
	bool isPrime(int number,std::vector<long int> primes)
	{
		std::set<long int> primes_set(numberUtils::getSet(primes));
		return isPrime(number,primes_set);
	}
	std::set<long int> getSet(std::vector<long int> arr)
	{
		std::set<long int> new_set;
		for(auto& e : arr)
		{
			new_set.insert(e);
		}
		return new_set;
	}
	int getLargestExponent(int input, int number)
	{
		int answer = floor(log(number)/log(input));
		return answer;
	}
}


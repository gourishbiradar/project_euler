#include <vector>
#include <set>
#include <chrono>
#include <string>
#include <iostream>
#include <cmath>

class Timer
{
	private:
		std::chrono::high_resolution_clock::time_point start,end;
		std::string log_message;
	public:
		Timer(std::string log);
		Timer();
		~Timer();
};

namespace numberUtils
{
	std::vector<long int> getPrimes(double limit);
	std::vector<long int> getPrimeDivisors(long int number);
	bool isPalindrome(int number);
	std::set<long int> getSet(std::vector<long int>);
	bool isPrime(int number,std::vector<long int> primes);
	bool isPrime(int number,std::set<long int> primes);
	int getLargestExponent(int input,int number);
}

namespace VectorUtils 
{
	template<class T>
	void printArray(std::vector<T> arr)
	{
		for(auto& e : arr)
		{
			std::cout << e << " " ;
		}
	}
}


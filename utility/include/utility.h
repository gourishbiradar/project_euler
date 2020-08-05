#include <vector>
#include <set>
#include <chrono>
#include <string>
#include <iostream>

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

namespace PrimeGenerator
{
	std::vector<long int> getPrimes(double limit);
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


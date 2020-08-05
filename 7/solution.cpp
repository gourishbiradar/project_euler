#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include "utility.h"
#define LIMIT 1000005
using namespace std;


int main(int argc, char** argv)
{
	Timer t("Project Euler problem 7");
	if(argc < 2)
	{
		std::cout << "Usage solution <position of prime number to find> \n";
		return -1;
	}
	int position;
	std::stringstream userinput(argv[1]);
	userinput >> position;

	std::vector<long int> primes(numberUtils::getPrimes(LIMIT));

	std::cout << "The " << position << " prime is " << primes[position-1] << "\n";

	return 0;
}

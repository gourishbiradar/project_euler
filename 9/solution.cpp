#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include "utility.h"


int main(int argc, char** argv)
{
	Timer t("Project Euler problem 9");
	if(argc < 2)
	{
		std::cout << "Usage solution <upper_limit>\n";
		return -1;
	}
	std::string range_str(argv[1]);
	unsigned long long int range = stoll(range_str);
	std::cout << "Input number : " << range << "\n" ;
	unsigned long long int answer = 0;
	for(unsigned long long int a = 1 ; a < range ; a++)
	{
		for(unsigned long long int b = a+1; b < range ; b++)
		{
			unsigned long long int c = range - (a+b); //condition is a+b+c = range
			if(pow(a,2) + pow(b,2) == pow(c,2))
			{
				std::cout << "Found a triplet (a,b,c) " << a << " " << b << " " << c << "\n";
				answer = a*b*c;
				break;
			}
		}
	}
	if(answer == 0 )
	{
		std::cout << "Could not find any such triplet\n";
		return -2;
	}
	std::cout << "Product is : " << answer << "\n";
	return 0;
}

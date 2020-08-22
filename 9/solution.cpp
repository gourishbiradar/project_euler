#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include "utility.h"

unsigned long long int findTriplet(unsigned long long int range)
{
	for(unsigned long long int r = 1; r<=range;r++)
	{
		unsigned long long int r_sqr_by_2 = (unsigned long long int)(pow(r,2)/2);
		for(unsigned long long int s = 1; s<r;s++)
		{
			if((r_sqr_by_2)%s == 0)
			{
				unsigned long long int t = (r_sqr_by_2)/s;
				unsigned long long int a,b,c;
				a = r+s;
				b = r+t;
				c = r+s+t;
				if(a+b+c == range)
				{
					return a*b*c;
				}
			}
		}
	}
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
	unsigned long long int range = stoll(range_str);
	std::cout << "Input number : " << range << "\n" ;
	std::cout << "Product is : " << findTriplet(range) << "\n";
	return 0;
}

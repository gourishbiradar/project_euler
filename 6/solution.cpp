#include <iostream>
#include <vector>
#include <cmath>
#include "utility.h"
#define LIMIT 100
using namespace std;


int main()
{
	Timer t("Project Euler problem 6");
	double sum_of_squares = (LIMIT*(LIMIT+1)*(2*LIMIT+1))/6;
	std::cout << "Sum of squares " << sum_of_squares << "\n";
	double square_of_sums = (LIMIT*LIMIT*(LIMIT+1)*(LIMIT+1))/4;
	std::cout << "Square of sums " << square_of_sums << "\n";
	double answer = square_of_sums - sum_of_squares; 
	std::cout.precision(17);
	std::cout << "The difference of series is " << std::fixed << answer << "\n";
	return 0;
}

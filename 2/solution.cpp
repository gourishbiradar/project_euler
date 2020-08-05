#include <iostream>
#define LIMIT 4000000
int main(int argc, char** argv)
{
	unsigned int answer = 2; //we start with 2 since the summation starts from the next even fib number
	unsigned int fibn_6 = 0;
	unsigned int fibn_3 = 2;

	while(4*fibn_3 + fibn_6 < LIMIT)
	{
		unsigned int next_fib = 4*fibn_3 + fibn_6;
		answer += next_fib;
		fibn_6 = fibn_3;
		fibn_3 = next_fib;
	}
	std::cout << "Sum of Fibonacci numbers less than " << LIMIT << " is " << answer << "\n";
	return 0;
}

#include <iostream>

int main(int argc, char** argv)
{
	unsigned int answer = 0;
	for(int n = 0;n<1000;n++)
	{
		if(n%3==0 || n%5==0)
			answer+=n;
	}
	std::cout << "Sum of multiples of 3 or 5 below 1000: " << answer << "\n";
	return 0;
}

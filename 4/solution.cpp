#include <iostream>
#include <vector>
#include <cmath>
#include "utility.h"
using namespace std;

int main()
{
	Timer t("Project Euler problem 4: Largest Palindrome product");
	int answer;
	//TODO:: Let's figure out a non brute force method
	for(int a=999;a>100;a--)
	{
		for(int b=999;b>100;b--)
		{
			int product = a*b;
			if(numberUtils::isPalindrome(product))
			{
				answer = max(answer,product);
				break;
			}
		}
	}
	std::cout << "Largest palindrome product of two 3 digit numbers is " << answer << "\n";
	return 0;
}

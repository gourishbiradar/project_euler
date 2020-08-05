#include <iostream>
#include <vector>
#include <cmath>
#include "utility.h"
using namespace std;

//Using reference https://www.xarg.org/puzzle/project-euler/problem-4/#:~:text=The%20largest%20palindrome%20made%20from,of%20two%203%2Ddigit%20numbers.

int main()
{
	Timer t("Project Euler problem 4: Largest Palindrome product");
	int answer;
	for(int a=990;a>100;a-=11)
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

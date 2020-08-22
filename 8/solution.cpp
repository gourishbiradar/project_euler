#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <fstream>
#include "utility.h"

unsigned long long int findProduct(std::string inputnumber, int window)
{
	unsigned long long int answer = 0; 
	for(unsigned int i=0;i<=inputnumber.size()-window;i++)
	{
		unsigned long long int product = 1; 
		for(unsigned int k=0;k<window;k++)
		{
			product = product * (inputnumber[i+k]-'0');
		}
		answer = std::max(answer,product);
	}
	return answer;
}
int main(int argc, char** argv)
{
	Timer t("Project Euler problem 8");
	if(argc < 3)
	{
		std::cout << "Usage solution <input.txt> <window_length>\n";
		return -1;
	}
	std::string infile(argv[1]);
	std::string window_len_str(argv[2]);
	int k = stoi(window_len_str);
	std::ifstream file(infile.c_str());
	if(!file)
	{
		std::cout << "Cannot open file : " << infile << "\n" ;
		return -2;
	}
	std::string number;
	std::getline(file,number);
	std::cout << "Input number : " << number << "\n" ;
	std::cout << "Product in window size " << k << " : " << findProduct(number,k) << " \n";
	return 0;
}

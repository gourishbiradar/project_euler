#include "include/utility.h"
#include <iostream>

Timer::Timer()
{
	using namespace std::chrono;
	start = high_resolution_clock::now();
}

Timer::Timer(std::string log_message)
{
	using namespace std::chrono;
	this->log_message = log_message;
	std::cout << "Timer started for : " << log_message << "\n";
	start = high_resolution_clock::now();
}

Timer::~Timer()
{
	using namespace std::chrono;
	end = high_resolution_clock::now();
	duration<double> time_spent = duration_cast<duration<double>>(end-start);
	std::cout << "Timer stopped for : " << this->log_message << " Took " << time_spent.count() << " seconds \n";
}

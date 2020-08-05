#include <vector>
#include <set>
#include <chrono>
#include <string>

class Timer
{
	private:
		std::chrono::high_resolution_clock::time_point start,end;
		std::string log_message;
	public:
		Timer(std::string log);
		Timer();
		~Timer();
};

#include "../include/utility.h"


int main(int argc, char** argv)
{
	Timer t("Testing timer");
	for(unsigned int i=0; i <=10000000;i++)
	{
		int temp_store = i*i;
	}
	return 0;
}

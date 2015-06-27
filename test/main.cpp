#include <iostream>
#include <unistd.h>
#include "../elapsed.hpp"

int main()
{
	std::cout << "Elapsed test of 2 seconds" << std::endl;

	Elapsed e;
	e.Start();

	sleep(2);
	e.End("Finished");
}
// CMakeScratchPad.cpp : Defines the entry point for the application.
//

#include "main.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	SPDLOG_DEBUG("This is a debug message.");
	SPDLOG_INFO("Hello Seattle.");

	int counter = 1;

	while (counter < 6)
	{
		std::cout << "Sleeping for 1 second." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		counter++;
	}

	return 0;
}

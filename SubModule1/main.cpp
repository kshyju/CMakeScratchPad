// CMakeScratchPad.cpp : Defines the entry point for the application.
//

#include "main.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	SPDLOG_DEBUG("This is a debug message.");
	SPDLOG_INFO("Hello Seattle.");

	return 0;
}

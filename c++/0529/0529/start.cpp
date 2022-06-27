//start.cpp
//page87
#include <iostream>
using namespace std;
#include "stumanager.h"

int main()
{
	stuManager* sm = new stuManager();
	sm->Run();
	delete sm;

	return 0;
}

//start.cpp

#include <iostream>
using namespace std;
#include "App.h"

int main()
{
	App app;
	app.InitInstance();
	app.Run();
	app.ExitInstance();

	return 0;
}

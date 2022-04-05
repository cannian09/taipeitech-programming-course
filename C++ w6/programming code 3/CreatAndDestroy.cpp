#include "CreatAndDestroy.h"
#include <iostream>

using namespace std;

CreatAndDestroy::CreatAndDestroy(int ID, string messagestring) :objectID(ID), message(messagestring)
{
	cout << "object" << objectID << "  constructor runs"
		<< message << endl;
}

CreatAndDestroy::~CreatAndDestroy()
{
	cout << (objectID == 1 || objectID == 6 ? "\n" : "");

	cout << "object" << objectID << "  destructor runs" << message << endl;
}

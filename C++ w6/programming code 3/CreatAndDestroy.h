#pragma once
#include <string>
using namespace std;
#ifndef CREATE_H
#define CREATE_H
class CreatAndDestroy
{
public:
	CreatAndDestroy(int, string);
	~CreatAndDestroy();
private:
	int objectID;
	string message;
};

#endif // !CREATE_H

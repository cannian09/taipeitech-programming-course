#pragma once

#include <string>
using namespace std;

class gradebook
{
public:
	gradebook(string);
	void setcoursename(string);
	string getcoursename();
	void displaymes();
private:
	string coursename;
};

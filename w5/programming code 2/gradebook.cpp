#include "gradebook.h"
#include <iostream>
using namespace std;

gradebook::gradebook(string name)
{
	setcoursename(name);
}

void gradebook::setcoursename(string name)
{
	coursename = name;
}

string gradebook::getcoursename()
{
	return coursename;
}
void gradebook::displaymes()
{
	cout << "welcom to the grade book for:" << getcoursename()
		<< "!" << endl;
}

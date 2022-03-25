#include "gradebook.h"
#include <iostream>
using namespace std;

gradebook::gradebook(string name)
{
	setcoursename(name);
}

void gradebook::setcoursename(string name)
{
	if (name.length() <= 25)
		coursename = name;
	if (name.length() > 25)
	{
		coursename = name.substr(0, 25);

		cout << "name\"" << name << "\"exceed maximum legth (25).\n"
			<< "limiting coursename to first 25 characters.\n" << endl;
	}
}
string gradebook::getcoursename()
{
	return coursename;
}

/*void gradebook::displaymes()
{
	cout << "welcome to the gradebook for: " << getcoursename()
		<< "!" << endl;
}*/

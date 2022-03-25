#include <iostream>
#include "gradebook.h"
using namespace std;
int main()
{
	gradebook book1("CS101 introduction to programming in C++");
	gradebook book2("CS102 C++ Data structures");

	cout << "book1 init course name is"
		<< book1.getcoursename()
		<< "\nbook2 init course name is:"
		<< book2.getcoursename() << endl;
	book1.setcoursename("123451234512345123451234512345");

	cout << "\nbook1 course name is:"
		<< book1.getcoursename()
		<< "\nbook2 course name is:"
		<< book2.getcoursename() << endl;
}


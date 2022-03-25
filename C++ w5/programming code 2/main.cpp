#include <iostream>
#include "gradebook.h"
using namespace std;

int main()
{
	gradebook book1(" CS101 introduction to C++ prgramming");
	gradebook book2(" CS101 data structures in C++");
	book1.displaymes();
	cout << "book1 creates for course:" << book1.getcoursename()
		<< "\nbook2 created for course" << book2.getcoursename()
		<< endl;
}



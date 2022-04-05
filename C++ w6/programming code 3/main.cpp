#include <iostream>
#include "CreatAndDestroy.h"

using namespace std;

void creat(void);

CreatAndDestroy first(1, "(global before main)");

int main()
{
	cout << "\nMAIN FUNCTION:EXECUTION BEGINS" << endl;
	CreatAndDestroy second(2, "(local automatic in main)");
	static CreatAndDestroy thrid(3, "(local static in main)");

	creat();

	cout << "\nMAIN MAINFUNCTION:EXECUTION RESUMES" << endl;
	CreatAndDestroy fourth(4, "(local automatic in main)");
	cout << "\nMAIN FUNCTION:EXECUTIOM ENDS" << endl;
}

void creat(void)
{
	cout << "\nCREATE FUNCTION:EXECUTION BEGINS" << endl;
	CreatAndDestroy fifth(5, "(local automatic in create)");
	static CreatAndDestroy sixth(6, "(local static in create)");
	CreatAndDestroy seventh(7, "(local sutomatic in create)");
	cout << "\nCREATE FUNCTION:EXECUTION ENDS" << endl;
}

#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
	Time t1;
	Time t2(2);
	Time t3(21, 34);
	Time t4(12, 25, 42);

	cout << "constructed with:\n\nt1: all argument defaulted\n";
	t1.printuniversal();
	cout << "\n";
	t1.printstandard();

	cout << "\n\nt2: hour specified; minute and second defaulted\n";
	t2.printuniversal();
	cout << "\n";
	t2.printstandard();

	cout << "\n\nt3: hour and minute specified; second defaulted\n";
	t3.printuniversal();
	cout << "\n";
	t3.printstandard();

	cout << "\n\nt4: hour, minute and second specified\n";
	t4.printuniversal();
	cout << "\n";
	t4.printstandard();
	try
	{
		Time t5(27, 74, 99);
	}
	catch (invalid_argument &e)
	{
		cout << "\n\nexception while initializing t5:" << e.what() << endl;
	}
}

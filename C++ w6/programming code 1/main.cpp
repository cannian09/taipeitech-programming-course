using namespace std;
#include <stdexcept>
#include "iostream"
#include "Time.h"
int main()
{
	Time t;
	cout << "The init unverisal time is ";
	t.printuniversal();
	cout << "\nThe init standard time is ";
	t.printstandard();

	t.settime(13, 27, 6);

	cout << "\n\nuniversal time after settime is ";
	t.printuniversal();

	cout << "\nstandard time after settime is ";
	t.printstandard();
	try
	{
		t.settime(99, 99, 99);
	}
	catch (invalid_argument &e)
	{
		cout << "\n\nexception:" << e.what() << endl;
	}

	cout << "\nafter attempting invalid settings:"
		<< "\nuniversal time:";
	t.printuniversal();
	cout << "\nstandard time:";
	t.printstandard();
	cout << endl;
}

#include <iostream>
#include <string>
using namespace std;

class gradebook
{
public:
	gradebook(string name) {
		seta(name);
	}

	void seta(string name) {
		a = name;
	}

	string geta() {
		return a;
	}

	void displaymessage() {
		cout << "welcome to the grade book for\n" << geta() << "!" << endl;
	}

private:
	string a;
};
int main()
{
	gradebook gra1("num 1");
	gradebook gra2("num 2");

	cout << "gra1 created for course:" << gra1.geta() << "\ngra2 created for course:" << gra2.geta() << endl;
}


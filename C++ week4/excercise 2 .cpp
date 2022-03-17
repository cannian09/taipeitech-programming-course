#include <iostream>
#include <string>
using namespace std;

class gradebook
{
public:
	void displaymessage(string coursename) {
		cout << "welcome to the gradebook for " << coursename << "!" << endl;
	}
};
int main()
{
	string a;
	gradebook mygradebook;
	cout << "plz enter the course name:" << endl;
	getline(cin, a);
	cout << endl;
	mygradebook.displaymessage(a);
}

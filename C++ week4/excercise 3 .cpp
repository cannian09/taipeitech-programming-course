#include <iostream>
#include <string>
using namespace std;

class gradebook
{
public:
	void seta(string name) {
		a = name;
	}
	string geta() {
		return a;
	}
	void displaymessage() {
		cout << "welcome to the gradebook for " << geta() << "!" << endl;
	}
private:
	string a;
};
int main()
{
	string a;
	gradebook mygradebook;
	cout << "init coursename is:" << mygradebook.geta() << endl;
	cout << "plz enter the course name:" << endl;
	getline(cin, a);
	cout << endl;
	mygradebook.seta(a);
	mygradebook.displaymessage();
}


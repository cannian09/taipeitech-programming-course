#include <iostream>
using namespace std;

class gradebook
{
public:
	void displaymessage() {
		cout << "welcome to the gradebook" << endl;
	}
};
int main()
{
	gradebook mygradebook;
	mygradebook.displaymessage();
}

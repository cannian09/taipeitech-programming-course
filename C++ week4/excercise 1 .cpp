#include <iostream>
#include <string>
using namespace std;

class company
{
public:
	company(string name) {
		seta(name);
	}

	void seta(string name) {
		a = name;
	}

	string geta() {
		return a;
	}

	void displaymessage() {
		cout << "\nnew name:" << geta() << endl;
	}

private:
	string a;
};
int main()
{
	string input;
	company gra1("NTUT lab321");
	cout << "original company name:" << gra1.geta() << endl;
	cout << "\nset company new name:";
	getline(cin, input);
	gra1.seta(input);
	gra1.displaymessage();
	
}

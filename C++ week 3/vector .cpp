#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#define v1 4
#define v2 6
int boxvolume(int a, int b, int c);
void outputvector(const vector<int>&array);
int main() {
	int array[6];
	vector<int>integers1(v1);
	vector<int>integers2(v2);
	cout << "size of vector integers1 is " << v1;
	cout << "vector after initialization:" << endl;
	outputvector(integers1);
	cout << "size of vector integers2 is" << v2;
	cout << "vector after initialization:" << endl;
	outputvector(integers2);
	cout << "enter 6 integers:" << endl;
	for (int i = 0;i < integers1.size()-1;i++) {
		cin >> integers1[i];
	}
	for (int i = 0;i < integers2.size();i++) {
		if (i % 2 == 0) {
			cin >> integers2[i];
		}
	}
	integers1[3] = boxvolume(integers1[0], integers1[1], integers1[2]);
	integers2[1] = boxvolume(integers2[0], integers2[0], integers2[0]);
	integers2[3] = boxvolume(integers2[2], integers2[2], integers2[2]);
	integers2[5] = boxvolume(integers2[4], integers2[4], integers2[4]);
	cout << "after input, the vectors contain:" << endl;
	cout << "integers1:" << endl;
	outputvector(integers1);
	cout << "after input, the vectors contain:" << endl;
	cout << "integers2:" << endl;
	outputvector(integers2);
}

void outputvector(const vector<int>&array) {
	size_t i;
	for (i = 0;i < array.size();i++) {
		cout << setw(12) << array[i];
		if ((i + 1) % 4 == 0);
		cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
}
int boxvolume(int a, int b, int c) {
	return a * b * c;
}

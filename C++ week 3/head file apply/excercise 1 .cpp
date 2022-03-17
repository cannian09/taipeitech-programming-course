#include <iostream>
#include "sort.h"
#define count 5

using namespace std;

int main() {
	double array[count];

	cout << "input three number:\n";

	for (int i = 0;i < count;i++) {
		cout << "第" << i + 1 << "個:";
		cin >> array[i];
	}

	sort(array);
	cout << array[0];
	for (int i = 1;i < count;i++) {
		cout << "<" << array[i];
	}
}

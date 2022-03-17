#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct cartype
{
	string brand;
	unsigned int price;
}cartype_t;

class repository
{
public:
	void addcar(string brand, unsigned int carprice) {
		cartype_t car;
		car.brand = brand;
		car.price = carprice;

		cars.insert(cars.end(), car);
	}
	bool delcar(int carnumber) {
		if (cars.size() < carnumber) {
			return 0;
		}
		else
		{
			cars.erase(cars.begin() + carnumber - 1);
			cout << endl;
			return 1;
		}
	}
	void showcar() {
		for (size_t i = 0;i < cars.size();i++) {
			cout << "cars No." << i + 1 << endl;
			cout << "car brand:" << cars[i].brand << endl;
			cout << "car price" << cars[i].price << endl << endl;
		}
	}
private:
	vector<cartype_t>cars;
};


int main() {

	repository repo;
	repo.addcar("maserati", 350000);
	repo.addcar("BMW", 85000);
	repo.addcar("toyota", 17000);
	repo.showcar();

	int delcarno;
	cout << "enter car no. you want to del:";
	cin >> delcarno;
	if (repo.delcar(delcarno) == false) {
		cout << "car.no" << delcarno << "is invalid" << endl;
	}
	else {
		repo.showcar();
	}
	return 0;
}

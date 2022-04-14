#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include "Car.h"
#include "Sportscar.h"
#include "Van.h"
using namespace std;

Car one;
Van two;
Sportscar three;

int main()
{
	one.setbrand("TOYOTA");
	two.setbrand("HONDA");
	three.setbrand("BMW");
	one.setspeed(18);
	two.setspeed(25);
	three.setspeed(10);

	cout << "Ordinary Car Brand:" << one.getbrand() << endl;
	cout << "Ordinary Car Speed:" << one.getspeed() << endl;
	one.Accelerate();
	cout << "After Accelerated:" << one.getspeed() << endl;
	one.brake();
	cout << "After Brake:" << one.getspeed() << endl << endl;

	cout << "Ordinary Van Brand:" << two.getbrand() << endl;
	cout << "Ordinary Van Speed:" << two.getspeed() << endl;
	two.Accelerate();
	cout << "After Accelerated:" << two.getspeed() << endl;
	two.brake();
	cout << "After Brake:" << two.getspeed() << endl << endl;

	cout << "Ordinary SportsCar Brand:" << three.getbrand() << endl;
	cout << "Ordinary SportsCar Speed:" << three.getspeed() << endl;
	three.Accelerate();
	cout << "After Accelerated:" << three.getspeed() << endl;
	three.brake();
	cout << "After Brake:" << three.getspeed() << endl;
}

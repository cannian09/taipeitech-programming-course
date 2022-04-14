#pragma once
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;


class Car
{
public:
	void setbrand(string brand);
	string getbrand();

	void setspeed(float speed);
	float getspeed();

	void Accelerate();
	void brake();
protected:
	string brand;
	float speed;
};


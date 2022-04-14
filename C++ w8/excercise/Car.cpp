#include "Car.h"

void Car::setbrand(string new_brand)
{
	brand = new_brand;
}

string Car::getbrand()
{
	return brand;
}

void Car::setspeed(float new_speed)
{
	speed = new_speed;
}

float Car::getspeed()
{
	return speed;
}

void Car::Accelerate()
{
	speed = speed + 10;
}

void Car::brake()
{
	speed = speed - 10;
}

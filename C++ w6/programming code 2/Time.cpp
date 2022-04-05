#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

Time::Time(int hour, int minute, int second)
{
	settime(hour, minute, second);
}

void Time::settime(int h, int m, int s)
{
	sethour(h);
	setminute(m);
	setsecond(s);
}

void Time::sethour(int h)
{
	if (h >= 0 && h <= 24)
		hour = h;
	else
	{
		throw invalid_argument("hour must be 0~23");
	}
	
}

void Time::setminute(int m)
{
	if (m >= 0 && m < 60)
		minute = m;
	else
	{
		throw invalid_argument("minute must be 0~59");
	}
}

void Time::setsecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
	{
		throw invalid_argument("second must be 0~59");
	}
}

int Time::gethour()
{
	return hour;
}

int Time::getminute() 
{
	return minute;
}

int Time::getsecond()
{
	return second;
}

void Time::printstandard() 
{
	cout << ((gethour() == 0) || gethour() == 12 ? 12 : gethour() % 12)
		<< ":" << setfill('0') << setw(2) << getminute()
		<< ":" << setw(2) << getsecond() << (hour < 12 ? "AM" : "PM");
}

void Time::printuniversal()
{
	cout << setfill('0') << setw(2) << gethour() << ":"
		<< setw(2) << getminute() << ":" << setw(2) << getsecond();
}

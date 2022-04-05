#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

Time::Time()
{
	hour = minute = second = 0;
}
void Time::settime(int h, int m, int s)
{
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		hour = h;
		minute = m;
		second = s;
	}
	else
	{
		throw invalid_argument("hour,minute and/or second was out of range");
	}
}
void Time::printuniversal()
{
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}
void Time::printstandard()
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2)
		<< minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
}

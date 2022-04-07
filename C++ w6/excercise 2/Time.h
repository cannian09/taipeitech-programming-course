#pragma once
#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>


class Time
{
public:

	void SetTime(unsigned short hour, unsigned short minute, unsigned short second);
	std::string Get12HourMode();
private:
	unsigned short m_hour, m_minute, m_second;
	std::string returnstring;
};

#endif // !TIME_H

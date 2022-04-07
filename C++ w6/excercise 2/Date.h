#pragma once
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
#include <stdexcept>


using namespace std;



class Date
{
public:
	
	void SetDate(int year, unsigned short month, unsigned short day);
	string GetDateInROC();

private:

	bool isLeapYear(int year);

	int m_year;
	unsigned short m_month;
	unsigned short m_day;
	
};


#endif // !DATE_H

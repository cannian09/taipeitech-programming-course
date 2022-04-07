#include "Date.h"

using namespace std;

short dayInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

bool Date::isLeapYear(int year)
{
	return((((year) % 4) == 0 && ((year) % 100) != 0) || ((year) % 400) == 0);
}

void Date::SetDate(int year, unsigned short month, unsigned short day)
{
	if (year < 0) {
		throw invalid_argument("Year 輸入錯誤");
	}
	else
	{
		if (year < 1912) {
			throw invalid_argument("中華民國還沒出生");
		}
		else
		{
			m_year = year;
			if (month < 0 || month>12) {
				throw invalid_argument("Month 輸入錯誤");
			}
			else
			{
				m_month = month;
				if (day < 0 || day>31) {
					throw invalid_argument("day 輸入錯誤");
				}
				else
				{
					if (isLeapYear(year) == 1) {
						dayInMonth[1] = 29;
					}
					else
					{
						dayInMonth[1] = 28;
					}
					if (dayInMonth[month - 1] == 28 && day > 28) {
						throw invalid_argument("day 輸入錯誤");
					}
					else
					{
						if (dayInMonth[month - 1] == 29 && day > 29) {
							throw invalid_argument("day 輸入錯誤");
						}
						else
						{
							m_day = day;
						}
					}
				}
			}
		}
	}


}

string Date::GetDateInROC()
{
	return "中華民國" + to_string(m_year-1911) + "年" + to_string(m_month) + "月" + to_string(m_day) + "日";
}

#include "Time.h"
using namespace std;

void Time::SetTime(unsigned short hour, unsigned short minute, unsigned short second)
{
	returnstring = "null";

	if (hour >= 24)
		returnstring = "Hour";
	else
	{
		m_hour = hour;
	}

	if (minute >= 60)
	{
		if (returnstring != "null")
		{
			returnstring += ", Minute";
		}
		else
		{
			returnstring = "Minute";
		}

	}
	else
	{
		m_minute = minute;
	}

	if (second >= 60)
	{
		if (returnstring != "null")
		{
			returnstring += ", Second";
		}
		else {
			returnstring = "Second";
		}
	}
	else
	{
		m_second = second;
	}

	if (returnstring != "null") {
		returnstring += "設定錯誤!";
		throw invalid_argument(returnstring);
	}
}

string Time::Get12HourMode()
{
	returnstring = to_string(((m_hour == 0 || m_hour == 12) ? 12 : m_hour % 12)) +
		":" + to_string(m_minute) + ":" + to_string(m_second) + (m_hour < 12 ? " AM" : " PM");
	return returnstring;
}

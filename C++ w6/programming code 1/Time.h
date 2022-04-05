#pragma once
#ifndef TIME_H
#define TIME_H
class Time
{
public:
	Time();
	void settime(int, int, int);
	void printuniversal();
	void printstandard();
private:
	int hour, minute, second;
};
#endif


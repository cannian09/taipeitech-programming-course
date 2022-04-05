#pragma once
#ifndef TIME_H 
#define TIME_H

class Time
{
public:
	Time(int = 0, int = 0, int = 0);
	void settime(int, int, int);
	void sethour(int);
	void setminute(int);
	void setsecond(int);

	int gethour() ;
	int getminute() ;
	int getsecond() ;


	void printuniversal();
	void printstandard();
private:
	int hour, minute, second;
};

#endif


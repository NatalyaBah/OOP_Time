#pragma once
using namespace std;
class Time
{
private:
	int sec;
	int min;
	int hour;

public:
	Time(int sec)
	{
		hour = sec / 3600;
		min = (sec%3600) / 60;
		this->sec = sec % 60;
	}
	Time(int hour,  int min, int sec)
	{
		this->sec = sec;
		this->min = min;
		this->hour = hour;
	}
	void print()
	{
		cout << hour << ":" << min << ":" << sec;
	}
	Time add(Time t2)
	{
		return Time (t2.toSec() + toSec());
	}
	int toSec()
	{
		return (sec + min * 60 + hour * 3600);		
	}
};


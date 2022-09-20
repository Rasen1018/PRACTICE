#ifndef _TIME_
#define _TIME_
#include <iostream>
#include <string>
using namespace std;

class Time {
	unsigned int hour;
	unsigned int min;
	unsigned int sec;
	unsigned int t_sec;

public:
	Time() {
		this->hour = 0;
		this->min = 0;
		this->sec = 0;
	}

	//열거형 초기화 -> Time() : hour(0), min(0), sec(0), t_sec(0) {}

	Time(unsigned int h, unsigned int m, unsigned int s) : hour(h), min(m), sec(s), t_sec(0) {}

	void CalSecond(unsigned int h, unsigned int m, unsigned int s, unsigned int t) {
		t = 3600 * h + 60 * +s;
	}

	unsigned int CalSecond() {
		t_sec = 3600 * hour + 60 * min +sec;
		return t_sec;
	}


	bool setHour(unsigned int h) {
		if (hour > 23 || hour < 0)
			return false;

		this->hour = h;
			return true;
	}

	unsigned int getHour() {
		return hour;
	}

	bool setMin(unsigned int m) {
		if (hour > 59 || hour < 0)
			return false;

		this->min = m;
			return true;
	}

	unsigned int getMin() {
		return min;
	}

	bool setSec(unsigned int s) {
		if (hour > 59 || hour < 0)
			return false;

		this->sec = s;
			return true; 
	}

	unsigned int getSec() {
		return sec;
	}

	string showTime() {
		string str = to_string(hour) + "시 " + to_string(min) + "분 " + to_string(sec) + "초";
		//str = to_string(hour) +"시 ";
		//str += to_string(min) + "분 ";
		//str += to_string(sec) + "초";
		return str;
	}

	bool operator<=(Time timeObj);
	bool operator>=(Time timeObj);

};

bool Time::operator<=(Time timeObj)
{
	this->CalSecond();
	timeObj.CalSecond();

	if (this->t_sec <= timeObj.t_sec)
		return true;
	else
		return false;
}

bool Time::operator>=(Time timeObj)
{
	this->CalSecond();
	timeObj.CalSecond();

	if (this->t_sec >= timeObj.t_sec)
		return true;
	else
		return false;
}

#endif
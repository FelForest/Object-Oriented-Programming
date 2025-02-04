#include "Time.h"
#include <iostream>

Time::Time(int h)
	: h(h)
{
}

Time::Time(int h, int m)
	: h(h), m(m)
{
}

Time::Time(int h, int m, int s)
	: h(h), m(m), s(s)
{
}

void Time::ShowTime()
{
	std::cout << h << "시 " << m << "분 " << s << "초\n";
}

void Time::ShowTimeInSeconds()
{
	int second = h * 3600 + m * 60 + s;
	std::cout << second << "초\n";
}

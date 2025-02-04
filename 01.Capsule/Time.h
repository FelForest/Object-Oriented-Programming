#pragma once

class Time
{
public:
	Time(int h);
	Time(int h, int m);
	Time(int h, int m, int s);

	void ShowTime();
	void ShowTimeInSeconds();

private:
	int h = 0;
	int m = 0;
	int s = 0;
};
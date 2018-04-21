#include"clock.h"
#include<iostream>
using namespace std;

void Clock::setTime(int hour = 0, int min = 0, int sec = 0)
{
	Hour = hour;
	Minute = min;
	Second = sec;
}
void Clock::showTime()
{
	cout << Hour << ":" << Minute << ":" << Second << endl;
}

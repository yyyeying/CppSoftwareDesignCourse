#include"clock.cpp"
#include<iostream>
using namespace std;

int main()
{
	Clock myClock;
	myClock.setTime(7, 0, 0);
	myClock.showTime();
	myClock.showTime(1);
	return 0;
}
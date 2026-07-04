#include<iostream>

using namespace std;

class Time
{
	private:
		int hour;
		int minute;
	public:
		Time()
		{
			this->hour = 0;
			this->minute = 0;
		};
		Time(int hour, int minute)
		{
			this->hour = hour;
			this->minute = minute;
		};
	public:
		int getHour()
		{
			return this->hour;
		};
		int getMinute()
		{
			return this->minute;
		};
};

namespace Util{
	int duration_diff(Time* start, Time* end)
	{
		int s = start->getHour() * 60 + start->getMinute();

		int e = end->getHour() * 60 + end->getMinute();

		return e - s;
	};
};

int main()
{
	/*初始数据:开始时间和结束时间*/
	int hourStart, minuteStart, hourEnd, minuteEnd;

	cin >> hourStart >> minuteStart >> hourEnd >> minuteEnd;

	Time *start=new Time(hourStart,minuteStart);

	Time *end=new Time(hourEnd, minuteEnd);

	/*计算总时长*/
	int total=Util::duration_diff(start, end);

	/*output*/
	cout << total/60<<" " << total % 60;

	return 0;
}
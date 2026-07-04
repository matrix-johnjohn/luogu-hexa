#include<iostream>
#include<format>
#include<cmath>

using namespace std;


class Time
{
	private:
		int hour;
		int minute;

	//构造函数
	public:
		Time() {
			this->hour = 0;
			this->minute = 0;
		};
		Time(int hour, int minute)
		{
			this->hour = hour;
			this->minute = minute;
		};
	//工具函数
	public:
		void sub_minute(int minute) {
			int total = this->hour * 60 + this->minute;  // 转为总分钟
			total -= minute;
			// 处理负数情况
			while (total < 0) {
				total += 24 * 60;
			};
			this->hour = (total / 60) ;
			this->minute = total % 60;
		}
		void show()
		{
			
			cout<< show_hour() << ":" << show_minute();
		}
	private:
		string show_hour()
		{
			if (this->hour < 10) {
				return format("0{}", this->hour);
			}
			else {
				return format("{}", this->hour);
			}
		};
		string show_minute()
		{
			if (this->minute < 10) {
				return format("0{}", this->minute);
			}
			else {
				return format("{}", this->minute);
			}
		};
};

int main()
{
	Time* t=new Time(8,0);//基础参数

	/*
		s:距离
		v:速度
	*/
	double s,v;
	cin>>s>>v;

	int m=ceil(s/v);//分钟数

	t->sub_minute(m);//减少路程时间

	t->sub_minute(10);//额外花费时间

	t->show();//控制台打印时间

	delete t;//清空内存
	t = nullptr;
	return 0;
}
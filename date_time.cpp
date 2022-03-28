#include<iostream>
#include<ctime>
using namespace std;
class Time
{
	private:
		int hours;
		int minute;
		int second;
	public:
		Time(int h=0,int m=0,int s=0);
		void setTime();
		Time getTime();
		Time sleepTime(Time sleep,Time wakeup);	
};

class Date
{
	public:
		int day;
		int month;
		int year;

		Date(int d=0,int mm=0,int y=0);
		Date setDate();
		//Date getDate();
		Date setDoB(int d=0,int mm=0,int y=0);
		Date findage(int);
};

Time::Time(int h,int m,int s)
{
	hours=h;
	minute=m;
	second=s;
}

void Time::setTime()
{
	time_t now=time(0);
	tm *ltm=localtime(&now);
	int h=ltm->tm_hour;
	int m=ltm->tm_min;
	int s=ltm->tm_sec;
	
	hours=h;
	minute=m;
	second=s;
	//cout<<"Current Time is : "<<hours<<":"<<minute<<":"<<second<<endl;
}

Time Time::getTime()
{
	Time temp;
	temp.hours=hours;
	temp.minute=minute;
	temp.second=second;
	cout<<"Current Time is : "<<temp.hours<<":"<<temp.minute<<":"<<temp.second<<endl;
	return temp;
}

Time Time::sleepTime(Time sleep,Time wakeup)
{
	Time temp;
	if(sleep.hours<24)
	{
		temp.hours=24-sleep.hours;
		temp.hours=temp.hours+wakeup.hours;
	}
	else
	{
		temp.hours=wakeup.hours-sleep.hours;
	}
	cout<<"Sleep time is "<<temp.hours<<" hours."<<endl;
	
}

Date::Date(int d,int mm,int y)
{
	day=d;
	month=mm;
	year=y;
}

Date Date::setDate()
{
	time_t now=time(0);
	tm *ltm=localtime(&now);
	int d=ltm->tm_mday;
	int mm=1+ltm->tm_mon;
	int y=1900+ltm->tm_year;
	Date temp;
	day=d;
	month=mm;
	year=y;
	temp.day=d;
	temp.month=mm;
	temp.year=y;
	cout<<"Current date is : "<<temp.day<<"-"<<temp.month<<"-"<<temp.year<<endl;
	return temp;
}

/*Date Date::getDate()
{
	return temp;
}*/

Date Date::setDoB(int d,int mm,int y)
{
	Date temp;	
	temp.day=d;
	temp.month=mm;
	temp.year=y;
	cout<<"Date of Birth is : "<<temp.day<<"-"<<temp.month<<"-"<<temp.year<<endl;
	return temp;
}

Date Date::findage(int dob)
{
	Date temp1,temp2=setDate();	
	temp1.year=temp2.year-dob;
	cout<<"Age is : "<<temp1.year<<endl;
	return temp1;
}

int main()
{
	Time t1;
	t1.setTime();
	//Time t2;
	t1.getTime();
	t1.sleepTime(22,7);
	
	Date d1;
	d1.setDate();
	Date d2;
	d2.setDoB(04,04,1996);
	d1.findage(1996);
	
	return 0;
}

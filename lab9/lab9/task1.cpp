#include<iostream>
using namespace std;
class Time {
	int hr;
	int min;
public:
	Time();
	Time(int h, int m);
	void settime(int h, int m);
	void gettime(int &, int &);
	void printtime();
	void incrementhour();
	void incrementmin();
};
Time::Time()
{
	hr = 0;
	min = 0;
}
Time::Time(int h, int m)
{
	hr = h;
	min = m;
}
void Time::settime(int h, int m)
{
	hr = h;
	min = m;
}
void Time::gettime(int& x, int& y)
{
	x = hr;
	y = min;
}
void Time::printtime()
{
	cout << "time is:" << hr << ":" << min << endl;
}
void Time::incrementhour()
{
	hr++;
	if (hr == 24)
	{
		hr = 0;
	}
}
void Time::incrementmin()
{
	min++;
	if (min >= 60)
	{
		hr++;
		min = min - 60;
	}
}
class Date {
	int month;
	int day;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	void setday(int m,int d,int y);
	void getdate(int& d,int& m,int& y);
	void printdate();
};
Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}
Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}
void Date::setday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}
void Date::getdate(int& m, int& d, int& y)
{
	m = month;
	d = day;
	y = year;
}
void Date::printdate()
{
	cout << "date is:" << month << "/" << day << "/" << year << endl;
}
class Event {
	string eventname;
	Time eventtime;
	Date eventdate;
public:
	Event(int hours = 0, int minutes = 0, int m = 1, int d = 1, int y = 1900, string name = "christmis");
	void setevent(int hr, int min, int m, int d, int y, string name);
	void printevent();
}; 
Event::Event(int hours, int minutes , int m , int d , int y , string name )
{
	eventtime.settime(hours, minutes);
	eventdate.setday(m, d, y);
	eventname = name;
}
void Event::setevent(int hr, int min, int m, int d, int y, string name)
{
	eventtime.settime(hr, min);
	eventdate.setday(m, d, y);
	eventname = name;
}
void Event::printevent()
{
	cout << "event name is:" << eventname << endl;
	cout << "event time is: ";
	eventtime.printtime();
	cout << "event date is:";
	eventdate.printdate();
}
int main()
{
	
	
		
		Event object;
		object.setevent(6, 0, 12, 25, 2010, " christmas ");
		
		object.printevent();
		
		Event object2;
		object2.setevent(1, 15, 7, 4, 2010, " fourth of july ");
		
		object2.printevent();	
		system("pause");
		return 0;
}
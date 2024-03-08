#include "time1.h"
#include<iostream>
using namespace std;

time1::time1()
{
	hour = 0;
	min = 0;
}
time1::time1(int h, int m)
{
	hour = h;
	min = m;
}
void time1:: settime(int h, int m)
{
	hour = h;
	min = m;
}
time1 time1:: operator++()
{
	time1 obj;
	if (min < 59)
	{
		min++;
		obj.settime(hour, min);
	}
	else if (hour == 23 && min == 59)
	{
		min = 0;
		hour = 0;
	}
	else
	{
		min = 0;
		hour++;
		obj.settime(hour, min);
	}
	return obj;
}
time1 time1:: operator++(int)
{
	time1 obj;
	if (min < 59)
	{
		min++;
		obj.settime(hour, min);
	}
	else if (hour == 23 && min == 59)
	{
		min = 0;
		hour = 0;
	}
	else
	{
		min = 0;
		hour++;
		obj.settime(hour, min);
	}
	return obj;
}
time1 time1:: operator--()
{
	time1 obj;
	if (min <= 1)
	{
		if (min == 1)
		{
			min = 59;
			hour--;
			obj.settime(hour, min);
		}
		else if (min == 0)
		{
			min = 58;
			hour--;
			obj.settime(hour, min);
		}
	}
	else if (hour == 00 && min == 1)
	{
		min = 59;
		hour = 23;
		obj.settime(hour, min);
	}
	else if (hour == 00 && min == 0)
	{
		min = 58;
		hour = 23;
		obj.settime(hour, min);
	}
	else {
		min--;
		obj.settime(hour, min);
	}
	return obj;
}
time1 time1:: operator--(int)
{
	time1 obj;
	if (min <= 1)
	{
		if ((min == 1) && (hour != 0))
		{
			min = 59;
			hour--;
			obj.settime(hour, min);
		}
		else if ((min == 0) && (hour != 0))
		{
			min = 58;
			hour--;
			obj.settime(hour, min);
		}
		else if (hour == 00 && min == 1)
		{
			min = 59;
			hour = 23;
			obj.settime(hour, min);
		}
		else if (hour == 00 && min == 0)
		{
			min = 58;
			hour = 23;
			obj.settime(hour, min);
		}
	}
	else {
		min--;
		obj.settime(hour, min);
	}
	return obj;
}
time1 time1:: operator*(int n)
{
	time1 obj;
	int result;
	int result1;
	int result2;
	int result3;
	result = (hour * 3600) + (min * 60);
	result *= n;
	result1 = result / 60;
	result2 = result1 / 60;
	result3 = result2 * 60;
	result3 = result1 - result3;
	if (result2 > 23)
	{
		while (result2 > 23)
		{
			result2 -= 24;
		}

	}
	if (result3 > 59)
	{
		while (result3 > 59)
		{
			result3 -= 60;
		}

	}
	hour = result2;
	min = result3;
	obj.settime(result2, result3);
	return obj;
}
void time1:: print()
{
	cout << "TIME IS:" << hour << ":" << min << endl;
}


int main()
{
	time1 obj(23, 59);
	obj++;
	obj.print();
	++obj;
	obj.print();
	obj--;
	obj.print();
	--obj;
	obj.print();
	obj * 3;
	obj.print();
}

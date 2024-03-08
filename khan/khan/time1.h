#pragma once
class time1
{
	int hour;
	int min;
public:
	time1();
	time1(int h, int m);
	void settime(int h, int m);
	time1 operator++();
	time1 operator++(int);
	time1 operator--();
	time1 operator--(int);
	time1 operator*(int n);
	void print();
};


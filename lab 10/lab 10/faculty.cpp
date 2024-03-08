#include "faculty.h"
#include<iostream>
using namespace std;
faculty::faculty()
{
	course_count=0;
	three_digit = 0;
}
faculty::faculty(int a, string f, string l, int c, int t):person(a,f,l)
{
	course_count=c;
	three_digit = t;
}
int faculty::get_age()
{
	return age;
}
void faculty::set_course_count(int a)
{
	course_count = a;
}
void faculty::set_three_digit(int a)
{
	three_digit = a;
}
int faculty::get_course_count()
{
	return course_count;
}
int faculty::get_three_digit()
{
	return three_digit;
}
void faculty::print()
{
	cout << "name:" << get_first_name() << " " << get_last_name() << endl;
	cout << "age:" << get_age()<<endl;
	cout << "course count:" << course_count<<endl;
	cout << "extension:" << three_digit << endl;
}
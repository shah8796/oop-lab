#include "under_graduate.h"
#include<iostream>
using namespace std;
under_graduate::under_graduate()
{
	cgpa = 0.00;
	roll_no = "\0";
	fyp_name = "\0";
	supervisor = "\0";
}
under_graduate::under_graduate(int a,string f,string l,double c, string r, string t, string s):person (a,f,l) 
{
	cgpa = c;
	roll_no = r;
	fyp_name = t;
	supervisor = s;
}
int under_graduate::get_age()
{
	return age;
}
void under_graduate::set_cgpa(double a)
{
	cgpa = a;
}
void under_graduate::set_roll_no(string a)
{
	roll_no = a;
}
void under_graduate::set_fyp_name(string a)
{
	fyp_name = a;
}
void under_graduate::set_supervisor_name(string b)
{
	supervisor = b;
}
double under_graduate::get_cgpa()
{
	return cgpa;
}
string under_graduate::get_rollno()
{
	return roll_no;
}
string under_graduate::get_fyp_name()
{
	return fyp_name;
}
string under_graduate::get_supervisor()
{
	return supervisor;
}
void under_graduate::print()
{
	cout << "name:" << get_first_name() << " " << get_last_name() << endl;
	cout << "age:" << get_age() << endl;
	cout << "roll no:" << roll_no << endl;
	cout << "cgpa:" << cgpa << endl;
	cout << "fyp name:" << fyp_name << endl;
	cout << "supervisor:" << supervisor << endl;
}


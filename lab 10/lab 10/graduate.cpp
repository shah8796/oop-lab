#include "graduate.h"
#include"person.h"
#include<iostream>
using namespace std;
graduate::graduate()
{
	cgpa = 0.00;
	roll_no = "\0";
	thesis= "\0";
	supervisor = "\0";
}
graduate::graduate(int a,string f,string l,double c, string r, string t, string s):person(a,f,l)
{
	cgpa = c;
	roll_no = r;
	thesis= t;
	supervisor = s;
}
int graduate::get_age()
{
	return age;
}
void graduate::set_cgpa(double a)
{
	cgpa = a;
}
void graduate::set_roll_no(string a)
{
	roll_no = a;
}
void graduate::set_thesis_name(string a)
{
	thesis = a;
}
void graduate::set_supervisor_name(string b)
{
	supervisor = b;
}
double graduate::get_cgpa()
{
	return cgpa;
}
string graduate::get_rollno()
{
	return roll_no;
}
string graduate::get_thesis_name()
{
	return thesis;
}
string graduate::get_supervisor()
{
	return supervisor;
}
void graduate::print()
{
	cout << "name:" << get_first_name() << " " << get_last_name() << endl;
	cout << "age:" << get_age() << endl;
	cout << "roll no:" << roll_no << endl;
	cout << "cgpa:" << cgpa << endl;
	cout << "thesis name:" << thesis << endl;
	cout << "supervisor:" << supervisor << endl;
}
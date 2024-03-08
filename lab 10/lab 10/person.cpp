#include "person.h"
#include<iostream>
using namespace std;
person::person()
{
	age = 0;
	first_name = "\0";
	last_name = "\0";
}
person::person(int a,string f,string l)
{
	age = a;
	first_name =f;
	last_name = l;
}
void person::set_age(int a)
{
	age = a;
}
void person::set_first_name(string a)
{
	first_name = a;
}
void person::set_last_name(string a)
{
	last_name = a;
}
string person::get_first_name()
{
	return first_name;
}
string person::get_last_name()
{
	return last_name;
}

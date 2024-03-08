#pragma once
#include<iostream>
using namespace std;
class person
{
	string first_name;
	string last_name;
protected:
	int age;
public:
	person();
	person(int a,string f, string l);
	void set_age(int a);
	void set_first_name(string a);
	void set_last_name(string a);
	string get_first_name();
	string get_last_name();


};


#pragma once
#include"person.h"
#include<iostream>
using namespace std;
class graduate:public person
{
	double cgpa;
	string roll_no;
	string thesis;
	string supervisor;
public:
	graduate();
	graduate(int a,string f,string l,double c, string r, string t, string s);
	int get_age();
	void set_cgpa(double a);
	void set_roll_no(string a);
	void set_thesis_name(string a);
	void set_supervisor_name(string b);
	double get_cgpa();
	string get_rollno();
	string get_thesis_name();
	string get_supervisor();
	void print();
};


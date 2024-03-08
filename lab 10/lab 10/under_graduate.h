#pragma once
#include"person.h"
#include<iostream>
using namespace std;
class under_graduate:public person
{
	double cgpa;
	string roll_no;
	string fyp_name;
	string supervisor;
public:
	under_graduate();
	under_graduate(int a, string f, string l, double c, string r, string t, string s);
	int get_age();
	void set_cgpa(double a);
	void set_roll_no(string a);
	void set_fyp_name(string a);
	void set_supervisor_name(string b);
	double get_cgpa();
	string get_rollno();
	string get_fyp_name();
	string get_supervisor();
	void print();


};


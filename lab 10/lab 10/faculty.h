#pragma once
#include"person.h"
#include<iostream>
using namespace std;
class faculty :public person
{
	int course_count;
	int three_digit;
public:
	faculty();
	faculty(int a,string f,string l,int c,int t);
	int get_age();
	void set_course_count(int a);
	void set_three_digit(int a);
	int get_course_count();
	int get_three_digit();
	void print();

};


//#include<iostream>
//using namespace std;
//class Month {
//	string name;
//	int monthnumber;
//public:
//	Month()
//	{
//		monthnumber = 1;
//		name = "january";
//	}
//	Month(string nam)
//	{
//		name = nam;
//		if (name == "january")
//		{
//			monthnumber = 1;
//		}
//		if (name == "february")
//		{
//			monthnumber = 2;
//		}
//		if (name == "march")
//		{
//			monthnumber = 3;
//		}
//		if (name == "april")
//		{
//			monthnumber = 4;
//		}
//		if (name == "may")
//		{
//			monthnumber = 5;
//		}
//		if (name == "june")
//		{
//			monthnumber = 6;
//		}
//		if (name == "july")
//		{
//			monthnumber = 7;
//		}
//		if (name == "august")
//		{
//			monthnumber = 8;
//		}
//		if (name == "september")
//		{
//			monthnumber = 9;
//		}
//		if (name == "octuber")
//		{
//			monthnumber = 10;
//		}
//		if (name == "november")
//		{
//			monthnumber = 11;
//		}
//		if (name == "december")
//		{
//			monthnumber = 12;
//		}
//	}
//	Month(int nam)
//	{
//		monthnumber = nam;
//		
//		if (monthnumber == 1)
//		{
//			name = "january";
//			
//		}
//		if (monthnumber ==2 )
//		{
//			name = "february";
//			
//		}
//		if (monthnumber == 3)
//		{
//			name = "march";
//			
//		}
//		if (monthnumber ==4 )
//		{
//			name = "april";
//			
//		}
//		if (monthnumber ==5 )
//		{
//			name = "may";
//			
//		}
//		if (monthnumber == 6)
//		{
//			name = "june";
//			
//		}
//		if (monthnumber ==7 )
//		{
//			name = "july";
//			
//		}
//		if (monthnumber == 8)
//		{
//			name = "august";
//			
//		}
//		if (monthnumber == 9)
//		{
//			name = "september";
//			
//		}
//		if (monthnumber == 10)
//		{
//			name = "octuber";
//			
//		}
//		if (monthnumber == 11)
//		{
//			name = "november";
//			
//		}
//		if (monthnumber == 12)
//		{
//			name = "december";
//			
//		}
//		
//
//	}
//	void setname(string nam)
//	{
//		name = nam;
//	}
//	void setnumber(int nam)
//	{
//		monthnumber = nam;
//		/*if (nam = 13)
//		{
//			monthnumber = 1;
//		}
//		if (nam = 0)
//		{
//			monthnumber = 12;
//		}*/
//		if (monthnumber == 1)
//		{
//			name = "january";
//
//		}
//		if (monthnumber == 2)
//		{
//			name = "february";
//
//		}
//		if (monthnumber == 3)
//		{
//			name = "march";
//
//		}
//		if (monthnumber == 4)
//		{
//			name = "april";
//
//		}
//		if (monthnumber == 5)
//		{
//			name = "may";
//
//		}
//		if (monthnumber == 6)
//		{
//			name = "june";
//
//		}
//		if (monthnumber == 7)
//		{
//			name = "july";
//
//		}
//		if (monthnumber == 8)
//		{
//			name = "august";
//
//		}
//		if (monthnumber == 9)
//		{
//			name = "september";
//
//		}
//		if (monthnumber == 10)
//		{
//			name = "octuber";
//
//		}
//		if (monthnumber == 11)
//		{
//			name = "november";
//
//		}
//		if (monthnumber == 12)
//		{
//			name = "december";
//
//		}
//	}
//	string getname()
//	{
//		return name;
//	}
//	int getnumber()
//	{
//		return monthnumber;
//	}
//	void operator++(int)
//	{
//		
//		monthnumber++;
//		
//		setnumber(monthnumber);
//	}
//	void operator++()
//	{
//		++monthnumber;
//		
//		setnumber(monthnumber);
//	}
//	void operator--(int)
//	{
//		monthnumber--;
//		setnumber(monthnumber);
//	}
//	void operator--()
//	{
//		--monthnumber;
//		
//		setnumber(monthnumber);
//	}
//	friend ostream& operator<<(ostream& out, Month& obj);
//	friend istream& operator>>(istream& ou, Month& obj);
//
//};
//ostream& operator<<(ostream& out, Month& obj)
//{
//	out << "month name:" << obj.name << endl;
//	out << "month number:" << obj.monthnumber << endl;
//	return out;
//}
//istream& operator>>(istream& ou, Month& obj)
//{
//	cout << "name:" << endl;
//	ou  >> obj.name ;
//	cout << "number:" << endl;
//	ou  >> obj.monthnumber ;
//	return ou;
//}
//
//int main()
//{
//	Month obj();
//	Month obj1(4);
//	cout << "obj1 is:" << endl;
//	cout << obj1;
//	obj1++;
//	cout << "obj1++ is:" << endl;
//	cout << obj1;
//	++obj1;
//	cout << "++obj is:" << endl;
//	cout << obj1;
//	Month obj2("february");
//	cout << "obj2 is:" << endl;
//	cout << obj2;
//	obj2--;
//	cout << "obj2--:" << endl;
//	cout << obj2;
//	--obj2;
//	cout << "--obj2:" << endl;
//	cout << obj2;
//	Month obj3;
//	cout << "enter obj 3:" << endl;
//	cin >> obj3;
//	cout << obj3;
//	
//
//}
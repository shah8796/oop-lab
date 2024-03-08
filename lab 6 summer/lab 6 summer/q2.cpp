//#include<iostream>
//using namespace std;
//class complex {
//	int real;
//	int img;
//public:
//	complex()
//	{
//		real = 0;
//		img = 0;
//	}
//	complex(int a, int b)
//	{
//		real = a;
//		img = b;
//	}
//	complex(const complex& obj)
//	{
//		this->real = obj.real;
//		this->img = obj.img;
//	}
//	complex operator+(complex obj)
//	{
//		complex x;
//		x.real =this->real+ obj.real;
//		x.img =this->img+ obj.img;
//		return x;
//	}
//	complex operator-(complex obj)
//	{
//		complex x;
//		x.real = this->real - obj.real;
//		x.img = this->img - obj.img;
//		return x;
//	}
//	bool operator<(complex obj)
//	{
//		if (this->real < obj.real)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool operator>(complex obj)
//	{
//		if (this->real > obj.real)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool operator==(complex obj)
//	{
//		if (this->real == obj.real)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool operator!=(complex obj)
//	{
//		if (this->real != obj.real)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void operator++(int)
//	{
//		real++;
//		img++;
//	}
//	void operator++()
//	{
//		++real;
//		++img;
//	}
//	void operator--(int)
//	{
//		real--;
//		img--;
//	}
//	void operator--()
//	{
//		--real;
//		--img;
//	}
//	void input()
//	{
//		cout << "enter the real no:" << endl;
//		cin >> real;
//		cout << "enter the img no:" << endl;
//		cin >> img;
//	}
//	void display1()
//	{
//		cout << "complex no is:" << real << "+" << img << "i" << endl;
//	}
//};
//int main()
//{
//	complex c1;
//	complex c2(5, 6);
//	complex c3;
//	c3.input();
//	c1.display1();
//	c2.display1();
//	c3.display1();
//	if (c1 == c2)
//	{
//		cout << "c1 == c2" << endl;
//	}
//	else
//		cout << "c1!=c2" << endl;
//	if (c1 != c3)
//	{
//		cout << "c1!=c3" << endl;
//	}
//	else
//		cout << "c1==c3" << endl;
//	cout << "addition:" << endl;
//	complex c5 = c2 + c3;
//	c5.display1();
//	cout << "subtraction:" << endl;
//	complex c4 = c2 - c3;
//	c4.display1();
//	cout << "post increment:" << endl;
//	c4++;
//	c4.display1();
//	cout << "pre increment:" << endl;
//	++c4;
//	c4.display1();
//	if (c2< c3)
//	{
//		cout << "c2 < c3" << endl;
//	}
//	else
//		cout << "c3<c2" << endl;
//	if (c2 > c3)
//	{
//		cout << "c2>c3" << endl;
//	}
//	else
//		cout << "c2>c3" << endl;
//
//	
//	
//}
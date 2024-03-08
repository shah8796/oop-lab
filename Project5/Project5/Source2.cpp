//#include<iostream>
//using namespace std;
//class mypolynomial {
//	int a;
//	int b;
//public:
//	mypolynomial()
//	{
//		a = 0;
//		b = 0;
//	}
//	mypolynomial(int a, int b)
//	{
//		a = this->a;
//		b = this->b;
//	}
//	void input()
//	{
//		cout << "input a:" << endl;
//		cin >> a;
//		cout << "input b:" << endl;
//		cin >> b;
//	}
//	mypolynomial(const mypolynomial& obj)
//	{
//		a = obj.a;
//		b = obj.b;
//
//	}
//	int operator+(const mypolynomial& obj)
//	{
//		int c,d;
//		c = a + obj.a;
//		d = b + obj.b;
//		return c;
//		return d;
//	}
//
//	
//};
//int main()
//{
//	mypolynomial a;
//	a.input();
//	mypolynomial b;
//	b.input();
//	int c;
//	c = a + b;
//	cout << c;
//
//}
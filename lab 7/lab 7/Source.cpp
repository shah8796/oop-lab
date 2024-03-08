//#include<iostream>
//using namespace std;
//class Biggerint {
//	int* big_int;
//	int int_length;
//public:
//	Biggerint()
//	{
//		big_int = nullptr;
//		int_length = 0;
//	}
//	Biggerint(const int* obj, int size)
//	{
//		big_int = new int[size];
//		int_length = size;
//		for (int i = 0; i < size; i++)
//		{
//			big_int[i] = obj[i];
//		}
//	}
//	Biggerint(const Biggerint& obj)
//	{
//		cout << "copy constructor called" << endl;
//		int_length = obj.int_length;
//		big_int = new int[int_length];
//		for (int i = 0; i < int_length; i++)
//		{
//			this->big_int[i] = obj.big_int[i];
//		}
//	}
//	void assign(const int* big_int, int size)
//	{
//		this->big_int = new int[size];
//		int_length = size;
//		for (int i = 0; i < size; i++)
//		{
//			this->big_int[i] = big_int[i];
//		}
//	}
//	void assign(const Biggerint& obj)
//	{
//		int_length = obj.int_length;
//		big_int = new int[int_length];
//		for (int i = 0; i < int_length; i++)
//		{
//			this->big_int[i] = obj.big_int[i];
//		}
//	}
//	void append(const Biggerint& obj)
//	{
//		int_length = obj.int_length;
//		big_int = new int[int_length];
//		for (int i = 0; i < int_length; i++)
//		{
//			this->big_int[i] = obj.big_int[i];
//		}
//	}
//	void append(const int* big_int, int size)
//	{
//		this->big_int = new int[size];
//		int_length = size;
//		for (int i = 0; i < size; i++)
//		{
//			this->big_int[i] = big_int[i];
//		}
//	}
//	int compareto(const Biggerint& obj)
//	{
//		if (big_int == obj.big_int)
//		{
//			return 0;
//		}
//		if (big_int < obj.big_int)
//		{
//			return 1;
//		}
//		if (big_int > obj.big_int)
//		{
//			return 2;
//		}
//	}
//	void display()
//	{
//		if (big_int == 0)
//		{
//			cout << "no values assigned" << endl;
//		}
//		for (int i = 0; i < int_length; i++)
//		{
//			cout << big_int[i] << endl;
//		}
//		
//	}
//	~Biggerint()
//	{
//		delete[] big_int;
//	}
//	
//
//};
//int main()
//{
//	int size = 5;
//	int* obj = new int[size]{1,2,3,4,5};
//
//	Biggerint s1();
//	Biggerint s2(obj, size);
//	Biggerint s3(s2);
//	s2.assign(obj, size);
//	s3.assign(s2);
//	s2.append(obj, size);
//	s3.append(s2);
//	s3.compareto(s2);
//	s2.display();
//}
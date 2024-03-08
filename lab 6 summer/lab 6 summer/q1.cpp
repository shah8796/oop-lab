//#include<iostream>
//using namespace std;
//class MyBigInt {
//	
//	int int_length_=0;
//	int* big_int_ = new int[5];
//public:
//	MyBigInt()
//	{
//		/*big_int_ = nullptr;
//		int_length_ = 0;*/
//	}
//	MyBigInt(int int_length, int* big_int)
//	{
//		int_length_ = int_length;
//		for (int i = 0; i < int_length_; i++)
//		{
//			big_int_[i] = big_int[i];
//		}
//		//big_int_ = big_int;
//	}
//	MyBigInt(const MyBigInt& obj)
//	{
//		cout << "copy constructor called" << endl;
//		int_length_ = obj.int_length_;
//		for (int i = 0; i < int_length_; i++)
//		{
//		     this->big_int_[i] = obj.big_int_[i];
//		}
//	}
//	void assign(const MyBigInt& obj)
//	{
//		int_length_ = obj.int_length_;
//		for (int i = 0; i <obj. int_length_; i++)
//		{
//			big_int_[i] = obj.big_int_[i];
//		}
//	}
//	int compareTo(const MyBigInt& obj)
//	{
//		bool a = true;
//		if (int_length_ == obj.int_length_)
//		{
//			for (int i = 0; i < int_length_; i++)
//			{
//				if (big_int_[i] == obj.big_int_[i])
//				{
//					a = true;
//				}
//				else
//					a = false;
//			}
//		}
//		else
//			a = false;
//		cout << "comparison test is:" << endl;
//		cout << a<<endl;
//		return a;
//	}
//	void display()
//	{
//		cout << "array is:" << endl;
//		for (int i = 0; i < int_length_; i++)
//		{
//			cout << big_int_[i] << endl;
//		}
//	}
//	~MyBigInt()
//	{
//		delete[] big_int_;
//	}
//	
//};
//int main()
//{
//	int a;
//	cout << "enter the length:" << endl;
//	cin >> a;
//	int* b = new int[a];
//	cout << "enter the contents of the array:" << endl;
//	for (int i = 0; i < a; i++)
//	{
//		cin >> b[i];
//	}
//	MyBigInt obj;
//	MyBigInt obj1(a, b);
//	MyBigInt obj2(obj1);
//	obj.assign(obj1);
//	obj.compareTo(obj1);
//	obj.display();
//	obj2.display();
//}
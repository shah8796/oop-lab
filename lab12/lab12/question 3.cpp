//#include<iostream>
//using namespace std;
//template <class T>
//class container
//{
//private:
//	T data;
//public:
//	container()
//	{
//		data = 0;
//	}
//	container(T i)
//	{
//		data = i;
//
//	}
//	T increase()
//	{
//		data++;
//		return data;
//	}
//};
//template<>
//class container<char>
//{
//private:
//	char data;
//public:
//	container()
//	{
//		data = NULL;
//	}
//	container(char ch)
//	{
//		data = ch;
//
//	}
//	char uppercase()
//	{
//		data -= 32;
//		return data;
//	}
//
//};
//int main()
//{
//	container< int> myint(7);
//	container< char> mychar('j');
//	cout<< myint.increase()<< endl;
//	cout<< mychar.uppercase()<< endl;
//	return 0;
//}
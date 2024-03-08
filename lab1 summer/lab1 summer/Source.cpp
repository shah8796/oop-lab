//#include <iostream>
//using namespace std;
////int main()
////{
////	float x, y,sum;
////	cout << "type first num" << endl;
////	cin >> x;
////	cout << "type second num" << endl;
////	cin >> y;
////	float* p = &x;
////	float* p1 = &y;
////	sum = *p + *p1;
////	cout << "the sum is" << sum << endl;
////}
////int main()
////{
////	int a,s,c,h;
////	cout << "type number" << endl;
////	cin >> a;
////	int* ptr = &a;
////	s = *ptr * *ptr;
////	c = *ptr * *ptr * *ptr;
////	h = *ptr / 2;
////	cout << "square is" << s << endl <<"cube is"<< c << endl <<"half is" << h << endl;
////}
////int* fun(int a)
////{
////	int* ptr = new int[a];
////	return ptr;
////}
////int main()
////{
////	int x;
////	cout << "type number of elements" << endl;
////	cin >> x;
////	int* p = fun(x);
////
////}
////int* sort(int* p, int n)
////{
////	int temp;
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			if (p[j] > p[i])
////			{
////				temp = p[i];
////				p[i] = p[j];
////				p[j] = temp;
////
////
////			}
////		}
////	}
////	 
////	return p;
////}
////void avg(int* p, int x)
////{
////	float s=0;
////	float a;
////	for (int i = 0; i < x; i++)
////	{
////		s = s + p[i];
////
////	}
////	 
////	a = s / x;
////	cout << a << endl;
////}
////int main()
////{
////	int size;
////	cout << "enter size" << endl;
////	cin >> size;
////	int* p = new int[size];
////	cout << "type enteries" << endl;
////	for (int i = 0; i < size; i++)
////	{
////		cin >> p[i];
////
////	}
////	p = sort(p, size);
////	cout << "sorted array is" << endl;
////	for (int i = 0; i < size; i++)
////	{
////		cout << p[i] << endl;
////	}
////	cout << endl;
////	cout << "the average is " << endl;
////	avg(p, size);
////
////}
//int main()
//{
//	int s, m = 0, c = 0;
//	cout << "type size of array" << endl;
//	cin >> s;
//	int* p = new int[s];
//	cout << "type inputs" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cin >> p[i];
//
//	}
//	for (int i = 0; i < s; i++)
//	{
//		if (p[i] == p[i + 1])
//			c++;
//		if (c >= 1)
//			m = p[i];
//		else
//			m = -1;
//
//	}
//	cout << "mode is" << endl;
//	cout << m;
//
//
//}
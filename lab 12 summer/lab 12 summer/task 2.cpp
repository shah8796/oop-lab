//#include<iostream>
//using namespace std;
//template<class t>
//class calculator {
//	t Num1;
//	t Num2;
//	t result;
//public:
//	calculator()
//	{
//		Num1 = 0;
//		Num2 = 0;
//		result = 0;
//	}
//	calculator(t num1, t num2)
//	{
//		Num1 = num1;
//		Num2 = num2;
//	}
//	void sum(t num1,t num2)
//	{
//		result = num1 + num2;
//		cout << "result of sum with 2 variables:" << result << endl;
//	}
//	void sum(t num1,t num2,t num3)
//	{
//		result = num1 + num2 + num3;
//		cout << "result of sum with 3 variables:" << result << endl;
//	}
//	void subtract(t num1, t num2)
//	{
//		result = num1 - num2;
//		cout << "result of subtraction with 2 variables:" << result << endl;
//	}
//	void subtract(t num1, t num2,t num3)
//	{
//		result = (num1 - num2) - num3;
//		cout << "result of subtraction with 3 variables:" << result << endl;
//	}
//	void multiplication(t num1, t num2)
//	{
//		result = num1*num2;
//		cout << "result of multiplication with 2 variables:" << result << endl;
//	}
//	void multiplication(t num1, t num2,t num3)
//	{
//		result = (num1*num2)*num3;
//		cout << "result of multiplication with 3 variables:" << result << endl;
//	}
//	void division(t num1, t num2)
//	{
//		result = num1/num2;
//		cout << "result of division with 2 variables:" << result << endl;
//	}
//	void division(t num1, t num2,t num3)
//	{
//		result = (num1/num2)/num3;
//		cout << "result of division with 3 variables:" << result << endl;
//	}
//	void Modulus(t num1, t num2)
//	{
//		result = num1 % num2;
//		cout << "result of modulus of two  numbers:" << result << endl;
//	}
//	void Max(t num1, t num2)
//	{
//		if (num1 >= num2)
//		{
//			result = num1;
//		}
//		else
//			result = num2;
//		cout << "result of maximum in two numbers:" << result << endl;
//	}
//	void Min(t num1, t num2)
//	{
//		if (num1 <= num2)
//		{
//			result = num1;
//		}
//		else
//			result = num2;
//		cout << "result of minimum in two numbers:" << result << endl;
//	}
//};
//int main()
//{
//	calculator<int> b(2, 3);
//	calculator<double> c;
//	b.sum(2, 3);
//	b.sum(2, 3, 4);
//	b.subtract(4, 3);
//	b.subtract(4, 3,2);
//	c.division(1.0, 2.0);
//	c.division(2.0, 2.0,3.0);
//	b.multiplication(2, 3);
//	b.multiplication(2, 3,4);
//	b.Modulus(4, 3);
//	b.Max(2, 3);
//	b.Min(2, 3);
//}
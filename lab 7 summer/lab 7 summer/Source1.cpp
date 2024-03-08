//#include<iostream>
//using namespace std;
//class polynomial {
//	int totalTerms = 0;;
//	int* coeff=new int[10];
//	int* exp=new int[10];
//public:
//	polynomial()
//	{
//	}
//	/*polynomial(int ter, int* coeffi, int* expo)
//	{
//		totalTerms = ter;
//		for (int i = 0; i < ter; i++)
//		{
//			coeff[i] = coeffi[i];
//			exp[i] = expo[i];
//		}
//	}*/
//	void input()
//	{
//		cout << "enter the total terms:" << endl;
//		cin >> totalTerms;
//		cout << "enter the coefficients:" << endl;
//		for (int i = 0; i < totalTerms; i++)
//		{
//			cin >> coeff[i];
//		}
//		cout << "enter the exponents:" << endl;
//		for (int i = 0; i < totalTerms; i++)
//		{
//			cin >> exp[i];
//		}
//	}
//	polynomial operator+(polynomial obj)
//	{
//		polynomial x;
//		for (int i = 0; i < totalTerms; i++)
//		{
//			x.coeff[i] =this->coeff[i]+ obj.coeff[i];
//			x.exp[i] =this->exp[i]+ obj.exp[i];
//		}
//		return x;
//	}
//	bool operator!=(polynomial obj)
//	{
//		int count = 0;
//		for (int i = 0; i < totalTerms; i++)
//		{
//			if ((coeff[i] != obj.coeff[i]) && (exp[i] != obj.exp[i]))
//			{
//				count++;
//			}
//		}
//		if (count != totalTerms)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool operator==(polynomial obj)
//	{
//		int count = 0;
//		for (int i = 0; i < totalTerms; i++)
//		{
//			if ((coeff[i] == obj.coeff[i]) && (exp[i] == obj.exp[i]))
//			{
//				count++;
//			}
//		}
//		if (count == totalTerms)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void operator++(int)
//	{
//		for (int i = 0; i < totalTerms; i++)
//		{
//			coeff[i]++;
//		}
//	}
//	void operator++()
//	{
//		for (int i = 0; i < totalTerms; i++)
//		{
//			++coeff[i];
//		}
//	}
//	void operator=( const polynomial& obj)
//	{
//		for (int i = 0; i < totalTerms; i++)
//		{
//			this->coeff[i] = obj.coeff[i];
//			this->exp[i] = obj.exp[i];
//
//		}
//		
//	}
//	friend ostream& operator<<(ostream& out, polynomial & obj);
//};
//ostream& operator<<(ostream& out, polynomial & obj)
//{
//	for (int i = 0; i < obj.totalTerms; i++)
//	{
//		out << obj.coeff[i] << "x^" << obj.exp[i] << "+";
//	}
//	return out;
//	
//}
//int main()
//{
//	/*int tot;
//	int* coef = new int[10];
//	int* ex = new int[10];
//	cout << "enter the total terms:" << endl;
//	cin >> tot;
//	cout << "enter the coefficients:" << endl;
//	for (int i = 0; i < tot; i++)
//	{
//		cin>>coef[i];
//	}
//	cout << "enter the exponents:" << endl;
//	for (int i = 0; i < tot; i++)
//	{
//		cin >> ex[i];
//	}*/
//	polynomial obj;
//	obj.input();
//	polynomial obj1;
//	obj1.input();
//	
//	cout << "1st polynomial:" << endl;
//	cout << obj << endl;
//	cout << "2nd object:" << endl;
//	cout << obj1 << endl;
//	if (obj != obj1)
//	{
//		cout << "obj!=obj1" << endl;
//	}
//	else
//		cout << "obj==obj1" << endl;
//	if (obj == obj1)
//	{
//		cout << "obj==obj1" << endl;
//	}
//	else
//		cout << "obj!=obj1" << endl;
//	cout << "++ obj:" << endl;
//	++obj;
//	cout << obj << endl;
//	cout << "obj++:" << endl;
//	obj++;
//	cout << obj << endl;
//	polynomial obj3 = obj+obj1;
//	cout << "3rd object:" << endl;
//	cout << obj3 << endl;
//	polynomial obj4 = obj;
//	cout << "obj4:" << obj4 << endl;
//}
//#include<iostream>
//using namespace std;
//class mypolynomial {
//private:
//	float* coeffArray;
//	float* degreeArray;
//	int terms;
//	
//public:
//	mypolynomial()
//	{
//		coeffArray = nullptr;
//		degreeArray = nullptr;
//		terms = 0;
//	}
//	mypolynomial(int arr[],int arr1[], int size)
//	{
//		terms = size;
//		coeffArray = new float[terms];
//		degreeArray = new float[terms];
//		for (int i = 0; i < terms; i++)
//		{
//			coeffArray[i] = arr[i];
//			degreeArray[i] = arr1[i];
//		}
//		/*for (int i = 0; i < terms; i++)
//		{
//			int highest = 0;
//			for (int i = 0; i < terms; i++)
//			{
//				if (degreeArray[i] >= highest)
//				{
//					highest = degreeArray[i];
//				}
//			}
//
//		}*/
//
//	}
//	mypolynomial(const mypolynomial& s1)
//	{
//		terms = s1.terms;
//		coeffArray = new float[terms];
//		degreeArray = new float[terms];
//		for (int i = 0; i < terms; i++)
//		{
//			coeffArray[i] = s1.coeffArray[i];
//			degreeArray[i] = s1.degreeArray[i];
//		}
//
//	}
//	void input()
//	{
//		cout << "input terms:" << endl;
//		cin >> terms;
//		coeffArray = new float[terms];
//		degreeArray = new float[terms];
//		cout << "input polynomial a:" << endl;
//		for (int i = 0; i < terms; i++)
//		{
//			cin >> coeffArray[i];
//		}
//		cout << "input polynomial b:" << endl;
//		for (int i = 0; i < terms; i++)
//		{
//			cin >> degreeArray[i];
//		}
//	}
//	void print()
//	{
//		cout << " polynomial a:" << endl;
//		for (int i = 0; i < terms; i++)
//		{
//			cout << coeffArray[i];
//		}
//		cout << " polynomial b:" << endl;
//		for (int i = 0; i < terms; i++)
//		{
//			cout << degreeArray[i];
//		}
//	}
//	mypolynomial operator+(const mypolynomial& s1)
//	{
//		mypolynomial* add = new mypolynomial[terms];
//
//		for (int i = 0; i < terms; i++)
//		{
//			add[i]=coeffArray[i] + s1.coeffArray[i];
//			
//		}
//		return *add;
//	}
//	void operator-(const mypolynomial& s1)
//	{
//		float* add = new float[terms];
//
//		for (int i = 0; i < terms; i++)
//		{
//			add[i] = coeffArray[i] - s1.coeffArray[i];
//
//		}
//	}
//	//friend mypolynomial operator=(const mypolynomial& s1);
//	friend  ostream& operator<<(ostream, const mypolynomial& s1);
//	
//
//};
// ostream& operator<<(ostream rhs, const mypolynomial& s1)
//{
//	for (int i = 0; i < s1.terms; i++)
//	{
//		rhs << s1.coeffArray[i] << "x^" << s1.degreeArray[i] << "+";
//	}
//	return rhs;
//}
//int main()
//{
//	mypolynomial a;
//	a.input();
//	mypolynomial b;
//	b.input();
//	mypolynomial c;
//	c = a
//}

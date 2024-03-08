//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//class myPolynomial
//{
//private:
//	float* coeffArray1;
//	float* degreeArray1;
//	int terms;
//public:
//	myPolynomial()
//	{
//		coeffArray1 = nullptr;
//		degreeArray1 = nullptr;
//		terms = 0;
//	}
//	myPolynomial(string b)
//	{
//		int co = 0;
//		int check = 0;
//		int x = 0, c1 = 0, d = 0;
//		while (b[x] != '\0') { c1++; x++; }
//		for (int i = 0; i < c1; i++) { if (b[i] == '+' || b[i] == '-') { d++; } }
//		if (d == 0)
//		{
//			d++;
//			coeffArray1 = new float[d];
//		}
//		else
//		{
//			d++;
//			if (b[0] == '-') { d--; }
//			coeffArray1 = new float[d];
//		}
//		terms = d;
//		int v = 0;
//		int che = 0;
//		for (int i = 0; i < c1; i++) { if (b[i] == 'x') { che = 1; } }
//		if (che != 1)
//		{
//			string t;
//			for (int i = 0; i < c1; i++) { t = t + b[i]; }
//			int ts = stoi(t);
//			coeffArray1[0] = +ts;
//		}
//		else if (b[0] == 'x' && d == 1 && che == 1)
//		{
//			coeffArray1[0] = 1;
//		}
//		else if (b[0] == 'x' && c1 == 1 && che == 1)
//		{
//			coeffArray1[0] = 1;
//		}
//		else if (b[0] != 'x' && c1 == 1)
//		{
//			coeffArray1[0] = b[0] - 48;
//		}
//		else
//		{
//			for (int i = 0; i < c1; i++)
//			{
//				if (b[i] == '-' && i == 0)
//				{
//					coeffArray1[v] = -1;
//					check = 1;
//				}
//				else if (i == 1 && b[i] == 'x' && check == 1)
//				{
//					coeffArray1[v] = -1;
//					v++;
//				}
//				if (b[i] == 'x')
//				{
//					string temp;
//					int j;
//					for (j = i - 1; j >= 0 && (b[j] != '+' && b[j] != '-'); j--) { co++; temp = b[j] + temp; }
//					if (j != -1)
//					{
//						if (b[j] == '+' && co == 0)
//						{
//							coeffArray1[v] = 1;
//							v++;
//							co = 0;
//						}
//						else if (b[j] == '+' && co != 0)
//						{
//
//							int tt = stoi(temp);
//							coeffArray1[v] = +tt;
//							v++;
//							co = 0;
//						}
//						else if (b[j] == '-' && co == 0)
//						{
//
//							coeffArray1[v] = -1;
//							v++;
//							co = 0;
//						}
//						else if (b[j] == '-' && co != 0)
//						{
//							int tt = stoi(temp);
//							coeffArray1[v] = -tt;
//							v++;
//							co = 0;
//						}
//					}
//
//					if (j == -1 && co != 0)
//					{
//						int tt = stoi(temp);
//						coeffArray1[v] = +tt;
//						v++;
//						co = 0;
//					}
//					else if (j == -1 && co == 0)
//					{
//						coeffArray1[v] = +1;
//						v++;
//						co = 0;
//					}
//
//				}
//				if ((i == c1 - 1) && (v == d - 1))
//				{
//					if (b[i] != 'x')
//					{
//						string t1;
//						int j;
//						for (j = i; j >= 0 && (b[j] != '+' && b[j] != '-'); j--) { t1 = b[j] + t1; }
//						if (b[j] == '+')
//						{
//							int t11 = stoi(t1);
//							coeffArray1[v] = +t11;
//						}
//						if (b[j] == '-')
//						{
//							int t11 = stoi(t1);
//							coeffArray1[v] = -t11;
//						}
//					}
//				}
//
//
//			}
//		}
//		int degd = d;
//		int ok = 0;
//		degreeArray1 = new float[degd];
//		v = 0;
//		int oo = 0;
//		for (int i = 0; i < c1; i++) { if (b[i] == 'x') { oo = 1; } }
//		if (b[1] == 'x' && c1 == 2)
//		{
//			degreeArray1[v] = 1;
//			v++;
//		}
//		else if (b[0] == 'x' && c1 == 1)
//		{
//			degreeArray1[v] = 1; v++;
//		}
//		else if (b[0] != 'x' && oo != 1)
//		{
//			degreeArray1[v] = 0; v++;
//		}
//		else
//		{
//			for (int i = 0; i < c1; i++)
//			{
//				if (b[i] == 'x' && i != c1 - 1)
//				{
//					string f;
//					int j = i + 1;
//					if (b[j] != '+' && b[j] != '-')
//					{
//						for (j = i + 1; j < c1 && (b[j] != '+' && b[j] != '-'); j++) { f = f + b[j]; }
//						float fc;
//						fc = stoi(f);
//						degreeArray1[v] = fc;
//						v++;
//					}
//					else { degreeArray1[v] = 1; v++; }
//				}
//				if ((i == c1 - 1) && (v == d - 1))
//				{
//					if (b[i] != 'x') { degreeArray1[v] = 0; }
//					if (b[i] == 'x') { degreeArray1[v] = 1; }
//				}
//				else if ((i == c1 - 1) && (v == 0))
//				{
//					if (b[i] == 'x') { degreeArray1[v] = 1; v++; }
//				}
//
//			}
//		}
//
//		sortArray(degreeArray1, d);
//	}
//	void sortArray(float* degreeArray1, int d)
//	{
//		for (int i = 0; i < d; i++)
//		{
//			for (int j = i + 1; j < d; j++)
//			{
//				if (degreeArray1[i] == degreeArray1[j])
//				{
//					for (int k = j; k < d; k++)
//					{
//						degreeArray1[k] = degreeArray1[k + 1];
//					}
//					coeffArray1[i] = coeffArray1[i] + coeffArray1[j];
//					for (int l = j; l < d; l++)
//					{
//						coeffArray1[l] = coeffArray1[l + 1];
//					}
//					d--;
//
//				}
//			}
//		}
//		sortby(degreeArray1, d);
//		cout << endl;
//		cout << endl;
//		cout << "degree array >>: " << endl;
//		for (int i = 0; i < d; i++)
//		{
//			cout << degreeArray1[i] << " ";
//		}
//		cout << endl;
//		cout << "co-effients array >>: " << endl;
//		for (int i = 0; i < d; i++)
//		{
//			cout << coeffArray1[i] << " ";
//		}
//		cout << endl;
//
//	}
//	void sortby(float* degreeArray1, int d)
//	{
//		for (int i = 0; i < d; i++)
//		{
//			for (int j = i + 1; j < d; j++)
//			{
//				if (degreeArray1[i] < degreeArray1[j]) { float t = degreeArray1[i]; degreeArray1[i] = degreeArray1[j]; degreeArray1[j] = t; float ctemp = coeffArray1[i]; coeffArray1[i] = coeffArray1[j]; coeffArray1[j] = ctemp; }
//			}
//		}
//		terms = d;
//	}
//	string input1()
//	{
//		string filea, A, X;
//		ofstream fout;
//		ifstream fin;
//		cout << "enter a file name for polynomial a (file-name.txt): ";
//		cin >> filea;
//		cout << "enter polynomial a of format (2x3+4x2+3x+2): " << endl;
//		cin >> A;
//		fout.open(filea);
//		fout << A;
//		fout.close();
//		fin.open(filea);
//		while (!fin.eof()) { fin >> X; }
//		fin.close();
//		return X;
//	}
//	string input2()
//	{
//		ifstream fin;
//		ofstream fout;
//		string fileb, B, Y;
//		cout << "enter a file name for polynomial b (file-name.txt) >>: ";
//		cin >> fileb;
//		cout << "enter polynomial b of format (2x3+4x2+3x+2) " << endl;
//		cout << " >>: ";
//		cin >> B;
//		fout.open(fileb);
//		fout << B;
//		fout.close();
//		fin.open(fileb);
//		while (!fin.eof()) { fin >> Y; }
//		return Y;
//	}
//	myPolynomial operator +(myPolynomial objA)
//	{
//		myPolynomial temp;
//		temp.terms = terms + objA.terms;
//		int k = 0;
//		temp.coeffArray1 = new float[temp.terms];
//		for (int i = 0; i < terms; i++) { temp.coeffArray1[k] = coeffArray1[i]; k++; }
//		for (int j = 0; j < objA.terms; j++) { temp.coeffArray1[k] = objA.coeffArray1[j]; k++; }
//		int u = 0;
//		temp.degreeArray1 = new float[temp.terms];
//		for (int i = 0; i < terms; i++) { temp.degreeArray1[u] = degreeArray1[i]; u++; }
//		for (int j = 0; j < objA.terms; j++) { temp.degreeArray1[u] = objA.degreeArray1[j]; u++; }
//		cout << endl;
//		for (int i = 0; i < temp.terms; i++)
//		{
//			for (int j = i + 1; j < temp.terms; j++)
//			{
//				if (temp.degreeArray1[i] == temp.degreeArray1[j])
//				{
//					for (int k = j; k < temp.terms; k++)
//					{
//						temp.degreeArray1[k] = temp.degreeArray1[k + 1];
//					}
//					temp.coeffArray1[i] = temp.coeffArray1[i] + temp.coeffArray1[j];
//					for (int l = j; l < temp.terms; l++)
//					{
//						temp.coeffArray1[l] = temp.coeffArray1[l + 1];
//					}
//					temp.terms--;
//
//				}
//			}
//		}
//		for (int i = 0; i < temp.terms; i++)
//		{
//			for (int j = i + 1; j < temp.terms; j++)
//			{
//				if (temp.degreeArray1[i] < temp.degreeArray1[j]) { float t = temp.degreeArray1[i]; temp.degreeArray1[i] = temp.degreeArray1[j]; temp.degreeArray1[j] = t; float ctemp = temp.coeffArray1[i]; temp.coeffArray1[i] = temp.coeffArray1[j]; temp.coeffArray1[j] = ctemp; }
//			}
//		}
//
//		return temp;
//
//	}
//	myPolynomial operator -(myPolynomial objA)
//	{
//		myPolynomial temp;
//		temp.terms = terms + objA.terms;
//		for (int i = 0; i < objA.terms; i++)
//		{
//			objA.coeffArray1[i] = -1 * objA.coeffArray1[i];
//		}
//		cout << endl;
//		int k = 0;
//		temp.coeffArray1 = new float[temp.terms];
//		for (int i = 0; i < terms; i++) { temp.coeffArray1[k] = coeffArray1[i]; k++; }
//		for (int j = 0; j < objA.terms; j++) { temp.coeffArray1[k] = objA.coeffArray1[j]; k++; }
//		int u = 0;
//		cout << endl;
//		temp.degreeArray1 = new float[temp.terms];
//		for (int i = 0; i < terms; i++) { temp.degreeArray1[u] = degreeArray1[i]; u++; }
//		for (int j = 0; j < objA.terms; j++) { temp.degreeArray1[u] = objA.degreeArray1[j]; u++; }
//		cout << endl;
//		for (int i = 0; i < temp.terms; i++)
//		{
//			for (int j = i + 1; j < temp.terms; j++)
//			{
//				if (temp.degreeArray1[i] == temp.degreeArray1[j])
//				{
//					for (int k = j; k < temp.terms; k++)
//					{
//						temp.degreeArray1[k] = temp.degreeArray1[k + 1];
//					}
//					temp.coeffArray1[i] = temp.coeffArray1[i] + temp.coeffArray1[j];
//					for (int l = j; l < temp.terms; l++)
//					{
//						temp.coeffArray1[l] = temp.coeffArray1[l + 1];
//					}
//					temp.terms--;
//
//				}
//			}
//		}
//		for (int i = 0; i < temp.terms; i++)
//		{
//			for (int j = i + 1; j < temp.terms; j++)
//			{
//				if (temp.degreeArray1[i] < temp.degreeArray1[j]) { float t = temp.degreeArray1[i]; temp.degreeArray1[i] = temp.degreeArray1[j]; temp.degreeArray1[j] = t; float ctemp = temp.coeffArray1[i]; temp.coeffArray1[i] = temp.coeffArray1[j]; temp.coeffArray1[j] = ctemp; }
//			}
//		}
//		cout << endl;
//		for (int i = 0; i < objA.terms; i++)
//		{
//			objA.coeffArray1[i] = -1 * objA.coeffArray1[i];
//		}
//		return temp;
//
//	}
//	myPolynomial operator *(myPolynomial objA)
//	{
//		myPolynomial temp;
//		cout << terms << objA.terms << endl;
//		temp.terms = terms * objA.terms;
//		temp.coeffArray1 = new float[temp.terms];
//		temp.degreeArray1 = new float[temp.terms];
//		int k = 0;
//		for (int i = 0; i < terms; i++)
//		{
//			for (int j = 0; j < objA.terms; j++)
//			{
//				temp.coeffArray1[k] = coeffArray1[i] * objA.coeffArray1[j];
//				temp.degreeArray1[k] = degreeArray1[i] + objA.degreeArray1[j];
//				k++;
//			}
//		}
//		for (int i = 0; i < temp.terms; i++)
//		{
//			for (int j = i + 1; j < temp.terms; j++)
//			{
//				if (temp.degreeArray1[i] == temp.degreeArray1[j])
//				{
//					for (int k = j; k < temp.terms; k++)
//					{
//						temp.degreeArray1[k] = temp.degreeArray1[k + 1];
//					}
//					temp.coeffArray1[i] = temp.coeffArray1[i] + temp.coeffArray1[j];
//					for (int l = j; l < temp.terms; l++)
//					{
//						temp.coeffArray1[l] = temp.coeffArray1[l + 1];
//					}
//					temp.terms--;
//
//				}
//			}
//		}
//		for (int i = 0; i < temp.terms; i++)
//		{
//			for (int j = i + 1; j < temp.terms; j++)
//			{
//				if (temp.degreeArray1[i] < temp.degreeArray1[j]) { float t = temp.degreeArray1[i]; temp.degreeArray1[i] = temp.degreeArray1[j]; temp.degreeArray1[j] = t; float ctemp = temp.coeffArray1[i]; temp.coeffArray1[i] = temp.coeffArray1[j]; temp.coeffArray1[j] = ctemp; }
//			}
//		}
//		cout << endl;
//		return temp;
//
//	}
//	~myPolynomial()
//	{
//
//	}
//	myPolynomial(const myPolynomial& Obj)
//	{
//		terms = Obj.terms;
//		coeffArray1 = new float[terms];
//		for (int i = 0; i < terms; i++)
//		{
//			coeffArray1[i] = Obj.coeffArray1[i];
//		}
//		degreeArray1 = new float[terms];
//		for (int i = 0; i < terms; i++)
//		{
//			degreeArray1[i] = Obj.degreeArray1[i];
//		}
//	}
//	friend bool operator == (const myPolynomial& b1, const myPolynomial& b2);
//	friend ostream& operator << (ostream& out, myPolynomial obj);
//
//};
//bool operator == (const myPolynomial& b1, const myPolynomial& b2)
//{
//	int c = 0;
//	cout << endl;
//	for (int i = 0; i < b1.terms; i++)
//	{
//		for (int j = 0; j < b2.terms; j++)
//		{
//			if (b1.coeffArray1[i] == b2.coeffArray1[j] && b1.degreeArray1[i] == b2.degreeArray1[j])
//			{
//				c++;
//			}
//		}
//	}
//	if (c == b1.terms && c == b2.terms)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//
//}
//ostream& operator << (ostream& out, myPolynomial obj)
//{
//	for (int k = 0; k < obj.terms; k++)
//	{
//		if (obj.coeffArray1[k] == 0)
//		{
//			cout << "";
//		}
//		else
//		{
//			if (obj.coeffArray1[k] > 0)
//			{
//				if (obj.degreeArray1[k] != 0 && obj.degreeArray1[k] != 1)
//				{
//					out << "+" << obj.coeffArray1[k] << "x" << obj.degreeArray1[k] << " ";
//				}
//				if (obj.degreeArray1[k] == 0)
//				{
//					out << "+" << obj.coeffArray1[k] << " ";
//				}
//				if (obj.degreeArray1[k] == 1)
//				{
//					out << "+" << obj.coeffArray1[k] << "x" << " ";
//				}
//			}
//			if (obj.coeffArray1[k] < 0)
//			{
//				if (obj.degreeArray1[k] != 0 && obj.degreeArray1[k] != 1)
//				{
//					out << obj.coeffArray1[k] << "x" << obj.degreeArray1[k] << " ";
//				}
//				if (obj.degreeArray1[k] == 0)
//				{
//					out << obj.coeffArray1[k] << " ";
//				}
//				if (obj.degreeArray1[k] == 1)
//				{
//					out << obj.coeffArray1[k] << "x" << " ";
//				}
//			}
//		}
//	}
//	return out;
//}
//int main()
//{
//	myPolynomial p1, p2, p3;
//	int a, x = 0;
//	string b, ab;
//	int as;
//	cout << "0. EXIT " << endl;
//	cout << "1. Input a polynomial " << endl;
//	cout << "2. Input polynomials from file " << endl;
//	cin >> as;
//	while (as != 0)
//	{
//		if (as == 1)
//		{
//			cout << "enter polynomial a of format (2x3+4x2+3x+2): " << endl;
//			cin >> b;
//			cout << "enter polynomial b of format (2x3+4x2+3x+2): " << endl;
//			cin >> ab;
//			myPolynomial p1(b);
//			cout << endl;
//			myPolynomial p2(ab);
//			cout << endl;
//			cout << "0. EXIT " << endl;
//			cout << "1. Add a and b to give c (c=a+b) " << endl;
//			cout << "2. Multiply a and b to give c (c=a*b) " << endl;
//			cout << "3. Subtract a from b to give c (c=a-b)" << endl;
//			cout << "4. Print a " << endl;
//			cout << "5. Print b " << endl;
//			cout << "6. Print c " << endl;
//			cout << "7. Check a == b " << endl;
//			cin >> a;
//			while (a != 0)
//			{
//				if (a == 1) { p3 = p1 + p2; cout << p3; }
//				else if (a == 2) { p3 = p1 * p2; cout << p3; }
//				else if (a == 3) { p3 = p2 - p1; cout << p3; }
//				else if (a == 4) { cout << p1 << endl; }
//				else if (a == 5) { cout << p2 << endl; }
//				else if (a == 6) { cout << p3 << endl; }
//				else if (a == 7)
//				{
//					if (p1 == p2)
//					{
//						cout << "polynomials are same " << endl;
//					}
//					else
//					{
//						cout << "polynomials are not same " << endl;
//					}
//				}
//				cout << endl;
//				cout << "0. EXIT " << endl;
//				cout << "1. Add a and b to give c (c=a+b) " << endl;
//				cout << "2. Multiply a and b to give c (c=a*b) " << endl;
//				cout << "3. Subtract a from b to give c (c=b-a)" << endl;
//				cout << "4. Print a " << endl;
//				cout << "5. Print b " << endl;
//				cout << "6. Print c " << endl;
//				cout << "7. Check a == b " << endl;
//				cin >> a;
//			}
//		}
//		if (as == 2)
//		{
//			myPolynomial temp1, temp2;
//			myPolynomial p1(temp1.input1());
//			cout << endl;
//			myPolynomial p2(temp2.input2());
//			cout << endl;
//			cout << "0. EXIT " << endl;
//			cout << "1. Add a and b to give c (c=a+b) " << endl;
//			cout << "2. Multiply a and b to give c (c=a*b) " << endl;
//			cout << "3. Subtract a from b to give c (c=a-b)" << endl;
//			cout << "4. Print a " << endl;
//			cout << "5. Print b " << endl;
//			cout << "6. Print c " << endl;
//			cout << "7. Check a == b " << endl;
//			cin >> a;
//			while (a != 0)
//			{
//				if (a == 1) { p3 = p1 + p2; cout << p3; }
//				else if (a == 2) { p3 = p1 * p2; cout << p3; }
//				else if (a == 3) { p3 = p2 - p1; cout << p3; }
//				else if (a == 4) { cout << p1 << endl; }
//				else if (a == 5) { cout << p2 << endl; }
//				else if (a == 6) { cout << p3 << endl; }
//				if (a == 7)
//				{
//					if (p1 == p2)
//					{
//						cout << "polynomials are same " << endl;
//					}
//					else
//					{
//						cout << "polynomials are not same " << endl;
//					}
//				}
//				cout << endl;
//				cout << "0. EXIT " << endl;
//				cout << "1. Add a and b to give c (c=a+b) " << endl;
//				cout << "2. Multiply a and b to give c (c=a*b) " << endl;
//				cout << "3. Subtract a from b to give c (c=b-a)" << endl;
//				cout << "4. Print a " << endl;
//				cout << "5. Print b " << endl;
//				cout << "6. Print c " << endl;
//				cout << "7. Check a == b " << endl;
//				cin >> a;
//			}
//		}
//		cout << endl;
//		cout << "0. EXIT " << endl;
//		cout << "1. Input a polynomial " << endl;
//		cout << "2. Input polynomials from file " << endl;
//		cin >> as;
//	}
//
//}
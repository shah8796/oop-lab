//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//class mypolynomial {
//	float* coeffArray;
//	float* degArray;
//	int terms;
//public:
//	ifstream fin;
//	ofstream fout;
//	mypolynomial()
//	{
//		terms = 0;
//		coeffArray = new float[terms] { 0 };
//		degArray = new float[terms] { 0 };
//	}
//	void input()
//	{
//		string x;
//		int check1 = 0;
//		int check = 0;
//		cin>>x;
//		fout.open("ali.txt");
//		fout<< x;
//		fin.open("ali.txt");
//		for (int i = 0; i <= fin.eof(); i++)
//		{
//			if (x[i] == '+'||x[i]=='-') { check1++; }
//		}
//		terms = check1;
//		coeffArray = new float[terms];
//		degArray = new float[terms];
//		for (int i = 0; i <= fin.eof(); i++)
//		{
//			if (x[i] == 'x'||x[i]=='^') { check = 1; }
//			if (check != 1 || x[i - 1] != '^') 
//			{ string t;
//			t = t + x[i];
//			float ts = stoi(t);
//			coeffArray[i] = ts; }
//			if (x[i - 1] == '^') { 
//				string h;
//				h = h + x[i];
//				float sg = stoi(h);
//				degArray[i] = sg; }
//			if (x[i] != '^' && x[i - 1] == 'x') { degArray[i] = 1; }
//			if(x[i]=='/0'){ degArray[i] = 0; }
//		}
//		for (int i = 0; i < terms; i++)
//		{
//			cout << degArray[i];
//		}
//		cout << endl;
//		for (int i = 0; i < terms; i++)
//		{
//			cout << coeffArray[i];
//		}
//		/*int d=0;
//		d = degArray[0];
//		for (int i = 0; i < terms; i++)
//		{
//			if (degArray[i] > d) { d = degArray[i]; }
//		}*/
//	}
//	
//};
//int main()
//{
//	mypolynomial a;
//	a.input();
//}
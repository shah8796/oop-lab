//#include<iostream>
//using namespace std;
//void myTokenizer(char* data, char** list_tokens, char delimiter)
//{
//	int k = 0;
//	int* count = new int[50];
//	for (int i = 0; data[i]!= '\0'; i++)
//	{
//		if (data[i] == delimiter)
//		{
//			k++;
//		}
//	}
//	list_tokens = new char* [k];
//	int d = 0;
//	for (int i = 0; i < k; i++)
//	{
//		for (int j = 0; data[j] != '\0'; j++)
//		{
//			
//			list_tokens[i] = new char[d];
//			count[i] = d; 
//			if (data[j] == delimiter)
//			{
//				d = 0;
//				i++;
//			}
//			d++;
//		}
//
//	}
//	//for (int i = 0; i < k; i++)
//	int i = 0;
//		int z = 0;
//		for (int j=0; data[j]!='\0'; j++)
//		{
//			if (data[j] == delimiter)
//			{
//				i++;
//				j++;
//				z = 0;
//			}
//			list_tokens[i][z] = data[j];
//			z++;
//		}
//
//	
//	cout << "token is:" << endl;
//	for (int i = 0; i <= k; i++)
//	{
//		for (int j = 0; j < count[i]; j++)
//		{
//			cout << list_tokens[i][j];
//		}
//		cout << endl;
//
//	}
//}
//int main()
//{
//	char* d=new char[50];
//	char delim;
//	cout << "enter the data:" << endl;
//	cin >> d;
//	cout << "delimiter is:" << endl;
//	cin >> delim;
//	char** token=nullptr;
//	myTokenizer(d, token, delim);
//
//}
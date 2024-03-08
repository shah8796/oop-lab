//#include<iostream>
//using namespace std;
//int** GetFactorsArray(int* arr, int& size)
//{
//	int final_len = 0;
//	int* len = new int[size];
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 1; j < 100; j++)
//			if (arr[i] % j == 0)
//			{
//				count++;
//			}
//		len[i] = count;
//		count = 0;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		final_len += len[i];
//	}
//	int** get_fact = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < len[i]; j++)
//		{
//			get_fact[i] = new int[len[i]];
//
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//
//		for (int k = 0; k < len[i];)
//		{
//			for (int j = 1; j < 100; j++)
//			{
//				if (arr[i] % j == 0)
//				{
//					get_fact[i][k] = j;
//					k++;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "the factor of" << arr[i] << " " << "are";
//		for (int j = 0; j < len[i]; j++)
//		{
//			cout << get_fact[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return get_fact;
//}
//
//
//int main()
//{
//	int size;
//	cout << "enter the total numbers you want to take:";
//	cin >> size;
//	int* ptr = new int[size];
//	bool check = true;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "enter the no btw 6 and 100:";
//		cin >> ptr[i];
//		while (check)
//		{
//			if (ptr[i] > 100 || ptr[i] < 6)
//			{
//				cout << "enter the number again:";
//				cin >> ptr[i];
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	int** ptr2 = GetFactorsArray(ptr, size);
//	
//	return 0;
//
//
//}
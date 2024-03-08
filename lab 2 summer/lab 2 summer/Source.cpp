//#include<iostream>
//using namespace std;
//
//int* InputArray(int& size)
//{
//	int* arr = new int[size];
//	cout << "enter the elements of the arr:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//	
//	return arr;
//	
//}
//void OutputArray(const int* myArray, const int& size)
//{
//	cout << "array is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << myArray[i];
//	}
//}
//int* CompressArray(int* oiginalArr, int& size)
//{
//	int k = 1;
//	int* hn = new int[size];
//	hn[0] = oiginalArr[0];
//	int z = -2;
//	
//	for (int i = 0; i < size-1; i++)
//	{
//		for (int j = 1 ; j <k+1 ; j++)
//		{
//			if (oiginalArr[i] != oiginalArr[j])
//			{
//				hn[i] = oiginalArr[i];
//				z++;
//			}
//			//else
//				//i++;
//		}
//		k++;
//	}
//	cout << z<<endl;
//	OutputArray(hn, z);
//	return hn;
//}
//
//void sorted( int* myArray, const int& size)
//{
//	
//	int x = size;
//	int temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i; j < size; j++)
//		{
//			if (myArray[j] < myArray[i])
//			{
//				temp = myArray[i];
//				myArray[i] = myArray[j];
//				myArray[j] = temp;
//			}
//		}
//	}
//	
//	CompressArray(myArray, x);
//}
//int* Intersection(int* setA, int& size1, int* setB, int& size2, int& size3)
//{
//	int* common = new int[size3];
//	int k = 0;
//	for (int i = 0; i < size1; i++)
//	{
//		for (int j = 0,z=0; j < size2,z<k+1; j++,z++)
//		{
//			if (setA[i] == setB[j]&&(setA[i]!=common[z]))
//			{
//				common[k] = setA[i];
//				k++;
//
//			}
//			
//		}
//	}
//	cout << k << endl;
//	cout << "common elements are:" << endl;
//	for (int i = 0; i < k; i++)
//	{
//		cout << common[i] << " ";
//	}
//	return common;
//
//}
//int main()
//{
//	int x,y;
//	cout << "enter size:" << endl;
//	cin >> x;
//	int* arr = InputArray(x);
//	OutputArray(arr, x);
//	sorted(arr, x);
//	cout << "enter the size of set 1:" << endl;
//	cin >> x;
//	int* set1 = new int[x];
//	cout << "enter the elements of the set1:" << endl;
//	for (int i = 0; i < x; i++)
//	{
//		cin >> set1[i];
//	}
//	cout << "enter the size of set 2:" << endl;
//	cin >> y;
//	int* set2 = new int[y];
//	cout << "enter the elements of the set2:" << endl;
//	for (int i = 0; i < y; i++)
//	{
//		cin >> set2[i];
//	}
//	int z = x + y;
//	Intersection(set1, x, set2, y, z);
//
//}
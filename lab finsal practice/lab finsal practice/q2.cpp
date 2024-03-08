//#include<iostream>
//using namespace std;
//template<typename T,typename k>
//T sqr(T arr[][4], k row, k cols)
//{
//	T max = arr[0][0];
//	T min = arr[0][0];
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (arr[i][j] >= max)
//			{
//				max = arr[i][j];
//			}
//			if (arr[i][j] <= min)
//			{
//				min = arr[i][j];
//			}
//		}
//	}
//	T range = (max - min) / 4 + min;
//	return range;
//}
//int main()
//{
//	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,8,7,87,87,76,4,9 };
//	int size=4;
//	char arr1[4][4] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p' };
//	cout<<sqr<int,int>(arr, size, size);
//	cout<<sqr<char,int>(arr1, size, size);
//}
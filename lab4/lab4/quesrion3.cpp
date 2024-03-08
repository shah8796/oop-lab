//#include<iostream>
//using namespace std;
//class triangularmatrix {
//	int** matrix;
//	int rows;
//	int cols;
//public:
//	triangularmatrix()
//	{
//		matrix = nullptr;
//		rows = 0;
//		cols = 0;
//	}
//	void input()
//	{
//		cout << "enter the size of the matrix:" << endl;
//		cin >> rows;
//		cin >> cols;
//		matrix = new int* [rows];
//		for (int i = 0; i < rows; i++)
//		{
//			matrix[i] = new int[cols];
//		}
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < rows; j++)
//			{
//				cin >> matrix[i][j];
//			}
//		}
//
//	}
//	bool islower()
//	{
//		int count = 0;
//		int count1 = 0;
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				count++;
//				if (matrix[i][j] == 0)
//				{
//					count1++;
//				}
//			}
//		}
//		if (count == count1)
//		{
//			cout <<"\n"<< 1 << endl;
//			return true;
//		}
//		else
//		{
//			cout <<"\n"<< 0 << endl;
//			return false;
//		}
//	}
//	bool isupper()
//	{
//		int count2 = 0;
//		int count3 = 0;
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = i+1; j < cols; j++)
//			{
//				count2++;
//				if (matrix[i][j] == 0)
//				{
//					count3++;
//				}
//			}
//		}
//		if (count2 == count3)
//		{
//			cout <<"\n"<< 1 << endl;
//			return true;
//		}
//		else
//		{
//			cout <<"\n"<< 0 << endl;
//			return false;
//		}
//	}
//	int** transpose()
//	{
//		int** matrix1 = new int* [cols];
//		for (int i = 0; i < cols; i++)
//		{
//			matrix1[i] = new int[rows];
//		}
//		for (int i = 0; i < cols; i++)
//		{
//			for (int j = 0; j < rows; j++)
//			{
//				matrix1[i][j] = matrix[j][i];
//
//			}
//		}
//		for (int i = 0; i < cols; i++)
//		{
//			for (int j = 0; j < rows; j++)
//			{
//				cout<<matrix1[i][j]<<" ";
//
//			}
//			cout << endl;
//		}
//
//
//
//		return matrix1;
//	}
//
//};
//int main()
//{
//	triangularmatrix obj;
//	obj.input();
//	obj.islower();
//	obj.isupper();
//	obj.input();
//	obj.transpose();
//
//}
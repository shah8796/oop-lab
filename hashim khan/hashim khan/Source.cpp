//#include <iostream>
//using namespace std;
//
//class array1
//{
//    int** arr;
//    int rows;
//    int* cols;
//
//public:
//    array1(int n)
//    {
//        rows = n;
//        cols = new int[n];
//        arr = new int*[rows];
//        for (int i = 0; i < n; i++)
//        {
//            cols[i] = n;
//            arr[i] = new int[cols[i]];
//            for (int j = 0; j < n; j++)
//            {
//                arr[i][j] = j;
//            }
//        }
//    }
//    int getrows()
//    {
//        return rows;
//    }
//    int getcol(int i)
//    {
//        if (i >= rows || i < 0)
//            return 0;
//        return cols[i];
//    }
//    friend int** operator+(array1 arr1, array1 arr2);
//    friend int** operator-(array1 arr1, array1 arr2);
//    /*~array1()
//    {
//        for (int i = 0; i < rows; i++)
//        {
//            delete[] arr[i];
//        }
//        delete[] arr;
//    }*/
//};
//
//int** operator+(array1 arr1, array1 arr2)
//{
//    int** ans = nullptr;
//    if (arr1.getrows() == arr2.getrows())
//    {
//        ans = new int* [arr1.getrows()];
//        for (int i = 0; i < arr1.getrows(); i++)
//        {
//            if (arr1.getcol(i) == arr2.getcol(i))
//            {
//                ans[i] = new int[arr1.getcol(i)];
//                for (int j = 0; j < arr1.getcol(i); j++)
//                {
//                    ans[i][j] = arr1.arr[i][j] + arr2.arr[i][j];
//                }
//            }
//            else
//            {
//                return nullptr;
//            }
//        }
//    }
//    else
//    {
//        return nullptr;
//    }
//    return ans;
//}
//
//int** operator-(array1 arr1, array1 arr2)
//{
//    int** ans = nullptr;
//    if (arr1.getrows() == arr2.getrows())
//    {
//        ans = new int* [arr1.getrows()];
//        for (int i = 0; i < arr1.getrows(); i++)
//        {
//            if (arr1.getcol(i) == arr2.getcol(i))
//            {
//                ans[i] = new int[arr1.getcol(i)];
//                for (int j = 0; j < arr1.getcol(i); j++)
//                {
//                    ans[i][j] = arr1.arr[i][j] - arr2.arr[i][j];
//                }
//            }
//            else
//            {
//                return nullptr;
//            }
//        }
//    }
//    else
//    {
//        return nullptr;
//    }
//    return ans;
//}
//
//int main()
//{
//    int n = 5;
//    array1 obj1(n);
//    array1 obj2(n);
//    int** arr = obj1 + obj2;
//    cout << "Addition:-" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << "Subtraction:-" << endl;
//    int** arr1 = obj1 - obj2;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << arr1[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        delete[] arr[i];
//    }
//    delete[] arr;
//    return 0;
//
//}
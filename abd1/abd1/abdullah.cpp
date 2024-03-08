#include<iostream>
using namespace std;

int main()
{
    int s1, s2, flag;

    char* u=new char[27];
    cout << "input the union set:" << endl;
    cin >> u;
    cout << "Enter the size of set A: ";
    cin >> s1;
    cout << "Enter the elements of set A: ";
    char* arr1 = new char[s1];

    cin >> arr1;


    cout << "Enter the size of set B: ";
    cin >> s2;
    char* arr2 = new char[s2];
    cout << "Enter the elements of set B: ";
    cin >> arr2;
    /*for(int i=0;i<s2;i++)
    {
      cin>>arr2[i];
    }*/
    cout << endl;
    cout << "Union of the two sets (AUB): ";
    for (int i = 0; i < s1; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int j = 0; j < s2; j++)
    {
        flag = 0;
        for (int i = 0; i < s1; i++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << arr2[j] << " ";
        }

    }
    cout << endl;
    cout << "The Intersection of two sets(AnB)" << endl;
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";

            }
        }

    }
    cout << endl;
    cout << "The complement of A: ";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < s1; j++)
        {
            if (u[i] != arr1[i])
            {
                cout << u[i] << " ";

            }
        }

    }
    cout << "The complement of B: ";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (arr2[i] != u[i])
            {
                cout << u[i] << " ";

            }
        }

    }



    return 0;
}


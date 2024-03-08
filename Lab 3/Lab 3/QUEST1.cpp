//#include<iostream>
//#include<fstream>
//#include<cstring>
//using namespace std;
//
//
//void Read_file(char* name, int*& arr, int& size) {
//    string filename = "";
//    for (int i = 0; name[i] != '\0'; i++)
//    {
//        filename.push_back(name[i]);
//    }
//    filename.append(".txt");
//    ifstream file;
//    file.open(filename);
//    file >> size;
//    arr = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        file >> arr[i];
//    }
//}
//void Write_file(char* name, int* arr, int size) {
//    string filename = "";
//    for (int i = 0; name[i] != '\0'; i++)
//    {
//        filename.push_back(name[i]);
//    }
//    filename.append(".txt");
//    ofstream file;
//    file.open(filename);
//    file << size << endl;
//    for (int i = 0; i < size; i++)
//    {
//        file << arr[i] << " ";
//    }
//}
//
//int main()
//{
//    int size, choice = 1;
//    char name[20];
//    int* arr = nullptr;
//
//    while (true) {
//
//        cout << "0. Exit\n1. Read file\n2. Write file\nEnter your choice: ";
//        cin >> choice;
//        cin.ignore();
//        if (!choice)
//            break;
//        else if (choice == 2) {
//            cout << "Enter the name of file: ";
//            cin.get(name, 20, '\n');
//            cout << "Enter the number of digits: ";
//            cin >> size;
//            arr = new int[size];
//            cout << "Enter the digits: ";
//            for (int i = 0; i < size; i++)
//            {
//                cin >> arr[i];
//                // cout<<arr[i]<<" ";
//            }
//            Write_file(name, arr, size);
//        }
//        else if (choice == 1) {
//            cout << "Enter the name of file: ";
//            cin.get(name, 20, '\n');
//            Read_file(name, arr, size);
//        }
//        cout << "Name of the file: " << name << endl;
//        cout << "Count: " << size << endl;
//        cout << "Elements of array: ";
//        for (int i = 0; i < size; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        
//        
//        delete[] arr;
//    }
//
//    return 0;
//}
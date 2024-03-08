//#include<iostream>
//using namespace std;
//
//void VoteCasting(char** candiatename, int** regions, int* total)
//{
//	int counter = 0;
//	cout << "enter the canidates name:";
//	cout << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cin.getline(candiatename[i], 40);
//	}
//
//	cout << "enter the vote casted:";
//	cout << endl;
//	for (int i = 0; i < 3; i++)
//	{
// cout<<"enter input of respective candidate"<<endl;
//		for (int j = 0; j < 4; j++)
//		{
//			cin >> regions[i][j];
//			counter += regions[i][j];
//		}
//		total[i] =counter;
//		counter = 0;
//	}
//	
//	
//}
//void show_record(char** candiatename, int** regions, int* total)
//
//{
//	int check;
//	int sum = 0;
//	int max = total[0];
//	cout << "     " << "------" << "ELECTIONS_RESULT" << "-------" << "             " << endl;
//	cout << "CANIDATE:" << "                      " << "votes" << endl;
//	cout << "name:" << "   " << "region1" << "   " << "region2" << "  " << "region3" << "  " << "region4" << "  " << "total" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << candiatename[i] << "      "; for (int j = 0; j < 4; j++)
//		{
//			cout << regions[i][j];
//			cout << "        ";
//		}
//		cout << total[i];
//		cout << endl;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (total[i] > max)
//		{
//			max = total[i];
//			check = i;
//		}
//	}
//	cout << "the winner is:" << candiatename[check] << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		sum += total[i];
//	}
//	cout << "total votes recieved are:" << sum << endl;
//}
//int main()
//{
//	char** ptr = new char* [3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j <40; j++)
//		{
//			ptr[i] = new char[40];
//		}
//	}
//	int** ptr2 = new int* [3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j <4; j++)
//		{
//			ptr2[i] = new int[4];
//		}
//	}
//	int* ptr3 = new int[3];
//	VoteCasting(ptr, ptr2, ptr3);
//	show_record(ptr, ptr2, ptr3);
//	
//	return 0;
//}
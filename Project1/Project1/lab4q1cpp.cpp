//#include<iostream>
//using namespace std;
//class player {
//	char name[30];
//	int id;
//public:
//	player()
//	{
//		name[0]={ '\0' };
//		id = 0;
//
//	}
//	player(char nam[], int ID)
//	{
//		for (int i = 0; i < 31; i++)
//		{
//			name[i] = nam[i];
//		}
//		id = ID;
//	}
//	
//	
//	void input()
//	{
//		cout << "enter the name:" << endl;
//		cin >> name;
//		cout << "enter the id:" << endl;
//		cin >> id;
//	}
//	void setter(char* nam,int ID)
//	{
//		
//		for (int i = 0; i < 30; i++)
//		{
//			nam[i] = name[i];
//		}
//		 ID = id;
//
//	}
//	void output()
//	{
//		cout << name << endl;
//		cout << id << endl;
//	}
//	int getter()
//	{
//		
//		return id ;
//	}
//	char getter1(char* ptr)
//	{
//		
//		return *ptr;
//	}
//	
//	
//
//	
//
//};
//int main()
//{
//	char nam[30] = { '\0' };
//	char* ptr = new char[30]{'\0'};
//	int id = 0;
//	player s1;
//	player s2(nam, id);
//	s1.input();
//	s1.setter(ptr, id);
//	s1.getter();
//	s1.getter1(ptr);
//	s1.output();
//
//	
//	
//
//
//}
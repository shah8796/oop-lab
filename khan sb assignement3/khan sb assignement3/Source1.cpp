//#include<iostream>
//#include<string>
//using namespace std;
//class STRING {
//	char* message;
//public:
//	STRING()
//	{
//		message = nullptr;
//	}
//	void setmessage(char* mes)
//	{
//		message = mes;
//	}
//	char* getmessage()
//	{
//		cout << "the string is:" << endl;
//		cout << message;
//		return message;
//	}
//	void strlength(char* mes)
//	{
//		int i = 0;
//		int count = 0;
//		while (mes[i] != '\0')
//		{
//			if (mes[i] != ' ')
//			{
//				count++;
//			}
//			i++;
//		}
//		cout << "string length is:" << count << endl;
//	}
//	void wordcount(char* mes)
//	{
//		int i = 0;
//		int count = 0;
//		while (mes[i] != '\0')
//		{
//			if (mes[i] == ' ')
//			{
//				count++;
//			}
//			i++;
//		}
//		cout << "number of words are:" << count + 1 << endl;
//	}
//	void unique(char* mes)
//	{
//		int i = 0;
//		int count = 0;
//		char* mesa = new char[20];
//		//mesa = mes;
//
//		while (mes[i] != '\0')
//		{
//
//			/*if (mes[i] != ' ')
//			{
//				mesa[i] = mes[i];
//				count++;
//			}*/
//			mesa[i] = mes[i];
//			if (mes[i] == ' ')
//			{
//
//				for (int j = 0; mes[j] != '\0'; j++)
//				{
//					i++;
//					bool a = true;
//					if (mes[i] != mesa[j] && mes[i] != ' ' && mes[i] != '\0' && a == true)
//					{
//
//						a = true;
//					}
//					else if (mes[i] == ' ' && mes[i - 1] != mesa[j - 1])
//					{
//						count++;
//					}
//
//
//				}
//			}
//			i++;
//		}
//		cout << "unique words are:" << count << endl;
//	}
//
//};
//int main()
//{
//	char* a = new char[100];
//	cout << "enter the string" << endl;
//	cin.get(a, 100);
//	STRING obj;
//	obj.setmessage(a);
//	obj.getmessage();
//	obj.strlength(a);
//	obj.wordcount(a);
//	obj.unique(a);
//}
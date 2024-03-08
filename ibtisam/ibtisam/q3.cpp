//#include<iostream>
//using namespace std;
//class decoder {
//	string message;
//public:
//	decoder(string m)
//	{
//		message = m;
//	}
//	void decode()
//	{
//		char* a = new char[50];
//		int count = 0;
//		for (int i = 0; message[i] != '\0'; i++)
//		{
//			if(message[i]>'e'&&message[i]!=' ')
//			a[i] = message[i] - 5;
//			if(message[i]=='e'&&message[i]!=' ')
//			a[i] = 'z';
//			if(message[i]=='d'&&message[i]!=' ')
//			a[i] = 'y';
//			if(message[i]=='c'&&message[i]!=' ')
//			a[i] = 'x';
//			if(message[i]=='b')
//			a[i] = 'w';
//			if(message[i]=='a'&&message[i]!=' ')
//			a[i] = 'u';
//			if(message[i]==' ')
//			a[i] = ' ';
//			count++;
//		}
//		cout << "the encoded message is:" << endl;
//		for (int i = 0; i < count; i++)
//		{
//			cout << a[i];
//		}
//		cout << endl;
//	}
//	/*void display()
//	{
//		cout << "the encoded message is:" << endl;
//		
//	}*/
//};
//class superdecoder :public decoder{
//	string message;
//public:
//	superdecoder(string m):decoder(m)
//	{
//		message = m;
//	}
//	void decode()
//	{
//		int count1 = 0;
//		int count = 0;
//		int vovel = 0;
//		int nonvovel = 0;
//		for (int i = 0; message[i] != '\0'; i++)
//		{
//			if (message[i] == ' ')
//				count++;
//			if (message[i] == 'e'||message[i]=='a'||message[i]=='i'||message[i]=='o'||message[i]=='u' && message[i] != ' ')
//				vovel++;
//			if (message[i] != 'e'&&message[i]!='a'&&message[i]!='i'&&message[i]!='o'&&message[i]!='u' && message[i] != ' ')
//				nonvovel++;
//
//				count1++;
//		}
//		cout << "Total number of words are:" << endl;
//		cout << count + 1 << endl;;
//		cout << "Total number of vowels are:" << endl;
//		cout << vovel << endl;;
//		cout << "Total number of non-vowels are:" << endl;
//		cout << nonvovel << endl;;
//	}
//};
//class PremiumDecoder : public decoder
//{
//	string message;
//public:
//	PremiumDecoder(string m):decoder(m)
//	{
//
//	}
//	void decode()
//	{
//		char* a = new char[50];
//		int count = 0;
//		for (int i = 0; message[i] != '\0'; i++)
//		{
//			if (message[i] > 'e' && message[i] != ' ')
//				a[i] = message[i] - 5;
//			if (message[i] == 'e' && message[i] != ' ')
//				a[i] = 'z';
//			if (message[i] == 'd' && message[i] != ' ')
//				a[i] = 'y';
//			if (message[i] == 'c' && message[i] != ' ')
//				a[i] = 'x';
//			if (message[i] == 'b')
//				a[i] = 'w';
//			if (message[i] == 'a' && message[i] != ' ')
//				a[i] = 'u';
//			if (message[i] == ' ')
//				a[i] = ' ';
//			count++;
//		}
//		cout << "the encoded message in reverse order is:" << endl;
//		for (int i = count-1; i >= 0; i--)
//		{
//			cout << a[i];
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	decoder a("hello i am ali");
//	a.decode();
//	superdecoder b("hello i am ali");
//	b.decode();
//	PremiumDecoder c("hello i am ali");
//	c.decode();
//}
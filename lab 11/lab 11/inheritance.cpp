//#include<iostream>
//using namespace std;
//class media {
//protected:
//	string title;
//public:
//	int size4 = 0;
//	media()
//	{
//		title = '/0';
//	}
//	media(string tit)
//	{
//		 size4 = tit.size();
//		 title = tit;
//	}
//	void display()
//	{
//		
//		cout << title;
//		cout << endl;
//	}
//	
//	
//};
//class book: public media{
//	string authorname;
//	string ISBN;
//public:
//	int size4 = 0;
//	int size1 = 0;
//	book(string tit,string author,string Is):media(tit)
//	{
//		size4 = author.size();
//		size1 = Is.size();
//		authorname = author;
//		ISBN = Is;
//	}
//	void display()
//    {
//		cout << "authorname is:" << endl;
//		cout << authorname;
//		cout << " ";
//		cout << "ISBN is:" << endl;
//		cout<<ISBN;
//		cout << endl;
//	}
//
//
//};
//class magazine :public media {
//	string monthname;
//	int year;
//public:
//	int size = 0;
//	magazine(string tit,string month,int yer):media(title)
//	{
//		size = month.size();
//		monthname = month;
//		year = yer;
//	}
//	void display()
//	{
//		media::display();
//		for (int i = 0; i < size; i++)
//		{
//			cout << monthname[i];
//		}
//		cout << endl;
//		cout << "year is:" << year << endl;
//	}
//};
//int main()
//{
//	int obj;
//	cout << "Enter no of obj:" << endl;
//	cin >> obj;
//	media** u= new media*[obj];
//	int num;
//	cout << "press 1 for book" << endl;
//	cout << "press 2 for magazines" << endl;
//	cin >> num;
//	string a, b, c;
//	for (int i = 0; i < obj;i++)
//	{
//		if (num==1)
//		{
//			cout << "enter title name >>: ";
//			cin >> a;
//			cout << "enter author name >>: ";
//			cin >> b;
//			cout << "ISBN >>: ";
//			cin >> c;
//		u[i] = new book(a, b, c);
//		}
//		if (num==2)
//		{
//			int cc;
//			cout << "enter title name >>: ";
//			cin >> a;
//			cout << "enter month name >>: ";
//			cin >> b;
//			cout << "enter year >>: ";
//			cin >> cc;
//			u[i] = new magazine(a, b, cc);
//			
//		}
//	}
//	for (int i = 0; i < obj;i++)
//	{
//		u[i]->display();
//		delete u[i];
//	}
//	delete[] u;
//
//
//}
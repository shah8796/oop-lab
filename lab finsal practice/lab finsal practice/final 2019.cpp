//#include<iostream>
//#include<cstring>
//using namespace std;
//class media {
//protected:
//	char* title;
//public:
//	media()
//	{
//
//	}
//	media(char* t)
//	{
//		//strcpy(title, t);
//		title = t;
//	}
//	virtual void display() = 0;
//};
//class book :public media {
//	char* authorname;
//	char* isbn;
//public:
//	book(char t[], char a[], char i[]):media(t)
//	{
//		authorname = a;
//		isbn = i;
//	}
//	void display() 
//	{
//		cout << "title:" << title << endl;
//		cout << "author:" << authorname << endl;
//		cout << "isbn:" << isbn << endl;
//	}
//
//};
//class magazine :public media {
//	char* month;
//	int year;
//public:
//	magazine(char t[], char a[], int i) :media(t)
//	{
//		month = a;
//		year = i;
//	}
//	void display()
//	{
//		cout << "title:" << title << endl;
//		cout << "month of publication:" << month << endl;
//		cout << "year of publication:" << year << endl;
//	}
//};
//class cd :public media {
//	int capacity;
//public:
//	cd(char t[], int c) :media(t)
//	{
//		capacity = c;
//	}
//	void display()
//	{
//		cout << "title" << endl;
//		cout << "capacity" << capacity << endl;
//	}
//};
//class shelf {
//	media** items;
//	int currsize;
//	int maxsize;
//public:
//	shelf(int s)
//	{
//		maxsize = s;
//		currsize = 0;
//		items = new media*[maxsize];
//	}
//	void insert(media* a)
//	{
//		items[currsize] = a;
//		currsize++;
//	}
//	void displaycontents()
//	{
//		for (int i = 0; i < currsize; i++)
//		{
//			 items[i]->display();
//		}
//	}
//};
//int main()
//{
//	int x;
//	int y;
//	cout << "how many media items do u wanna create:" << endl;
//	cin >> x;
//	shelf a(x);
//	while (true)
//	{
//	    cout << "\n-------------MEDIA--------------\n";
//	    cout << "If u wanna create book then: ENTER 1" << endl;
//	    cout << "If u wanna create magazine then: ENTER 2" << endl;
//	    cout << "If u wanna create cd then: ENTER 3" << endl;
//	    cout << "If u want to print details of the obejct in the shelf: ENTER 4" << endl;
//	    cin >> y;
//	
//	
//		if (y == 1)
//		{
//			char b[20];
//			cout << "enter title:" << endl;
//			cin >> b;
//			char c[20];
//			char d[20];
//			cout << "enter authorname:" << endl;
//			cin >> c;
//			cout << "enter isbn:" << endl;
//			cin >> d;
//			media* p = new book(b, c, d);
//			a.insert(p);
//		}
//		if (y == 2)
//		{
//			char b[20];
//			cout << "enter title:" << endl;
//			cin >> b;
//			char c[20];
//			int d;
//			cout << "enter month:" << endl;
//			cin >> c;
//			cout << "enter year:" << endl;
//			cin >> d;
//			media* p = new magazine(b, c, d);
//			a.insert(p);
//		}
//		if (y == 3)
//		{
//			char b[20];
//			cout << "enter title:" << endl;
//			cin >> b;
//			int d;
//			cout << "enter storage:" << endl;
//			cin >> d;
//			media* p = new cd(b, d);
//			a.insert(p);
//		}
//		if (y == 4)
//		{
//			a.displaycontents();
//		}
//		if (y == 0)
//		{
//			break;
//		}
//	}
//}
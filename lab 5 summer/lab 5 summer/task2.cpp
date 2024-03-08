//#include<iostream>
//using namespace std;
//class car {
//	string colour;
//	int cubic;
//	int seats;
//	int date;
//	int engineno;
//	int frameno;
//	string name;
//public:
//	car()
//	{
//		colour = '\0';
//		cubic = 0;
//		seats = 0;
//		date = 0;
//		engineno = 0;
//		frameno = 0;
//		name = '\0';
//	
//		cout << "default constructor called" << endl;
//	}
//	car(const car& obj)
//	{
//		this->colour = obj.colour;
//		this->cubic = obj.cubic;
//		this->seats = obj.seats;
//		cout << "Enter information about obj2:" << endl;
//		cout << "name:" << endl;
//		cin >> name;
//		cout << "engineno:" << endl;
//		cin >> engineno;
//		cout << "date:" << endl;
//		cin >> date;
//		cout << "frameno:" << endl;
//		cin >> frameno;		
//	}
//	void input()
//	{
//		cout << "colour:" << endl;
//		cin >> colour;
//		cout << "cubic capacity:" << endl;
//		cin >> cubic;
//		cout << "seats:" << endl;
//		cin >> seats;
//		cout << "name:" << endl;
//		cin >> name;
//		cout << "engineno:" << endl;
//		cin >> engineno;
//		cout << "date:" << endl;
//		cin >> date;
//		cout << "frameno:" << endl;
//		cin >> frameno;
//	}
//	void display()
//	{
//		cout << "\n\ninformation about the object:" << endl;
//		cout << "colour:  " << colour << endl;
//		cout << "cubic capacity:  " << cubic << endl;
//		cout << "number of seats:  " << seats << endl;
//		cout << "engine no:   " << engineno << endl;
//		cout << "frame no:   " << frameno << endl;
//		cout << "year:   " << date << endl;
//		cout << "name:   " << name << endl;
//
//	}
//	/*void setcolour()
//	{
//		colour = nullptr;
//	}
//	void setcubic()
//	{
//		cubic = 0;
//	}
//	void setseats()
//	{
//		seats = 0;
//	}
//	void engineno1()
//	{
//		engineno = 0;
//	}
//	void setframe()
//	{
//		frameno = 0;
//	}
//	void setdate()
//	{
//		date = 0;
//	}
//	void setname()
//	{
//		name = nullptr;
//	}
//	char* getcolour()
//	{
//		return colour;
//	}
//	char* getname()
//	{
//		return name;
//	}
//	int getcubic()
//	{
//		return cubic;
//	}
//	int getseat()
//	{
//		return seats;
//	}
//	int getengineno()
//	{
//		return engineno;
//	}
//	int getframe()
//	{
//		return frameno;
//	}
//	int getdate()
//	{
//		return date;
//	}*/
//
//
//};
//int main()
//{
//	car obj1;
//	obj1.input();
//	obj1.display();
//	car obj2(obj1);
//	obj2.display();
//}
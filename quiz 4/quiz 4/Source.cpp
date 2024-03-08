//#include<iostream>
//using namespace std;
//class vehicle {
//protected:
//	string make;
//	string year_model;
//	int price;
//public:
//	vehicle()
//	{
//		make = "\0";
//		year_model = "\0";
//		price = 0;
//	}
//	vehicle(string m, string y, int p)
//	{
//		make = m;
//		year_model = y;
//		price = p;
//	}
//	void setmake(string m)
//	{
//		make = m;
//	}
//	void setyear_model(string m)
//	{
//		year_model = m;
//	}
//	void setprice(int m)
//	{
//		price = m;
//	}
//	string getmake()
//	{
//		return make;
//	}
//	string getyearmodel()
//	{
//		return year_model;
//	}
//	int getprice()
//	{
//		return price;
//	}
//	virtual void calculatedistance(float fuel) = 0;
//	friend ostream& operator<<(ostream& out, vehicle& obj)
//	{
//		out << "Make is:" << obj.make << endl;
//		out << "year model is:" << obj.year_model << endl;
//		out << "price is:" << obj.price << endl;
//		return out;
//	}
//	friend istream& operator>>(istream& in, vehicle& obj)
//	{
//		cout << "enter make:" << endl;
//		in >>  obj.make;
//		cout << "enter year model:" << endl;
//		in >> obj.year_model;
//		cout << "enter price:" << endl;
//		in >> obj.price;
//		return in;
//	}
//};
//class cars :public vehicle {
//	int numofdoors;
//	 int fuelconsumption;
//public:
//	cars()
//	{
//		numofdoors = 0;
//		fuelconsumption = 15;
//	}
//	cars(string m, string y, int p, int a) :vehicle(m, y, p)
//	{
//		numofdoors = a;
//		fuelconsumption = 15;
//	}
//	void setnumofdoors(int n)
//	{
//		numofdoors = n;
//	}
//	int getnumofdoors()
//	{
//		return numofdoors;
//	}
//	void calculatedistance(float fuel)
//	{
//		float distance;
//		distance = fuel * fuelconsumption;
//		cout << "distance travelled by car is:" << distance << endl;
//	}
//	friend ostream& operator<<(ostream& out, cars& obj)
//	{
//		cout << "------cars-------" << endl;
//		out << "Make is:" << obj.make << endl;
//		out << "year model is:" << obj.year_model << endl;
//		out << "price is:" << obj.price << endl;
//		out << "num of doors:" << obj.numofdoors << endl;
//		out << "fuel comnsumption:" << obj.fuelconsumption << endl;
//		return out;
//	}
//	friend istream& operator>>(istream& in, cars& obj)
//	{
//		cout << "------Cars-------" << endl;
//		cout << "enter make:" << endl;
//		in >> obj.make;
//		cout << "enter year model:" << endl;
//		in >> obj.year_model;
//		cout << "enter price:" << endl;
//		in >> obj.price;
//		cout << "enter no of doors:" << endl;
//		in >> obj.numofdoors;
//		return in;
//	}
//};
//class trucks :public vehicle {
//	string drive_type;
//	 int fuelconsumption;
//public:
//	trucks()
//	{
//		drive_type = "\0";
//		fuelconsumption = 11;
//	}
//	trucks(string m, string y, int p, string d):vehicle(m,y,p)
//	{
//		drive_type = d;
//		fuelconsumption = 11;
//	}
//	void calculatedistance(float fuel)
//	{
//		float distance;
//		distance = fuel * fuelconsumption;
//		cout << "distance travelled by truck is:" << distance << endl;
//	}
//	friend ostream& operator<<(ostream& out, trucks& obj)
//	{
//		out << "------Truck-------" << endl;
//		out << "Make is:" << obj.make << endl;
//		out << "year model is:" << obj.year_model << endl;
//		out << "price is:" << obj.price << endl;
//		out << "drive type:" << obj.drive_type << endl;
//		out << "fuel comnsumption:" << obj.fuelconsumption << endl;
//		return out;
//	}
//	friend istream& operator>>(istream& in, trucks& obj)
//	{
//		cout << "------TRUCK-------" << endl;
//		cout << "enter make:" << endl;
//		in >> obj.make;
//		cout << "enter year model:" << endl;
//		in >> obj.year_model;
//		cout << "enter price:" << endl;
//		in >> obj.price;
//		cout << "enter drive type:" << endl;
//		in >> obj.drive_type;
//		return in;
//	}
//};
//class suv :public vehicle{
//	int passangercapacity;
//	 int fuelconsumption;
//public:
//	suv()
//	{
//		passangercapacity = 0;
//		fuelconsumption = 10;
//	}
//	suv(string m, string y, int p, int a) :vehicle(m, y, p)
//	{
//		passangercapacity = a;
//		fuelconsumption = 10;
//	}
//	void setpassenger(int p)
//	{
//		passangercapacity = p;
//	}
//	int getpessenger()
//	{
//		return passangercapacity;
//	}
//	void calculatedistance(float fuel)
//	{
//		float distance;
//		distance = fuel * fuelconsumption;
//		cout << "distance travelled by suv is:" << distance << endl;
//	}
//	friend ostream& operator<<(ostream& out, suv& obj)
//	{
//		out << "------SUV-------" << endl;
//		out << "Make is:" << obj.make << endl;
//		out << "year model is:" << obj.year_model << endl;
//		out << "price is:" << obj.price << endl;
//		out << "passenger capacity:" << obj.passangercapacity << endl;
//		out << "fuel comnsumption:" << obj.fuelconsumption << endl;
//		return out;
//	}
//	friend istream& operator>>(istream& in, suv& obj)
//	{
//		cout << "------SUV-------" << endl;
//		cout << "enter make:" << endl;
//		in >> obj.make;
//		cout << "enter year model:" << endl;
//		in >> obj.year_model;
//		cout << "enter price:" << endl;
//		in >> obj.price;
//		cout << "enter passenger capacity:" << endl;
//		in >> obj.passangercapacity;
//		return in;
//	}
//};
//int main()
//{
//	cars c1("toyota", "STR-1233", 4000000, 2);
//	cout << c1;
//	trucks t1("Heavy Metal Movers", "STR-1937", 6000000, "two-wheel drive");
//	cout << t1 ;
//	suv s1("Acura", "STR-1647", 60000000, 8);
//	cout << s1;
//	cars c2;
//	trucks t2;
//	suv s2;
//	cin >> c2;
//	cin >> t2;
//	cin >> s2;
//	vehicle** vehicle_arr=new vehicle*[3];
//	vehicle_arr[0] = &c2;
//	vehicle_arr[1] = &s2;
//	vehicle_arr[2] = &t2;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << vehicle_arr[i];
//		vehicle_arr[i]->calculatedistance(5);
//	}
//}
//#include<iostream>
//using namespace std;
//class Bus
//{
//private:
//	double mileage, gleft, miles;
//	bool status;
//
//public:
//	const int MILES_PER_GALLON = 5;
//	Bus()
//	{
//
//	}
//	Bus(double gas, double mil)
//	{
//		miles = mil;
//		gleft = gas;
//		mileage = 0;
//	}
//	void startdrive(int miles)
//	{
//
//		cout << " Can this bus make the trip of " << miles << "?\n";
//		status = check(miles);
//
//		if (status)
//		{
//			cout << " The bus can make the trip!\n";
//			cout << "\t Status Of Bus!! \n";
//			updatedis(miles);
//		}
//		else
//		{
//			cout << " The bus wont be able to make this trip!\n";
//		}
//
//
//	}
//	bool check(int miles)
//	{
//		if (MILES_PER_GALLON * miles > gleft)
//		{
//			return false;
//		}
//	}
//	void updatedis(int miles)
//	{
//		gleft = gleft - MILES_PER_GALLON * miles;
//		mileage = mileage + miles;
//		cout << " The remaining Gas left: " << gleft << endl;
//		cout << " The mileage of the bus: " << mileage;
//	}
//
//};
//
//
//int main()
//{
//	const int MILES_PER_GALLON = 5;
//	Bus* m_bus = new Bus(12.0, 1200.0);
//	Bus trip1;
//	trip1.startdrive(20);
//
//
//	return 0;
//
//}
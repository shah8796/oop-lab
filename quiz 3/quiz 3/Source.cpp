//#include<iostream>
//using namespace std;
//class Menu {
//	int item_number;
//	char* item_name;
//	int quantity;
//	double price;
//public:
//	Menu()
//	{
//		item_number = 0;
//		item_name = nullptr;
//		quantity = 5;
//		price = 0.00;
//	}
//	Menu(int no, char* name, int q, double p)
//	{
//		item_number = no;
//		item_name = name;
//		quantity = q;
//		price = p;
//	}
//	void set_item_number(int no)
//	{
//		item_number = no;
//	}
//	void set_item_name(char* b)
//	{
//		item_name = b;
//	}
//	void set_item_quantity(int q)
//	{
//		quantity = q;
//	}
//	void set_item_price(double b)
//	{
//		price = b;
//	}
//	int get_item_quantity()
//	{
//		cout << "item quantity:"<<quantity << endl;
//		return quantity;
//	}
//	void update_item_quantity(int q)
//	{
//		quantity = q;
//	}
//	int get_item_price()
//	{
//		return price;
//	}
//	bool is_available(int q)
//	{
//		/*if (quantity < q)
//			cout << false << endl;
//		else
//			cout << true << endl;*/
//		if (quantity < q)
//			return false;
//		else
//			return true;
//	}
//};
//class customer {
//	double total_amount;
//public:
//	customer()
//	{
//		total_amount = 0.00;
//	}
//	int bill_calculate(Menu b)
//	{
//		int h;
//		cout << "add the item no:" << endl;
//		cin >> h;
//		if (b.is_available(h) == 0)
//		{
//			total_amount = 0;
//			b.get_item_quantity();
//		}
//		int x;
//	
//		
//			cout << "do you got it:\nif yes the press 1 else 2" << endl;
//			cin >> x;
//
//		
//		if (b.is_available(h) == 1)
//		{
//			int x;
//			x=b.get_item_quantity();
//			total_amount += x;
//			total_amount *= b.get_item_price();
//			b.update_item_quantity(total_amount);
//		}
//		
//		return total_amount;
//	}
//	int get_total_amount()
//	{
//		cout << total_amount << endl;
//		return total_amount;
//	}
//};
//class Shake_Shop {
//	customer* cus;
//	Menu* item=new Menu[100];
//	int total_item;
//	int total_earnings;
//	int total_customer;
//public:
//	Shake_Shop()
//	{
//		total_earnings = 0;
//		total_item = 0;
//		total_customer = 0;
//		cus = new customer[100];
//	}
//	void update_total_customer()
//	{
//		total_customer++;
//	}
//	void update_total_earning(int p)
//	{
//		total_earnings += p;
//	}
//	void menu_creation()
//	{
//		int x, z;
//		double y;
//		char* g=new char[10];
//		//for (int i = 0; i < 6; i++)
//		//{
//			cout << "add new item:" << endl;
//			cin >> x;
//			item->set_item_number(x);
//			cout << "add its price:" << endl;
//			cin >> y;
//			item->set_item_price(y);
//			cout << "add its name:" << endl;
//			cin >> g;
//			item->set_item_name(g);
//			cout << "add its quantity:" << endl;
//			cin >> z;
//			item->set_item_quantity(z);
//		//}
//	}
//	void order_item()
//	{
//		update_total_customer();
//		cout << "what do u wanna have:" << endl;
//		cus[0].bill_calculate(*item);
//		cout << "your bill is:"<<cus[0].get_total_amount() << endl;
//
//	}
//
//};
//int main()
//{
//	Shake_Shop b;
//	b.menu_creation();
//	b.order_item();
//}
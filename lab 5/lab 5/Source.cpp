//#include<iostream>
//using namespace std;
//class event {
//	char* event_name;
//	char* event_venue;
//	char event_date[11];
//	char event_time[9];
//public:
//	event()
//	{
//		*event_name = '0';
//		*event_venue = '0';
//		event_date[0] = '0';
//		event_time[0] = '0';
//		cout << "default constructor called" << endl;
//	}
//	event(char* event_name[20], char* event_venue[50], char event_date[11], char event_time[9])
//	{
//		this->event_name = *event_name;
//		this->event_venue = *event_venue;
//		for (int i = 0; i < 12; i++)
//		{
//			this->event_date[i] = event_date[i];	
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			this->event_time[i] = event_time[i];
//		}
//		cout << "overloaded constructor called" << endl;
//	}
//
//};
//int main()
//{
//	event s1;
//	event s2('ali', 'wapda town', '2 - 2 - 2002', '12:12');
//}
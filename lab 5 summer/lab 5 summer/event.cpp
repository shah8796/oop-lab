//
//#include "Event.h"
//#include<iostream>
//using namespace std;
//
//
//Event::Event()
//{
//    cout << "default constructor called" << endl;
//}
//Event::Event(char* name, char* venue, char date[11], char time[9])
//{
//    cout << "overloaded constructor called" << endl;
//    event_name = name;
//    event_venue = venue;
//    for (int i = 0; i < 11; i++)
//    {
//        event_date[i] = date[i];
//    }
//    for (int i = 0; i < 9; i++)
//    {
//        event_time[i] = time[i];
//    }
//}
//void Event::setname(char* inputname)
//{
//    event_name = inputname;
//}
//void Event::setvenue(char* inputvenue)
//{
//    event_venue = inputvenue;
//}
//void Event::setdate(char inputdate[11])
//{
//    for (int i = 0; i < 11; i++)
//    {
//        event_date[i] = inputdate[i];
//    }
//}
//void Event::settime(char inputtime[9])
//{
//    for (int i = 0; i < 9; i++)
//    {
//        event_time[i] = inputtime[i];
//    }
//}
//char* Event::getname()
//{
//    return event_name;
//}
//char* Event::getvenue()
//{
//    return event_venue;
//}
//char* Event::gettime()
//{
//    return event_time;
//}
//char* Event::getdate()
//{
//    return event_date;
//}
//void Event::userinput()
//{
//    cout << "Add event name:" << endl;
//    cin >> event_name;
//    cout << "Add event venue:" << endl;
//    cin >> event_venue;
//    cout << "Add event date" << endl;
//    cin >> event_date;
//    cout << "Add event time:" << endl;
//    cin >> event_time;
//}
//
//Event::~Event(void)
//{
//    cout << "Destructor Called\n";
//}
//Event* addEventOver(Event* eve)
//{
//    cin.ignore();
//    char* name = new char[20];
//    cout << "Name of event :";
//    cin.getline(name, 20, '\n');
//    char* venue = new char[50];
//    cout << "Venue of event :";
//    cin.getline(venue, 50, '\n');
//    char date[11];
//    cout << "Date of event :";
//    cin.getline(date, 11, '\n');
//    char time[9];
//    cout << "Time of event :";
//    cin.getline(time, 9, '\n');
//    eve = new Event(name, venue, date, time);
//    return eve;
//
//}
//void addEventset(Event eve)
//{
//
//    cin.ignore();
//    char* name = new char[20];
//    cout << "Name of event :";
//    cin.getline(name, 20, '\n');
//    eve.setname(name);
//    char* venue = new char[50];
//    cout << "Venue of event :";
//    cin.getline(venue, 50, '\n');
//    eve.setvenue(venue);
//    char date[11];
//    cout << "Date of event :";
//    cin.getline(date, 11, '\n');
//    eve.setdate(date);
//    char time[9];
//    cout << "Time of event :";
//    cin.getline(time, 9, '\n');
//    eve.settime(time);
//
//    
//}
//void Event::display()
//{
//    cout << "Event name:" << event_name << endl;
//    cout << "Event_venue:" << event_venue << endl;
//    cout << "Event_date" << endl;
//    for (int i = 0; i < 11; i++)
//    {
//        cout << event_date[i];
//    }
//    cout << endl;
//    cout << "event_time" << endl;
//    for (int i = 0; i < 9; i++)
//    {
//        cout << event_time[i];
//    }
//
//
//
//}
//void menu()
//{
//    cout << "\nAdd New Event Using Overloaded Constructor: Enter 1\nAdd New Event Using Setters : Enter 2\nDisplay Event : Enter 3\nExit : Enter 0\n";
//    cout << "\nEnter:\n";
//}
//

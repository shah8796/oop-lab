//#include<iostream>
//#include <cstdlib>
//using namespace std;
//class Bus {
//    double fuel;
//    bool status;
//    double milage;
//    float milespergallon;
//public:
//    Bus() {
//
//    }
//    Bus(double infuel, int inmilage) {
//        fuel = infuel;
//        milage = inmilage;
//        status = 1;
//        srand(time(NULL));
//        
//    }
//    void repair() {
//        if (status)
//            cout << "Already OK...!!" << endl;
//        else
//            cout << "Bus repaired" << endl;
//        status = 1;
//    }
//    void addfuel(double& infuel) {
//        fuel += infuel;
//    }
//    bool check() {
//        int random = rand() % 10;
//        if (random < milage  / 1000) {
//            status = 0;
//        }
//        return status;
//    }
//    double getmillage() {
//        return milage;
//    }
//    double getfuel() {
//        return fuel;
//    }
//    bool startanddrive(int miles) {
//        if (fuel > miles / milespergallon ) {
//            int random = rand() % 10;
//            if (random < milage / 1000) {
//                status = 0;
//            }
//            if (status) {
//                fuel -= (miles / milespergallon);
//                milage += miles;
//                milespergallon = 25;
//                return 1;
//            }
//        }
//        else
//            return 0;
//    }
//    bool getstatus() {
//        return status;
//    }
//    double getmilespergallon() {
//        return milespergallon;
//    }
//
//};
//
//int validator(int upper = 9999, int lower = 0)
//{
//    double input;
//    while ((!(cin >> input)) || input <lower || input>upper)
//    {
//        cin.clear();
//        cin.ignore(100, '\n'); // character to be entered
//        cout << "invalid input try again : ";
//    }
//    return input;
//}
//
//void menu() {
//    cout << "0. Exit" << endl //done
//        << "1. Start and drive" << endl //done
//        << "2. Add fuel" << endl //done
//        << "3. Get fuel" << endl //done
//        << "4. Get milage" << endl //done
//        << "5. Repair" << endl;//done
//    cout << "\nEnter your choice : ";
//}
//
//int main()
//{
//    int choice = 1;
//    Bus* m_bus = new Bus(10.0, 1000.0);
//    while (choice) {
//        menu();
//        choice = validator(5, 0);
//        if (choice == 2) {
//            cout << "Enter the fuel :";
//            double fuel = validator();
//            m_bus->addfuel(fuel);
//        }
//        else if (choice == 3) {
//            cout << "Fuel left is " << m_bus->getfuel() << endl;
//        }
//        else if (choice == 4) {
//            cout << "The milage of the bus is "
//                << m_bus->getmillage() << endl;
//        }
//        else if (choice == 5) {
//            m_bus->repair();
//        }
//        else if (choice == 1) {
//            double miles;
//            cout << "Enter the number of miles :";
//            miles = validator();
//            if (m_bus->startanddrive(miles)) {
//                cout << "journey completed\n";
//            }
//            else {
//                cout << "Journey failed" << endl;
//            }
//        }
//        else if (choice == 6) {
//            if (m_bus->getstatus()) {
//                cout << "Bus is ok..!!!" << endl;
//            }
//            else
//                cout << "Bus is broken" << endl;
//        }
//        else if (choice == 7) {
//            cout << "Miles per gallons are :"
//                << m_bus->getmilespergallon() << endl;
//        }
//        cin.ignore(100, '\n');
//        cin.get();
//    }
//    return 0;
//}
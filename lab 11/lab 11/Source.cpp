#include<iostream>
#include<sstream>
using namespace std;

int validator(int upper = 9999, int lower = 0)
{
    int input;
    while ((!(cin >> input)) || input <lower || input>upper)
    {
        cin.clear();
        cin.ignore(100, '\n'); // character to be entered
        cout << "invalid input try again : ";
    }
    return input;
}


int menu() {
    int input;
    cout << "1. Magzine\n2. Book\nEnter your choice:";
    input = validator(2, 1);
    return input;
}
class Media {

protected:
    string title;
public:
    virtual void display() {
        cout << "Title :" << title << endl;
    }
    Media(string intitle) {
        title = intitle;
    }
};
class Book : public Media {
    string author_name, ISBN;
public:
    void display() {

        cout << "Book\nTitle :" << title << endl;
        cout << "Author :" << author_name << endl;
        cout << "ISBN :" << ISBN << endl << endl;
    }
    Book(string intitle, string inauthor, string inISBN) :Media(intitle) {
        author_name = inauthor;
        ISBN = inISBN;
    }


};
class Magzine : public Media {
    string month;
    int year;
public:
    void display() {
        cout << "Magzine\nTitle :" << title << endl;
        cout << "Month :" << month << endl;
        cout << "Year :" << year << endl << endl;
    }
    Magzine(string intitle, string inmonth, int inyear) :Media(intitle) {
        month = inmonth;
        year = inyear;
    }
};


int main()
{
    int numb;
    string title;
    cout << "Enter how many you want :";
    numb = validator();
    Media** arr = new Media * [numb];
    for (int i = 0; i < numb; i++)
    {
        int choice = menu();
        cout << "Enter the title: ";
        cin >> title;
        if (choice == 1) {
            string author, isbn;
            cout << "Enter author's name: ";
            cin >> author;
            cout << "Enter ISBN no.: ";
            cin >> isbn;
            arr[i] = new Book(title, author, isbn);
        }
        else {
            string month;
            int year;
            cout << "Enter the Year: ";
            year = validator(2022, 1600);
            cout << "Enter the month: ";
            cin >> month;
            arr[i] = new Magzine(title, month, year);
        }
    }
    for (int i = 0; i < numb; i++)
    {
        arr[i]->display();
        delete arr[i];
    }
    delete[] arr;

    return 0;
}
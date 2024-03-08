#include<iostream>
using namespace std;
class Author
{
private:
	string name;
	string email;
	char gender;
public:
	Author()
	{
		name = " ";
		email = " ";
		gender = ' ';
	}
	Author(const string& n, const string& e, char g)
	{
		name = n;
		email = e;
		gender = g;
	}
	string getName()const
	{
		return name;
	}
	string getEmail()const
	{
		return email;
	}
	void setEmail(const string& e)
	{
		email = e;
	}
	void setName(const string& n)
	{
		name = n;
	}
	char getGender()const
	{
		return gender;
	}
	void print()const
	{
		cout << "\nAuthor Name: " << name << " Author Email: " << email << " Author Gender: " << gender << "\n";
	}
};


class Book
{
private:
	string title;
	Author author;
	double price;
	int qtyinstock;
public:
	Book()
	{
		title = " ";
		price = 0.00;
		qtyinstock = 0;
	}
	Book(string name, Author a, double p, int qty = 0)
	{
		title = name;
		author = a;
		price = p;
		qtyinstock = qty;
	}
	string getName()
	{
		return title;
	}
	Author getAuthor()
	{
		return author;
	}
	double getPrice()
	{
		return price;
	}
	void setPrice(double p)
	{
		price = p;
	}
	int getQTYinStock()
	{
		return qtyinstock;
	}
	void setQTYinStock(int qty)
	{
		qtyinstock = qty;
	}
	string getAuthorName()
	{
		return author.getName();
	}
	void print()
	{
		cout << "\nBook Name: " << title << " Author : " << author.getName() << " Price: " << price << "\n";

	}
};

int main()
{
	Author peter(" Peter Jones ", " peter@somewhere.com ", 'm');
	peter.print(); 
	Book b("C++ for Dummies", peter, 19.99, 100);
	b.print();
	peter.setEmail("peter@xyz.com");
	peter.print(); 
	b.print();
	b.getAuthor().setEmail("peter@abc.com");
	b.print();
}
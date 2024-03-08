#include<iostream>
using namespace std;
class account {
	double accountno;
	double accountbalance;
public:
	account()
	{
		accountno = 0302765;
		accountbalance = 10000000;
	}
	void setaccno(int a)
	{
		accountno = a;
	}
	void setaccbalance(int a)
	{
		accountbalance = a;
	}
	int getaccno()
	{
		return accountno;
	}
	int getaccbalance()
	{
		return accountbalance;
	}
	virtual void print()
	{
		cout << "account no is:" << accountno << endl;
		cout << "account balance is:" << accountbalance << endl;
	}
	virtual void debit(double a)
	{
		accountbalance -= a;
	}
	virtual void credit(double a)
	{
		accountbalance += a;
	}
};
class currentaccount :public account {
	double servicecharges;
	double minbalance;
public:
	currentaccount()
	{
		servicecharges = 10;
		minbalance = 20000;
	}
	void print()
	{
		cout << "account no is:" << getaccno() << endl;
		cout << "account balance is:" << getaccbalance() << endl;
		cout << "service charges:"<<servicecharges << endl;
		cout << "minimum balance:"<<minbalance << endl;
	}
	void credit(double a)
	{
		double x;
		x = getaccbalance() + a;
		setaccbalance(x);
	}
	void debit(double a)
	{
		double c=getaccbalance();
		double x=getaccbalance();
		if (x <= minbalance)
		{
			x = a + ((servicecharges / 100) * x);
			c -= x;
			setaccbalance(c);
		}
		else
		{
			c-=a;
			setaccbalance(c);
		}
	}
};
class savingaccount:public account {
	double interest;
public:
	savingaccount()
	{
		interest = 10;
	}
	void print()
	{
		cout << "account no is:" << getaccno() << endl;
		cout << "account balance is:" << getaccbalance() << endl;
		cout << "interest rate:" << interest << endl;
	}
	void credit(double a)
	{
		double x;
		x = a + ((interest/100)*getaccbalance());
		x += getaccbalance();
		setaccbalance(x);
	}
	void debit(double a)
	{
		double x = getaccbalance();
		if (a <= x)
		{
			x -= a;
		}
		setaccbalance(x);
	}
};
int main()
{
	account* a;
	account* b;
	currentaccount c;
	a = &c;
	a->credit(50000);
	a->debit(25000);
	a->print();
	savingaccount d;
	b = &d;
	b->credit(30000);
	b->debit(10000);
	b->print();

}
#include"person.h"
#include"under_graduate.h"
#include"graduate.h"
#include"faculty.h"
#include<iostream>
using namespace std;
int main()
{
	faculty a(20, "ali", "shah", 3, 142);
	cout << "faculty member info is:" << endl;
	a.print();
	graduate b(20,"ali","shah",3.33,"21l1834","fast","john");
	under_graduate c(20,"ali","shah",3.33,"21l1834","snake","john");
	cout << "If the student is graduate or not:" << endl;
	cout << "press 1 for graduate and 2 for undergraduate" << endl;
	int d;
	while (true)
	{
		cin >> d;
		if (d == 1)
		{
			b.print();
		}
		if (d == 2)
		{
			c.print();
		}
		if (d == 0)
		{
			break;
		}
	}

}

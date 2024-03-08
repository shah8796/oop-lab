#include<iostream>
using namespace std;
class person {
private:
	char* first_name;
	char* last_name;
protected:
	int age;
public:
	int size;
	int size1;
	person()
	{
		first_name = nullptr;
		last_name = nullptr;
		age = 0;
		size = 0;
		size1 = 0;

	}
	person(string fname,string lname,int age)
	{
		 size = fname.size();
		 size1 = lname.size();

		first_name = new char[size];
		last_name = new char[size1];
		for (int i = 0; i < size; i++)
		{
			first_name[i] = fname[i];
		}
		for (int i = 0; i < size1; i++)
		{
			last_name[i] = lname[i];
		} 
		this->age = age;
		cout << "person called" << endl;
	}
	void set(string fname, string lname, int age)
	{
		int size2 = fname.size();
		int size3 = lname.size();

		first_name = new char[size2];
		last_name = new char[size3];
		for (int i = 0; i < size2; i++)
		{
			first_name[i] = fname[i];
		}
		for(int i=0;i<size3;i++)
		{
			last_name[i] = lname[i];
		}
		this->age = age;
	}
	void printinformation()
	{
		for (int i = 0; i < size; i++)
		{
			cout << first_name[i];
		}
		cout << " ";
		for (int i = 0; i < size1; i++)
		{
			cout << last_name[i];
		}
		cout << " is ";
		cout << age << " years old" ;
	}
	
	~person()
	{
		cout << "~person() called" << endl;
	}
};
class student:public person {
private:
	float cgpa;
public:
	
	student(string fname, string lname, int age, float cgpa) :person(fname, lname, age)
	{
		this->cgpa = cgpa;
		cout << "student called" << endl;
	}
	void set(float cgpa)
	{
		this->cgpa = cgpa;
	}
	
	void printstudent()
	{
		printinformation();
		cout << ",his cgpa is" << cgpa;
	}
      
};
class faculty:public person {
private:
	
	int course_count;
	int threedigit;

public:
	faculty()
	{
		course_count = 0;
		threedigit = 0;
	}
	faculty(string fname, string lname, int age, int count, int digit) :person(fname, lname, age)
	{
		course_count = count;
		threedigit = digit;

	}
	void set(int count, int digit)
	{
		course_count = count;
		threedigit = digit;
	}
	void printfaculty()
	{
		cout << "Faculty member name:";
		printinformation();
		cout << ",number of courses:" << course_count;
		cout << "Ext," << threedigit;

	}
	~faculty()
	{
		cout << "~faculty called" << endl;
	}
	


};
class graduate :public student{
private:
	
	char* thesistopic;
public:
	int size=0;
	graduate(string fname, string lname, int age,int cgpa, string topic) :student(fname, lname, age,cgpa)
	{
		int size = topic.size();
		thesistopic = new char[size];
		for (int i = 0; i < size; i++)
		{
			thesistopic[i] = topic[i];
		}
	}
	void set(string topic)
	{
		 size = topic.size();
		thesistopic = new char[size];
		for (int i = 0; i < size; i++)
		{
			thesistopic[i] = topic[i];
		}
	}
	void printGraduate()
	{
		printstudent();
		cout << "and his thesis topic is:";
		for (int i = 0; i < size; i++)
		{
			cout << thesistopic[i];
		}
	}


};
class undergraduate :public student{
private:
	
	char* fyp_name;
public:
	int size = 0;
	undergraduate(string fname, string lname, int age, float cgpa, string fyp) :student(fname, lname, age, cgpa)
	{
		 size = fyp.size();
		fyp_name = new char[size];
		for (int i = 0; i < size; i++)
		{
			fyp_name[i] = fyp[i];
		}
	}
	void set(string fyp)
	{
		int size = fyp.size();
		fyp_name = new char[size];
		for (int i = 0; i < size; i++)
		{
			fyp_name[i] = fyp[i];
		}
	}
	void printUndergraduate()
	{
		printstudent();
		cout << "and his final year project titled is";
		for (int i = 0; i < size; i++)
		{
			fyp_name[i];
		}
	}
};
int main()
{
	undergraduate s1("ted", "thomsan", 22, 3.91,"event");
	faculty s2("richard", "karp", 45, 2, 420);
	/*person called
		student called
		person called
		~faculty called
		~person() called
		~person() called*/
	
	student s3("ted", "thomsan", 22, 3.91);
	faculty s4("Richard", "Karp", 45, 2, 420);
	s3.printstudent();
	s4.printfaculty();
	graduate s5("ted", "thomsan", 22, 3.91, "Distributed algorithm");
	undergraduate s6("ted", "thomsan", 22, 3.91, "The event locater");
	s5.printGraduate();
	s6.printUndergraduate();
	
}

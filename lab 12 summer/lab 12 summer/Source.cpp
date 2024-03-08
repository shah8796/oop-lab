//#include<iostream>
//using namespace std;
//class person {
//	string fullname;
//	int height;
//public:
//	person(string name, int heigh)
//	{
//		fullname = name;
//		height = heigh;
//	}
//	virtual void printinfo()
//	{
//		cout << "Full name is:" << fullname << endl;
//		cout << "height is:" << height << endl;
//	}
//	virtual ~ person()
//	{
//		cout << "person destructor called" << endl;
//	}
//};
//class employee:public person {
//	string department;
//	int id;
//public:
//	employee(string f, int h, string dept, int iid) :person(f, h)
//	{
//		department = dept;
//		id = iid;
//	}
//	void printinfo()
//	{
//		cout << "department name:" << department << endl;
//		cout << "id:" << id << endl;
//	}
//	~employee()
//	{
//		cout << "destructor employee" << endl;
//	}
//};
//class student :public person {
//	string schoolname;
//public:
//	student(string f, int h, string skl):person(f,h)
//	{
//		schoolname = skl;
//	}
//	void printinfo()
//	{
//		cout << "school name is:" << schoolname << endl;
//	}
//	~student()
//	{
//		cout << "destructor student called" << endl;
//	}
//};
//int main()
//{
//	person* base[2];
//	employee b("Ali Shah",6,"Bs-Cs", 1834);
//	student c("Ali Shah",6,"lgs");
//	base[0] = &b;
//	base[1] = &c;
//	for (int i = 0; i < 2; i++)
//	{
//		base[i]->printinfo();
//	}
//	
//}
//#include<iostream>
//using namespace std;
//class student {
//	int* marks = new int[5];;
//public:
//	student()
//	{
//	}
//	student(const student& obj)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			this->marks[i] = obj.marks[i];
//		}
//	}
//	void set_marks(int mark, int index)
//	{
//		marks[index] = mark;
//	}
//	void input()
//	{
//		cout << "enter the marks again:" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cin >> marks[i];
//		}
//	}
//	void display()
//	{
//		cout << "marks of the student are:" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << marks[i] << " ";
//		}
//		cout << endl;
//
//	}
//	~student()
//	{
//		delete[] marks;
//	}
//};
//int main()
//{
//	student s1;
//	int x = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		x += 10;
//		s1.set_marks(x, i);
//	}
//	s1.display();
//	student s2(s1);
//	s2.display();
//	s1.input();
//	s2.display();
//
//	
//}

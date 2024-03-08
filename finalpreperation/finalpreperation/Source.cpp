//#include<iostream>
//using namespace std;
//class ABC {
//	int c;
//public:
//	ABC(ABC& rhs) { cout << "ABC(rhs) called.\n"; c = 20; }
//	ABC() { cout << "ABC() called.\n"; c = 200; }
//	void Print() { cout << "c=" << c << endl; }
//};
//class XYZ {
//	int b;
//	ABC m1;
//	ABC* m2;
//public:
//	XYZ() { cout << "XYZ() called.\n"; b = 20; m2 = 0; }
//	XYZ(ABC abc) { cout << "XYZ(ABC abc) called.\n"; b = 200; m2 = 0; }
//	void Print() { m1.Print(); if (m2) { m2->Print(); } }
//};
//void main() {
//	ABC temp;
//	cout << "......\n";
//	XYZ e1(temp);
//	e1.Print();
//
//}
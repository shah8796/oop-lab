//#include<iostream>
//using namespace std;
//template<typename T>
//class Pair {
//private:
//	T values[2];
//public:
//	Pair() {
//		values[0] = 0;
//		values[1] = 0;
//	}
//	Pair(T a, T b) {
//		values[0] = a;
//		values[1] = b;
//	}
//	inline T GetMax() {
//		if (values[0] > values[1]) {
//			return values[0];
//		}
//		else return values[1];
//	}
//	inline T GetMin() {
//		if (values[0] < values[1]) {
//			return values[0];
//		}
//		else return values[1];
//	}
//
//	template<class B>
//	friend ostream& operator<<(ostream& cout, const Pair<B>& p);
//};
//
//template<class B>
//ostream& operator<<(ostream& cout, const Pair<B>& p) {
//
//	cout << p.values[0] << endl;
//	cout << p.values[1] << endl;
//	return cout;
//}
//template<class T, int A>
//class Sequence {
//	T memblock[A];
//public:
//	Sequence() {
//
//	}
//	void setMember(int a, T val) {
//		memblock[a] = val;
//	}
//
//	T getMember(int a) {
//		return memblock[a];
//	}
//};
//
//int main() {
//	Pair<double> y(2.23, 3.45);
//	Sequence<Pair<double>, 5> myPairs;
//	myPairs.setMember(0, y);
//	cout << myPairs.getMember(0) << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//template <typename t1>
//class Pair
//{
//    t1 first;
//    t1 second;
//
//public:
//    Pair(t1 infirst, t1 insecond)
//    {
//        first = infirst;
//        second = insecond;
//    }
//    t1 getmax()
//    {
//        if (first > second)
//            return first;
//        if(second>first)
//        return second;
//    }
//    inline t1 getmin();
//};
//template<typename t1>
//t1 Pair<t1>::getmin() {
//    if (first < second)
//        return first;
//    if (second < first)
//        return second;
//    
//}
//
//int main()
//{
//    Pair<double> myobject(1.012, 1.01234);
//    cout << myobject.getmax();
//    return 0;
//}
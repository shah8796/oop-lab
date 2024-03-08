//#include<iostream>
//using namespace std;
//class NLC
//{
//    int size;
//    char* str;
//    int lenght;
//public:
//    NLC()
//    {
//        str = nullptr;
//        lenght = 0;
//    }
//    NLC(int size) {
//        this->size = size;
//        str = new char[size];
//    }
//    int getwordCount()
//    {
//        int count = 0;
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            if (str[i] == ' ')
//            {
//                count++;
//            }
//        }
//        return count + 1;
//    }
//    int uniquewords()
//    {
//        int unique = 0;
//        char* temp = new char[size];
//        int len = 0;
//        for (int i = 0; i < size; i++) {
//            temp[i] = str[i];
//        }
//        char* tok = new char[size];
//        while (true) {
//            int k = 0, i;
//            for (i = len; temp[i] != ' '; i++) {
//                tok[k++] = temp[i];
//            }
//            len = i;
//            int x = 0;
//            while (i < size && x < k) {
//                if (tok[x++] != temp[i++]) {
//                    break;
//                }
//            }
//            if (x == k) {
//                int z = i;
//                i -= k;
//                while (i != z) {
//                    temp[i++] = ' ';
//                }
//                unique++;
//            }
//            else {
//                while (temp[i] != ' ' || temp[i] != '\0') {
//                    i++;
//                }
//            }
//            if (temp[i] == '\0')
//                break;
//        }
//        delete[] tok;
//        delete[] temp;
//        return unique + 1;
//    }
//    void unigram()
//    {
//        int numofuniquewords = uniquewords();
//        int unique = 0;
//        char* temp = new char[size];
//        int len = 0;
//        for (int i = 0; i < size; i++) {
//            temp[i] = str[i];
//        }
//        char* tok = new char[size];
//        while (true) {
//            int k = 0, i;
//            for (i = len; temp[i] != ' '; i++) {
//                tok[k++] = temp[i];
//            }
//            len = i;
//            int x = 0;
//            while (i < size && x < k) {
//                if (tok[x++] != temp[i++]) {
//                    break;
//                }
//            }
//            if (x == k) {
//                int z = i;
//                i -= k;
//                while (i != z) {
//                    temp[i++] = ' ';
//                }
//                unique++;
//            }
//            else {
//                while (temp[i] != ' ' || temp[i] != '\0') {
//                    i++;
//                }
//            }
//            if (temp[i] == '\0')
//                break;
//        }
//
//    }
//};
//int main()
//{
//    string s;
//    int count, str_lenght;
//    int l, c, u;
//    s = "My name is Hamza Ashfaq";
//    NLC n;
//
//    n.getwordCount();
//    n.uniquewords();
//    /*n.setunique(string, count);
//    l = n.getstrLenght();
//    c = n.getwordcount();
//    u = n.getunique();
//    cout << "The String Length is " << l << endl;
//    cout << "The word count is " << c << endl;
//    cout << "The Unique is " << u << endl;
//    cout << "The Unigram :" << endl;
//    n.uniGram(string);
//    n.biGram(string);
//    n.~NLC();*/
//
//}

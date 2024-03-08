//#include<iostream>
//using namespace std;
//class person {
//    char* first_name;
//    char* last_name;
//protected:
//    int age;
//public:
//    person(string& infirst_name, string& inlastname, int inage = 0)
//    {
//        int len = infirst_name.size();
//        first_name = new char[len + 1];
//        first_name[len] = '\0';
//        while (len--) {
//            first_name[len] = infirst_name[len];
//        }
//        len = inlastname.size();
//        last_name = new char[len + 1];
//        last_name[len] = '\0';
//        while (len--) {
//            last_name[len] = inlastname[len];
//        }
//        age = inage;
//        cout << "Person called\n";
//
//
//
//
//
//    }
//    ~person() {
//        delete[] first_name;
//        delete[] last_name;
//        cout << "~Person called\n";
//    }
//    char* getprfirst() {
//        return first_name;
//    }
//    char* getprlast() {
//        return last_name;
//    }
//    void setprfirst(string in) {
//        int len = in.size();
//        delete[] first_name;
//        first_name = new char[len + 1];
//        first_name[len] = '\0';
//        for (int i = 0; i < len; i++)
//        {
//            first_name[i] = in[i];
//        }
//    }
//    void setprlast(string in) {
//        int len = in.size();
//        delete[] last_name;
//        last_name = new char[len + 1];
//        last_name[len] = '\0';
//        for (int i = 0; i < len; i++)
//        {
//            last_name[i] = in[i];
//        }
//    }
//    void printinformation() {
//        for (int i = 0; first_name[i] != '\0'; i++)
//        {
//            cout << first_name[i];
//        }
//        cout << " ";
//        for (int i = 0; last_name[i] != '\0'; i++)
//        {
//            cout << last_name[i];
//        }
//        cout << " is " << age << " years old";
//    }
//};
//class student :public person {
//protected:
//    float cgpa;
//public:
//    student(string infirst_name, string inlastname, float incgpa, int inage = 0) :
//        person(infirst_name, inlastname, inage) {
//        cgpa = incgpa;
//        cout << "student called\n";
//    }
//    char* getstfirst() {
//        return getprfirst();
//    }
//    char* getstlast() {
//        return getprlast();
//    }
//    int getstcgpa() {
//        return cgpa;
//    }
//    void setstcgpa(float in) {
//        cgpa = in;
//    }
//    void setstfirst(string in) {
//        setprfirst(in);
//    }
//    void setstlast(string in)
//    {
//        setprlast(in);
//    }
//
//
//
//
//    void printstudent() {
//        printinformation();
//        cout << " ,his gpa is " << cgpa;
//    }
//    ~student() {
//        cout << "~student called\n";
//    }
//};
//class graduate :public student {
//    char* thesis_name;
//public:
//    graduate(string infirst_name, string inlastname, string inthesis, float incgpa, int inage = 0) :
//        student(infirst_name, inlastname, incgpa, inage) {
//        int len = inthesis.size();
//        thesis_name = new char[len + 1];
//        thesis_name[len] = '\0';
//        while (len--) {
//            thesis_name[len] = inthesis[len];
//        }
//        cout << "graduate student called\n";
//
//    }
//    ~graduate() {
//        delete[] thesis_name;
//        cout << "~graduate student called\n";
//    }
//    char* getgstfirst() {
//        return getprlast();
//    }
//    char* getgstlast() {
//        return getstlast();
//    }
//    char* getgstthesis() {
//        return thesis_name;
//    }
//    int getgstcgpa() {
//        return getstcgpa();
//    }
//    void setgstlast(string in) {
//        setstlast(in);
//    }
//    void setgstfirst(string in) {
//        setstfirst(in);
//    }
//    void setgstthesis(string in) {
//        int len = in.size();
//        delete[] thesis_name;
//        thesis_name = new char[len + 1];
//        thesis_name[len] = '\0';
//        for (int i = 0; i < len; i++)
//        {
//            thesis_name[i] = in[i];
//        }
//    }
//    void printundergraduate() {
//        printinformation();
//        printstudent();
//        cout << "thesis :";
//        for (int i = 0; thesis_name[i] != '\0'; i++)
//        {
//            cout << thesis_name[i];
//        }
//    }
//};
//class undergraduate :public student {
//    char* fyp_name;
//public:
//    undergraduate(string infirst_name, string inlastname, string infyp, float incgpa, int inage = 0) :
//        student(infirst_name, inlastname, incgpa, inage) {
//        int len = infyp.size();
//        fyp_name = new char[len + 1];
//        fyp_name[len] = '\0';
//        while (len--) {
//            fyp_name[len] = infyp[len];
//        }
//    }
//    char* getugstfirst() {
//        return getstfirst();
//    }
//    char* getugstlast() {
//        return getstlast();
//    }
//    char* getugstfyp() {
//        return fyp_name;
//    }
//    int getugstcgpa() {
//        return getstcgpa();
//    }
//    void setugstlast(string in) {
//        setstlast(in);
//    }
//    void setugstfirst(string in) {
//        setstfirst(in);
//    }
//    void setugstfyp(string in) {
//        int len = in.size();
//        delete[] fyp_name;
//        fyp_name = new char[len + 1];
//        fyp_name[len] = '\0';
//        for (int i = 0; i < len; i++)
//        {
//            fyp_name[i] = in[i];
//        }
//    }
//    void printundergraduate() {
//        printstudent();
//        cout << " ,FYP :";
//        for (int i = 0; fyp_name[i] != '\0'; i++)
//        {
//            cout << fyp_name[i];
//        }
//    }
//    ~undergraduate() {
//        delete[] fyp_name;
//        cout << "~undergraduation called\n";
//    }
//};
//class faculty :public person {
//    int course_count;
//    int tele_extension;
//public:
//    faculty(string infirst_name, string inlastname, int incourse, int intele, int inage = 0) :
//        person(infirst_name, inlastname, inage) {
//        course_count = incourse;
//        tele_extension = intele;
//        cout << "faculty called\n";
//    }
//    char* getfmfirst() {
//        return getprfirst();
//    }
//    char* getfmlast() {
//        return getprlast();
//    }
//    int getcourses() {
//        return course_count;
//    }
//    int gettele() {
//        return tele_extension;
//    }
//    void setffirst(string in) {
//        setprfirst(in);
//    }
//    void setflast(string in) {
//        setprlast(in);
//    }
//    void setcourse(int in) {
//        course_count = in;
//    }
//    void settele(int in) {
//        tele_extension = in;
//    }
//    ~faculty() {
//        cout << "~faculty called\n";
//    }
//    void printfaculty() {
//        cout << "faculty member name: ";
//        printinformation();
//        cout << " ,Number of courses: " << course_count;
//        cout << " ,Telephone extension: " << tele_extension;
//    }
//};
//
//
//int main()
//{
//    // student st("Ted","Thompson",3.91,22);
//    // faculty ft("Richard","Karp",2,420,45);
///*
//Person called
//student called
//Person called
//faculty called
//~faculty called
//~Person called
//~student called
//~Person called
//*/
//    undergraduate u("Ted", "Thompson", "The Event Locator", 3.91, 22);
//    graduate  g("Arnold", "Gates", "Distributed Algorithms", 3.01, 25);
//    // st.printstudent();
//    // cout<<endl;
//    u.printundergraduate();
//    cout << endl;
//    return 0;
//}
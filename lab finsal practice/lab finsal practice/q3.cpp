//#include<iostream>
//using namespace std;
//class departement {
//	char* departementname;
//	int nof;
//	int nos;
//	int count=0;
//public:
//	departement()
//	{
//		departementname = nullptr;
//		nof = 0;
//		nos = 0;
//	}
//	departement(char* a[20], int f[], int s[])
//	{
//		departementname = a[count];
//		nof = f[count];
//		nos = s[count];
//		count++;
//	}
//	/*void setname(char n[][20])
//	{
//		for (int i = 0; i != '\0'; i++)
//		{
//			for (int j = 0; j != '\0'; j++)
//			{
//				departementname[i][j] = n[i][j];
//			}
//		}
//	}
//	void setnof(int a[]) 
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			nof[i] = a[i];
//		}
//	}
//	void setnos(int a[])
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			nos[i] = a[i];
//		}
//	}*/
//	void printinfo()
//	{
//		int i = 0;
//		cout << "name:" << departementname << endl;
//		cout << "faculty members" << nof << endl;
//		cout << "staff members" << nos << endl;
//	}
//};
//class universitycampus {
//	char* campusname;
//	departement* departements[20];
//public:
//	universitycampus(char p[7], char* a[20], int f[], int s[])
//	{
//		campusname = p;
//		/*departement x;
//		departement y;
//		departement z;*/
//		/*departements[0] = &x;
//		departements[1] = &y;
//		departements[2] = &z;*/
//		for (int i = 0; i < 3; i++)
//		{
//			departements[i] = new departement(a,f,s);
//			/*departements[i]->setname(a);
//			departements[i]->setnof(f);
//			departements[i]->setnos(s);*/
//		}
//		/*departement x;
//		departements = &x;*/
//	}
//	void printcampusdetails()
//	{
//		cout << "campus name:" << campusname << endl;
//		for (int i = 0; i < 3; i++)
//		{
//			departements[i]->printinfo();
//		}
//	}
//};
//int main()
//{
//	char dpts[][20] = { "CS","EE","A&F" };
//	int faculty[] = { 46,33,23 }, staff[] = { 4,3,5 };
//	char p[] = "lahore";
//	universitycampus lhr(p, dpts, faculty, staff);
//	lhr.printcampusdetails();
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Mystring {
//	char* cstr=new char[10];
//	int size;
//public:
//	Mystring()
//	{
//		//cstr = nullptr;
//		size = 0;
//	}
//	Mystring( char b[], int s)
//	{
//		cstr = b;
//		size = s;
//	}
//	void set(char b[])
//	{
//		cstr = b;
//	}
//	string get()
//	{
//		cout << cstr << endl;
//		return cstr;
//	}
//};
//class gun {
//	Mystring title;
//	int id;
//	int bulletcapacity;
//	int noofbullets;
//	float firespeed;
//	int damageperbulet;
//public:
//	gun()
//	{
//		id = 0;
//		bulletcapacity = 0;
//		noofbullets = 0;
//		firespeed = 0;
//		damageperbulet = 0;
//	}
//	gun(int i, char*t, int b, int n, float f, int d)
//	{
//		id = i;
//		title.set(t);
//		bulletcapacity = b;
//		noofbullets = n;
//		firespeed = f;
//		damageperbulet = d;
//	}
//	void setid(int i)
//	{
//		id = i;
//	}
//	void setgun(char g[])
//	{
//		title.set(g);
//	}
//	void setbulletcapacity(int b)
//	{
//		bulletcapacity = b;
//	}
//	void setnoofbullets(int n)
//	{
//		noofbullets = n;
//	}
//	void setfirespeed(float f)
//	{
//		firespeed = f;
//	}
//	void damageperbullet(int a)
//	{
//		damageperbulet = a;
//	}
//	void display()
//	{
//		cout << "id:" << id << endl;
//		cout << "title:" << title.get() << endl;
//		cout << "bullet capacity:" << bulletcapacity << endl;
//		cout << "no of bullets:" << noofbullets << endl;
//		cout << "firespeed:" << firespeed << endl;
//		cout << "damage per bullet:" << damageperbulet << endl;
//	}
//	void reload()
//	{
//		noofbullets -= bulletcapacity;
//	}
//	void fire()
//	{
//		bulletcapacity--;
//		noofbullets--;
//	}
//};
//class inventory {
//	gun* Gun[100];
//	bool* gunstatus[100];
//	int guncount=0;
//	
//public:
//	inventory()
//	{
//		guncount = 0;
//		
//		gunstatus[0] = nullptr;
//	}
//	void setgun(char a[])
//	{
//		gun b;
//		for (int i = 0; i < 2; i++)
//		{
//			Gun[i] = &b;
//		}
//		Gun[guncount]->setgun(a);
//		Gun[guncount]->setbulletcapacity(6);
//		Gun[guncount]->setnoofbullets(100);
//		Gun[guncount]->setfirespeed(1);
//		Gun[guncount]->damageperbullet(1);
//		guncount++;
//		
//	}
//	void display()
//	{
//		cout << "the total guns are:" << guncount << endl;
//		for (int i = 0; i < guncount; i++)
//		{
//			Gun[i]->display();
//		}
//	}
//};
//class player {
//	Mystring username;
//	int health;
//	int activegun;
//public:
//	player()
//	{
//		username.set(nullptr);
//		/*health = 0;
//		activegun = 0;*/
//	}
//	player( char u[],int h, int a)
//	{
//		username.set(u);
//		health = h;
//		activegun = a;
//	}
//	void firetarget(player enemy)
//	{
//	}
//	void receivedamage(int damage)
//	{
//		health -= damage;
//
//		if (health == 0)
//		{
//			cout << "player has died" << endl;
//		}
//	}
//	void changegun()
//	{
//		if (activegun != 3)
//		{
//			activegun++;
//		}
//		else
//			activegun--;
//	}
//	int getactivegun()
//	{
//		return activegun;
//	}
//	int gethealth()
//	{
//		return health;
//	}
//	void displayInfo()
//	{
//		cout << "name of the player:" << username.get() << endl;
//		cout << "health:" << health << endl;
//		cout << "active gun:"<<activegun << endl;
//	}
//	
//};
//int main()
//{
//	char x[] = "kar-98";
//	char y[] = "uzi";
//	gun p1gun;
//	gun p1gun2;
//	gun p1gun3;
//	gun p2gun1;
//	gun p2gun2;
//	gun p2gun3;
//	gun* z[10];
//	z[0] = &p1gun;
//	z[1] = &p1gun2;
//	z[2] = &p1gun3;
//	z[3] = &p2gun1;
//	z[4] = &p2gun2;
//	z[5] = &p2gun3;
//	for (int i = 0; i < 3; i++)
//	{
//		z[i]->setgun(x);
//		z[i]->setbulletcapacity(6);
//		z[i]->setnoofbullets(100);
//		z[i]->setfirespeed(1);
//		z[i]->damageperbullet(1);
//	}
//	for (int i = 3; i < 6; i++)
//	{
//		z[i]->setgun(y);
//		z[i]->setbulletcapacity(10);
//		z[i]->setnoofbullets(60);
//		z[i]->setfirespeed(1);
//		z[i]->damageperbullet(1);
//	}
//	char s[] = "bhrva";
//	char b[] = "dalla";
//	player p1(s,6,1);
//	player p2(b,6,1);
//	p1.displayInfo();
//	p2.displayInfo();
//	for (int i = 0; i < 6; i++)
//	{
//		p2.receivedamage(1);
//		if (i == 1 || i == 3)
//		{
//			p1.changegun();
//		}	 
//		z[p1.getactivegun()-1]->fire();
//		if (p2.gethealth() == 0)
//		{
//			cout << "\n\n-------player 1 killed player 2-------- - \n\n" << endl;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		p1.receivedamage(1);
//		z[p2.getactivegun()+2]->fire();
//		if (i != 0)
//		{
//			p2.changegun();
//		}
//	}
//	p1.displayInfo();
//	p2.displayInfo();
//	for (int i = 0; i < 6; i++)
//	{
//		if (i < 3)
//		{
//			cout << "-------info of player 1 guns:--------" << endl;
//		}
//		else
//			cout << "------info of player 2 guns:-------" << endl;
//		z[i]->display();
//	}
//}
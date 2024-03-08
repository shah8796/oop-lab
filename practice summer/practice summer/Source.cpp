//#include<iostream>
//using namespace std;
//class Set {
//	int* data=new int[100];
//	int noOfelements;
//	double capacity;
//public:
//	Set(int cap = 0)
//	{
//		capacity = cap;
//		noOfelements = 0;
//		//data = nullptr;
//	}
//	Set(const Set& ref)
//	{
//		noOfelements = ref.noOfelements;
//		for (int i = 0; i < ref.noOfelements; i++)
//		{
//			data[i] = ref.data[i];
//		}
//		capacity = ref.capacity;
//	}
//	void insert(int element)
//	{
//		noOfelements = element;
//		cout << "insert capacity:" << endl;
//		cin >> capacity;
//		if (noOfelements > capacity)
//		{
//			capacity *= 2;
//		}
//		cout << "insert the elements:" << endl;
//		for (int i = 0; i < noOfelements; i++)
//		{
//			cin >> data[i];
//		}
//	}
//	/*void remove(int element)
//	{
//		noOfelements = element;
//		if (noOfelements <= (capacity / 2))
//		{
//			capacity -= (0.25 * capacity);
//		}
//		cout << "new capacity:"<<capacity << endl;
//
//	}*/
//	int getcardianality()const
//	{
//		cout << noOfelements << endl;
//		return noOfelements;
//	}
//	Set calcUnion(const Set& s2) const
//	{
//		Set a;
//		a.noOfelements = this->noOfelements + s2.noOfelements;
//		for (int i = 0; i < this->noOfelements; i++)
//		{
//			a.data[i] = this->data[i];
//			for (int j = 0; j < s2.noOfelements; j++)
//			{
//				if (s2.data[i] != this->data[j])
//				{
//					a.data[this->noOfelements + i] = s2.data[i];
//				}
//			}
//		}
//		for (int i = 0; i < a.noOfelements; i++)
//		{
//			cout << a.data[i] << endl;
//		}
//		return a;
//	}
//	Set calcDifference(const Set& s2)
//	{
//		Set b;
//		int count = 0;
//		for (int i = 0; i < this->noOfelements; i++)
//		{
//			for (int j = 0; j < s2.noOfelements; j++)
//			{
//				if (s2.data[i] == this->data[j])
//				{
//					b.data[count] = s2.data[i];
//					count++;
//				}
//			}
//		}
//		for (int i = 0; i < count; i++)
//		{
//			cout << b.data[i] << endl;
//		}
//		return b;
//	}
//	Set calcSymmetricDifference(const Set& s2)
//	{
//		Set x;
//		x = calcUnion(s2);
//		Set b;
//		b = calcDifference(s2);
//		/*int count = 0;
//		for (int i = 0; i < this->noOfelements; i++)
//		{
//			for (int j = 0; j < s2.noOfelements; j++)
//			{
//				if (s2.data[i] == this->data[j])
//				{
//					b.data[count] = s2.data[i];
//					count++;
//				}
//			}
//		}*/
//		Set c;
//		for (int i = 0; i < x.noOfelements; i++)
//		{
//			c.data[i] = x.data[i] - b.data[i];
//		}
//		for (int i = 0; i < c.noOfelements; i++)
//		{
//			cout << c.data[i] << endl;
//		}
//		return c;
//	}
//	int isMember(int val) const
//	{
//		int count = 0;
//		for (int i = 0; i < noOfelements; i++)
//		{
//			if (data[i] == val)
//			{
//				return 1;
//				count++;
//			}
//			else
//				return 0;
//		}
//		if (count > 0)
//		{
//			cout << 1 << endl;
//		}
//		else
//			cout << 0 << endl;
//	}
//	int isSubSet(const Set& s2) const
//	{
//		int count = 0;
//		for (int i = 0; i < this->noOfelements; i++)
//		{
//			if (this->data[i] == s2.data[i])
//			{
//				count++;
//			}
//		}
//		if (count == this->noOfelements)
//		{
//			cout << 2 << endl;
//			return 2;
//		}
//		else if (count < this->noOfelements && count == s2.noOfelements)
//		{
//			cout << 1 << endl;
//			return 1;
//		}
//		else
//		{
//			cout << 0 << endl;
//			return 0;
//		}
//		
//	}
//	void reSize(int newcapacity)
//	{
//		capacity = newcapacity;
//
//	}
//	void update(int prVal, int curVal)
//	{
//		int count = 0;
//		for (int i = 0; i < noOfelements; i++)
//		{
//			for (int j = 0; j < noOfelements; j++)
//			{
//				if (data[i] == prVal&&data[j]!=curVal)
//				{
//					data[i] = curVal;
//					count++;
//				}
//				if (data[i] == prVal && data[j] == curVal)
//				{
//					cout << "Violation set property.Can’t Modify the data" << endl;
//				}
//			}
//		}
//		if (count > 0)
//		{
//			cout << "Record update successfull" << endl;
//		}
//		else
//			cout << "Target value not found" << endl;
//	}
//	void show() const
//	{
//		cout << "contents of the set are :" << endl;
//		for (int i = 0; i < noOfelements; i++)
//		{
//			cout << this->data[i] << endl;
//		}
//	}
//	/*~Set()
//	{
//		delete[] data;
//	}*/
//
//};
//int main()
//{
//	Set a;
//	a.insert(10);
//	Set b(a);
//	Set c;
//	c.insert(10);
//	//a.remove(10);
//	cout << "getcardianality" << endl;
//	a.getcardianality();
//	cout << "calcUnion" << endl;
//	a.calcUnion(c);
//	cout << "calcSymmetricDifference" << endl;
//	a.calcSymmetricDifference(c);
//	cout << "calcDifference" << endl;
//	a.calcDifference(c);
//	cout << "isMember" << endl;
//	a.isMember(5);
//	cout << "isSubSet" << endl;
//	a.isSubSet(c);
//	cout << "update" << endl;
//	a.update(3,10);
//	cout << "reSize" << endl;
//	a.reSize(6);
//	cout << "show" << endl;
//	a.show();
//}
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	struct student
	{
		string name;
		int age;
		string tel;
	};
	int i;
	struct student *ptr = new struct student [2];
	for (i=0;i<2;i++)
	{
		cout << "��J��" << i+1 << "�Ӿǥͪ��W�r:";
		cin >> ptr[i].name;
		cout << "�~��:";
		cin >> ptr[i].age;
		cout << "�q��:";
		cin >> ptr[i].tel; 
	}
	
	for (i=0;i<2;i++)
	{
		cout << "��" << i+1 << "�Ӿǥͪ��W�r:" 
		     << ptr[i].name;
		cout << "\t�~��:" << ptr[i].age;
		cout << "\t�q��:" << ptr[i].tel << endl; 
	}
	
	delete [] ptr;
	
	ptr = NULL;
	system("pause");
	return 0;
} 

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	struct student
	{
		string code;
		string name;
		int age;
		string tel;
		string address;
		void inputdata()
		{
			cout << "��J�Ǹ�:";
			getline(cin,code);
			cout << "��J�m�W:";
			getline(cin,name);
			cout << "��J�~��:";
			cin >> age;
			
			cin.sync();
			cout << "��J�q��:";
			getline(cin,tel);
			cout << "��J�a�}:";
			getline(cin,address); 
		}
		void printdata()
		{
			cout << code <<'\t'
			     << name << '\t'
			     << age << '\t'
			     << tel << '\t'
			     << address << endl;
		}
	};
	
	struct student first={
	"123201","�L�ѻ�",25,"095888xxxx","����" 
	};
	struct student second[2]={
		{"123202","�����g",24,"095888xxxx","�O�W"},
		{"993201","�c�۾�",27,"095168xxxx","�O�W"} 
	};
	struct student *three=&first;
	int i;
	cout << "�Ǹ�\t�m�W\t�~��\t�q��\t\t��}"<<endl; 
	first.printdata();
	
	
	for (i=0;i<=1;i++)
	    second[i].printdata();
	    
	three->printdata();
	
	system("pause");
	return 0;
} 

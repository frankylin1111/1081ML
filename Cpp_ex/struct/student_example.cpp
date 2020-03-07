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
			cout << "輸入學號:";
			getline(cin,code);
			cout << "輸入姓名:";
			getline(cin,name);
			cout << "輸入年齡:";
			cin >> age;
			
			cin.sync();
			cout << "輸入電話:";
			getline(cin,tel);
			cout << "輸入地址:";
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
	"123201","林書豪",25,"095888xxxx","美國" 
	};
	struct student second[2]={
		{"123202","曾雅妮",24,"095888xxxx","臺灣"},
		{"993201","盧彥勳",27,"095168xxxx","臺灣"} 
	};
	struct student *three=&first;
	int i;
	cout << "學號\t姓名\t年齡\t電話\t\t住址"<<endl; 
	first.printdata();
	
	
	for (i=0;i<=1;i++)
	    second[i].printdata();
	    
	three->printdata();
	
	system("pause");
	return 0;
} 

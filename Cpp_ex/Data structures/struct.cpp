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
		int money;
		char a = '\n';
		
		void inputdata()
		{
			cout << "�п�J�Ǹ�:";
			cin >> code;
			cout << "�п�J�m�W:";
			cin >> name;
			cout << "�п�J�~��:";
			cin >> age;
			
			cin.sync();
		}
		
		void outputdata()
		{
			cout << "�A���Ǹ���:" << code << a << "�A���m�W:" << name << a << "�A���~��:" << age; 
		}
		
		int total()
		{
			int m;
			cin >> m;
			money += m;
			
			return money; 
		}
	};
	struct student jo;
	jo.inputdata();
	int money = jo.total();
	cout << '\n';
	system("cls");
	jo.outputdata();
	cout << '\n' << "�A��������:" << money; 
}

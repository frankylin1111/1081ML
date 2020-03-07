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
			cout << "請輸入學號:";
			cin >> code;
			cout << "請輸入姓名:";
			cin >> name;
			cout << "請輸入年紀:";
			cin >> age;
			
			cin.sync();
		}
		
		void outputdata()
		{
			cout << "你的學號為:" << code << a << "你的姓名:" << name << a << "你的年紀:" << age; 
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
	cout << '\n' << "你的金錢為:" << money; 
}

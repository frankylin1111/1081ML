#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	char *name[3]={"剪刀","石頭","布"};
	char input;
	int people,computer;
    srand((unsigned)time_t(NULL));
	cout << "這是人與電腦一起玩的剪刀石頭布遊戲.\n";
	while(1)
	{
		cout << "你出什麼? (0:剪刀 1:石頭 2:布Enter:結束)";
		input=getche();
		if (input=='\r')
		{
			cout << "\n遊戲結束.\n";
			break;
		}
		if (input<'0' || input>'2')
		{
			cout <<"\n你選的資料不是0,1,2,重新選一次.\n";
			continue;
		}
		people=input-48;
		computer=rand()%3;
		cout << "\n你出:" << name[people] << '\n';
		cout << "電腦出:" << name[computer] << '\n';
		if (people==computer)
		  cout << "平手! \n";
		else if (people-computer == 1 || people-computer == -2)
		  cout << "您贏了! \n";
		else
		  cout << "你輸了! \n"; 
	}
	
	system("pause");
	return 0;

}

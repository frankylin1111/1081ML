#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	char *name[3]={"�ŤM","���Y","��"};
	char input;
	int people,computer;
    srand((unsigned)time_t(NULL));
	cout << "�o�O�H�P�q���@�_�����ŤM���Y���C��.\n";
	while(1)
	{
		cout << "�A�X����? (0:�ŤM 1:���Y 2:��Enter:����)";
		input=getche();
		if (input=='\r')
		{
			cout << "\n�C������.\n";
			break;
		}
		if (input<'0' || input>'2')
		{
			cout <<"\n�A�諸��Ƥ��O0,1,2,���s��@��.\n";
			continue;
		}
		people=input-48;
		computer=rand()%3;
		cout << "\n�A�X:" << name[people] << '\n';
		cout << "�q���X:" << name[computer] << '\n';
		if (people==computer)
		  cout << "����! \n";
		else if (people-computer == 1 || people-computer == -2)
		  cout << "�zĹ�F! \n";
		else
		  cout << "�A��F! \n"; 
	}
	
	system("pause");
	return 0;

}

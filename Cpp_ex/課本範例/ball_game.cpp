/*
    2018/9/29 
    �D��:
	��50���y ,��ӤH���ۨ��y  , �C�H�u��� 1  or 2 or 3 ���y,
	�̫�@�쮳���y���N��F
	 
*/
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int ball = 50,k=0,get,i=0;
	char people[2] = {'A','B'};
	while(ball >0)
	{
		k = i%2;
		i++;
		cout << people[k] << ":";
		cin >> get;
		if (get >=1 && get <=3 && (ball-get) >= 0)
		{
			ball= ball -get;
		}
		else
		{
			i--;
			continue;
		}
		cout << "�y�٦�" << ball << "��" <<endl;
	}
	cout << people[k] << "��F";
}

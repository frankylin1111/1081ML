#include <iostream>
#include <cstdlib>
#include "credict.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int c[8];
int main(int argc, char** argv) {
	
	int n,sum;
	for (register int i=0;i<8;i++)
	{
		cout << "�п�J��" << (i/2)+1 << "�~";
		if ((i%2) == 0)
		    cout << "���W�Ǵ��Ǥ���:";
		else
		    cout << "���U�Ǵ��Ǥ���:";
		cin >> n;
		credit (n);
	}
	for (register int j=0;j<8;j++)
	{
		sum = sum +c[j];
	}
	cout << "�j��4�~���`�Ǥ��Ƭ�" << sum; 
	return 0;
}

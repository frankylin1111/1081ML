#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	int q,a[10];
	for (int i=0;i<10;i++)
	{
		cin >> q;
		*(a+i) = q;
	}
	cout << "�п�J�A�Q�d�M����:";
	cin >> q;
	for (int j=0;j<10;j++)
	{
		if (*(a+j) == q)
		{
			cout << "���o!!�A���F�b��" << j+1 << "��" << endl;
			break;
		}   
	} 
} 

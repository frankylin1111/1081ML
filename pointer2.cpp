#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	char a[5][11],search[11];
	char *b[5];
	for (int i=0;i<5;i++)
	{
		cin >> a[i];
		cout << &a[i] << endl;
	}
	for (int k=0;k<5;k++)
	{
	    b[k] = a[k];
	}
	cout << "請輸入:";
	cin >> search;
	for (int j=0;j<5;j++)
	{
		if ( (string) b[j] ==  (string) search)
		{
			cout << "找到了!" << b[j];
			break;
		}
	 } 
} 

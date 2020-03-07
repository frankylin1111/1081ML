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
	cout << "請輸入你想查尋的數:";
	cin >> q;
	for (int j=0;j<10;j++)
	{
		if (*(a+j) == q)
		{
			cout << "哈囉!!你找到了在第" << j+1 << "個" << endl;
			break;
		}   
	} 
} 

/*
    Call by address
    �ϥΰ}�C�@�����Ѽ� 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int biggest(int *,int);
int main()
{
	int num[5];
	for (int i=0;i<5;i++)
	{
		cout << "��J��" << i+1 << "�Ӿ��:";
		cin >> num[i]; 
	}
	cout << "�̤j��=" << biggest(&num[0],5) << '\n';
	system("pause");
	return 0;
}
int biggest(int *d,int n)
{
	int i,big;
	for (int i=0;i<n;i++)
	{
		if (big<*(d+i))
		    big = *(d+i);
	}
	return big;
 } 

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int k;
	int **a = new int *[3];
	for (int i=0;i<3;i++)
	{
		a[i] = new int [4];
	}
	for (int j=0;j<12;j++)
	{
	    k = j/4;
		cout << "�п�J��" << k+1 << "�~��" << (j%4)+1 << "�u����~�B:"; 
		cin >> a[j/4][j%4];
	}
	for (int q=0;q<3;q++)
	{
		k = (a[q][0]+a[q][1]+a[q][2]+a[q][3])/4;
		cout << "��" << q+1 << "�~��������~�B:" << k <<endl;
	}
	for (int b=0;b<3;b++)
	    delete [] a[b];
	delete [] a;
	a = NULL;
	system("pause");
	return 0;
} 

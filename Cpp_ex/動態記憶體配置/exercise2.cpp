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
		cout << "請輸入第" << k+1 << "年第" << (j%4)+1 << "季的營業額:"; 
		cin >> a[j/4][j%4];
	}
	for (int q=0;q<3;q++)
	{
		k = (a[q][0]+a[q][1]+a[q][2]+a[q][3])/4;
		cout << "第" << q+1 << "年的平均營業額:" << k <<endl;
	}
	for (int b=0;b<3;b++)
	    delete [] a[b];
	delete [] a;
	a = NULL;
	system("pause");
	return 0;
} 

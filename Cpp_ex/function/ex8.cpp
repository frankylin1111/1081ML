/*
    反轉矩陣   
	ex:  5X3  transform  3X5
	自訂函式 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
void transform(int *,int,int);
int main()
{
	int a[5][3];
	for (int i=0;i<15;i++)
	{
		cout << "請輸入第" << i+1 << "個數字:";
		cin >> a[i/3][i%3];
	}
	for (int j=0;j<15;j++)
	{
	    if (j%3 == 0)  cout << endl;
		cout << a[j/3][j%3] << " ";
	}
	cout << '\n' << '\n';
	transform(&a[0][0],5,3);
	system("pause");
	return 0;
} 
void transform(int *d,int m,int n)
{
    for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cout << *(d+j*n+i) << ' ';
		}
		cout << '\n';
	}	
}

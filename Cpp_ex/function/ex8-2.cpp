#include <iostream>
#include <cstdlib>
using namespace std;
int transform(int *,int,int,int,int);
int main()
{
	int a[5][3],x;
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
	cout << endl << endl;
	transform(&a[0][0],5,3,0,0);

}
int transform(int *d,int m,int n,int p,int k)
{
	if (n == k)
	{
		cout << '\n';
    }
    else if (p !=m)
    {
    	cout << *(d+p*n+k) << " ";
    	return transform(d,m,n,++p,k);
	}
	else if (n!=k)
	{
		cout << '\n';
		return transform(d,m,n,0,++k);
	}
}

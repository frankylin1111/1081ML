#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void digit_2(int *d)
{
	int l=0,m=*d,n;
	while(m!=0)
	{
		l++;
		m = m >> 1;
	}
	for (int i=l-1;i>=0;i--)
	{
		n = 1 << i;
		if ((n & *d)>0)
		    cout << "1";
		else
		    cout << "0";
	}
}
int main()
{
	int n;
	cout << "�п�J�@�ӼƦr:";
	cin >> n;
	cout << "2�i��:";
	digit_2(&n);
}

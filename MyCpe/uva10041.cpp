/*
    UVA 10041 Vito's Family
    2019/10/1
    Accepted !!
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	int a,n;
	scanf("%d\n" , &a);
	while(a--)
	{
		cin >> n;
		int b[n],q=0,p=0,sum=0;
		for (int i=0;i<n;i++)
		{
			cin >> b[i]; 
		}
		sort(&b[0],&b[n]);
		q = n%2;
		if (q ==0)
		{
			p = b[(n/2)-1]+p;
			p = p + b[n/2];
			p = p/2;
		}  
		else
		{
			p = b[(n/2)];
		}
		    
		for (int i=0;i<n;i++)
		{
			sum = sum+abs(b[i]-p); 
		}
		cout << sum << endl;
	}
}

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void reverse(char a[],int i)
{
	if (i == 0)
	    cout << a[i];
	else if ((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
	{
		cout << a[i];
		reverse(a,--i);
	}    
	else
	{
		reverse(a,--i);
	}  
}
int main()
{
	char a[11];
	cin >> a;
	reverse(a,11);
	//cout <<endl<<a[5]<<a[4];
}

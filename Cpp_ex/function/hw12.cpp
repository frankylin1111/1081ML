#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int combine(int m,int n)
{
	if (m<n)
	    return 0;
	else if (n == 0)
	    return 1; 
	else if (m == n)
		return 1;
	else if (n ==1)
	    return m;
	else if (m>n) 
	    return combine(m-1,n)+combine(m-1,n-1);
}
int main()
{
	int m,n;
	cin >> m;
	cin >> n;
	cout << combine(m,n);
}

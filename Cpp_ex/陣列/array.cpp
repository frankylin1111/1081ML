#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	int a[2][2],b[2][2];
	for (int i=0;i<4;i++)
	{
		cin >> a[i/2][i%2];
		cin >> b[i/2][i%2];
	}
	for (int j=0;j<4;j++)
	{
		cout << a[j/2][j%2] * b[j/2][j%2] << "   ";
		if (j == 1)
		    cout << '\n';
	}
} 

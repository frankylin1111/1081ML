#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n,dec_n,position,mask;
	cin >> n;
	dec_n = n;
	cout << "�K�i�쬰:";
	while(n!=0)
	{
		//cout.setf(ios::left);
		mask= n & 7;
		cout << mask;
		n=n>>3;
	}
	cout << '\n';
} 

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int fac(int n)
{
	if (n == 1 || n == 0)
	    return 1;
	else
	    return n*fac(n-1);
}
int main()
{
	int number;
	cout << "�п�J�@�ӼƦr:";
	cin >> number;
	cout << fac(number);
}

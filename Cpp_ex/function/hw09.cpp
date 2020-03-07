#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int fib(int n)
{
	if (n == 1 || n == 0)
	    return 1;
	else
	    return fib(n-1)+fib(n-2);
}
int main()
{
	int number;
	cout << "請輸入費氏數列:";
	cin >> number;
	cout << fib(number);
}

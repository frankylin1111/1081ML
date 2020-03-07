#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int find_sum(int *d)
{
	int sum = 0;
	for (int i=0;i<7;i++)
	{
		sum = sum+*(d+i);
	}
	return sum;
}

int main()
{
	int a1[7];
	for (int i=0;i<7;i++)
	{
		cout << "請輸入第" << i+1 << "個數:";
		cin >> a1[i]; 
	}
	cout << find_sum(a1);
}

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int *ptr = new int [10],sum=0;
	for(int i=0;i<10;i++)
	{
		cout << "請輸入第" << i+1 << "個元素:";
		cin >> ptr[i];
	}
	for (int j=0;j<10;j++)
	{
		sum = sum + ptr[j];
	}
	cout << sum;
} 

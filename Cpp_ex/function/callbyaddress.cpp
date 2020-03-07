/*
    Call by address
    使用陣列作虛擬參數 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int biggest(int *,int);
int main()
{
	int num[5];
	for (int i=0;i<5;i++)
	{
		cout << "輸入第" << i+1 << "個整數:";
		cin >> num[i]; 
	}
	cout << "最大者=" << biggest(&num[0],5) << '\n';
	system("pause");
	return 0;
}
int biggest(int *d,int n)
{
	int i,big;
	for (int i=0;i<n;i++)
	{
		if (big<*(d+i))
		    big = *(d+i);
	}
	return big;
 } 

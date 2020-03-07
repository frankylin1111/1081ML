#include <iostream>
#include <cstdlib>
using namespace std;
void sort(int [],int);
int main()
{
	int a1[5]={5,4,3,2,1};
	cout << "排序前:";
	for (int i=0;i<5;i++)
	{
		cout << a1[i] << "  ";
	}
	cout << endl;
	sort(a1,5);
	cout << "排序後:";
	for (int j=0;j<5;j++)
	{
		cout << a1[j] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}

void sort(int b[],int n)
{
	int biggest;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (b[i]<b[j])
			{
				biggest = b[i];
				b[i] = b[j];
				b[j] = biggest;
			}
		}
	}
}

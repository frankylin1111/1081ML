#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
using namespace std;
void len(int *a,int n)
{
	int change;
	for (int i=n-1;i>=0;i--)
	{
		int ori=*(a+i);
		for (int j=i-1;j>=0;j--)
		{
			if (ori<*(a+j))
			{
				change =ori;
				ori = *(a+j);
				*(a+j)=change;
			}
		}
		*(a+i) = ori;
	}
}
int main()
{
	int n[10];
	for (int i=0;i<10;i++)
	{
		cout <<"�п�J��" << i+1 <<"��P�Ǫ����Z:";
		cin >> n[i]; 
	}
	cout << "�Ƨǫe�����Z:";
	for (int o =0;o<10;o++)
	{
		cout << n[o] << '\t';
	}
	cout << endl;
	len(n,10);
	cout << "�Ƨǫ᪺���Z:";
	for (int g =0;g<10;g++)
	{
		cout << n[g] << '\t';
	}
 } 

/*------------- 2019/09/07 ---------------
    UVA 490  1���P 
    1. �r���}�C�r�ꤣ�|�ϥ�
	2. �Ѧҵ��� 
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	char a[105][105]={{' '}};  // ��l�Ʀr���}�C 
	int k=0,q =1,i=0,f;
	while(gets(a[i]))
	{
		k++;
		if (strlen(a[i])>=q)
		{
			q = strlen(a[i]);
		}
		i++;
	}
	f = k-1;
	for (int j = 0;j<q;j++)
	{
		for (int o = f;o>=0;o--)
		{
			if (a[o][j] == '\0' || a[o][j] == ' ')
			{
				cout << " ";
			}
			else
			{
				cout << a[o][j];
			}
		}
		cout << endl;
	}
} 

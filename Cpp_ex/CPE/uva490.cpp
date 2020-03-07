/*------------- 2019/09/07 ---------------
    UVA 490  1顆星 
    1. 字元陣列字串不會使用
	2. 參考答案 
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	char a[105][105]={{' '}};  // 初始化字元陣列 
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

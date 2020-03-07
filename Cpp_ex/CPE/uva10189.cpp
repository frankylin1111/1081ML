/*        2019/9/13
    uva 10189   一顆星
    
	1. presentation error // 除了第一行輸出的地雷段不用空一格外 , 
	第二行輸出都要空一格在輸出
	2. Wrong Answer  //  沒有判斷好字元陣列的參數值,及格數 
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	int n,m,k=0;
	while(cin >> n && cin >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		if (k!=0)  cout << endl;
		int c=0,q=0;
		char mines[n][m]={{' '}},contain;
		k++;
		for (int i = 0 ;i<n;i++)
		{
			cin >> contain;
			mines[i][c] = contain;
			c++;
			if (c == m)
			{
				c =0;
			}
			else
			{
				i--;
			}
		}
		cout << "Field #" << k << ":" << endl;
		for (int j=0;j<n;j++)
		{
			for (int s=0;s<m;s++)
			{
				if (mines[j][s] == '*')
				{
					cout << '*';
				}
				
				else
				{
					if (((j-1) >=0) && ((s-1) >=0) && mines[j-1][s-1] == '*')
					{
						q++;
					}
					if (((j-1) >=0) && mines[j-1][s] == '*')
					{
						q++;
					}
					if (((j-1) >=0) && (s+1) <m && mines[j-1][s+1] == '*')
					{
						q++;
					}
					if ((s-1) >=0 && mines[j][s-1] == '*')
					{
						q++;
					}
					if ((s+1) <m && mines[j][s+1] == '*')
					{
						q++;
					}
					if (((j+1) <n) && ((s-1) >=0) && mines[j+1][s-1] == '*')
					{
						q++;
					}
					if (((j+1) <n) && mines[j+1][s] == '*')
					{
						q++;
					}
					if (((j+1) <n) && ((s+1) <m)&& mines[j+1][s+1] == '*')
					{
						q++;
					}
					cout << q;
					q =0;
				}
			}
			cout << endl;
		}
		
	}
 } 

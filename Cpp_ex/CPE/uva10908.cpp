/*
    ---------------- 2020/4/5 ----------------------
    1. correct!!
    2. 要宣告超過極限陣列才可以!! 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int row = 0,col = 0,total = 0,check_1 = 0,a_1=0,b_1=0,test = 0;
		cin >> row >> col >> test;
		char a[row+1][col+1]={0};
		for (int i=0;i<row;i++)
		{
			for (int j=0;j<col;j++)
			{
				cin >> a[i][j];
			}
		}
		cout << row << " "<< col <<" "<< test << endl;
		for (int t = 0;t<test;t++)
		{
			cin >> a_1 >> b_1;
			total = 0;
			check_1 = 0;
			while(true)
			{
				for (int i=a_1-total;i<=a_1+total;i++)
		        {
					for(int j=b_1-total;j<=b_1+total;j++)
					{
						if (a[i][j] != a[a_1][b_1])
						{
							check_1 = 1;
						}
					}
		        }
				if (check_1 == 1)
				{
					break;
				}
				total++;
			}
			cout << (total*2)-1 << endl;
		}
    }
}

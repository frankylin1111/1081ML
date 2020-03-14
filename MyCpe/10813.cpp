/*
    2019/11/12
    UVA 10813 
    1.題目理解不清楚   加油!! 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a;
	scanf("%d\n",&a);
	while(a--)
	{
		int b=0,c=0,d[5][5]={0},number[75]={0};
		for (int i=0;i<25;i++)
		{
		    if ((i/5) == 2 && (i%5) == 2)
		    {
		    	d[i/5][i%5] = 0;
		    	continue;
			}
			cin >> d[i/5][i%5];
		}
		for (int i=0;i<75;i++)
		{
			scanf("%d",&number[i]);
		}
		for(int i=0;i<75;i++)
		{
			for (int j=0;j<25;j++)
			{
				if (d[j/5][j%5] == number[i])
				{
					d[j/5][j%5] = 0;
					break;
				}
			}
			if ((d[0][0]+d[0][1]+d[0][2]+d[0][3]+d[0][4]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[1][0]+d[1][1]+d[1][2]+d[1][3]+d[1][4]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[2][0]+d[2][1]+d[2][2]+d[2][3]+d[2][4]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[3][0]+d[3][1]+d[3][2]+d[3][3]+d[3][4]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[4][0]+d[4][1]+d[4][2]+d[4][3]+d[4][4]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[0][0]+d[1][0]+d[2][0]+d[3][0]+d[4][0]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[0][1]+d[1][1]+d[2][1]+d[3][1]+d[4][1]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[0][2]+d[1][2]+d[2][2]+d[3][2]+d[4][2]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[0][3]+d[1][3]+d[2][3]+d[3][3]+d[4][3]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[0][4]+d[1][4]+d[2][4]+d[3][4]+d[4][4]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[0][0]+d[1][1]+d[2][2]+d[3][3]+d[4][4]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
			else if ((d[0][4]+d[1][3]+d[2][2]+d[3][1]+d[4][0]) == 0)
			{
				printf("BINGO after %d numbers announced\n", i+1);
				break;
			}
		}
	}
}

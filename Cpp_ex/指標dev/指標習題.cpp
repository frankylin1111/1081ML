#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;
int main()
{
	int change,score[6]={65,73,45,92,79,52};
	cout <<"排序前的成績:";
	for (int i=0;i<6;i++)
	{
		cout << *(score+i) << " ";
	}
	cout << endl << "排序後的成績:";
	for (int j=5;j<=0;j--)
	{
		for (int p =j-1;p<=0;p--)
		{
			if (score[j]<score[p])
			{
				change = score[j];
				score[j] = score[p];
				score[p] = change;
			}
		}
	}
	for (int k=0;k<6;k++)
	{
		cout << *(score+k) << " ";
	}
}

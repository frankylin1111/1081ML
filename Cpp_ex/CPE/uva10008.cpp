/*     2019/9/13
       uva 10008   一顆星
	   1.scanf() 及 cin 緩衝區的問題 
	   2.使用scanf()比較好 
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	char buffer[200];
	int n,maxlen,num,a[26]={0},q=-1,p=0;
	scanf("%d\n",&n);
	while(n--)
	{
		gets(buffer);
		maxlen = strlen(buffer);
		//cout << buffer << endl;
		for (int i=0;i<maxlen;i++)
		{
			if ((int) buffer[i]>=65 && (int) buffer[i] <=90)
			{
				num = ((int) buffer[i]) -65;
				a[num] = a[num]+1; 
			}
			else if ((int) buffer[i]>=97 && (int) buffer[i] <=122)
			{
				num = ((int) buffer[i]) -97;
				a[num] = a[num]+1;
			}
		}
	}
	for (int j=0;j<26;j++)
	{
		if (a[j]>q)
		{
			q = a[j];
			p = j + 65;
		}
		
		if (j == 25 && q ==0)
		{
			break;
		}
		else if (j == 25 && q != 0)
		{
			cout << (char) p << " " << q << endl;
			j=-1;
			a[p - 65] = 0;
			p =0;
			q =-1;
		}
	}
} 

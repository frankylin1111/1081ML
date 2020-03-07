#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stack>
using namespace std;
int main()
{
	char a;
	int a1[8][4]={{1,2,-1,-1},{0,3,4,-1},{0,5,6,-1},{1,7,-1,-1},{1,7,-1,-1},{2,7,-1,-1},{2,7,-1,-1},{3,4,5,6}}
	,a2[8]={-1,-1,-1,-1,-1,-1,-1,-1},num,find=1,j=0;
	stack<int>myints;
	cout << "This is a DFS search:";
	a = getchar();
	num = a-65;
	a2[0] = num;
	cout << "The first:" << char (65+a2[0]) << endl;
	while(find != 8)
	{
	    j =0;
		for (int i=3;i>=0;i--)
		{
			if (a1[num][i] != -1)
			    myints.push(a1[num][i]);
		}
		while(j!=8)
		{
			if (a2[j] != -1)
			{
				if (a2[j] == myints.top())
				{
					myints.pop();
					j = -1;
			    }
			}
			j++;
		}
		cout << endl;
		cout << find;
		a2[find] = myints.top();
		num = myints.top();
		myints.pop();
		find = find+1;
		for (int q=0;q<8;q++)
	    {
	    	if (a2[q] !=-1)
		        cout <<"-->"<< char (65+a2[q]);
	    }
	    cout << endl;
	}
} 

/*  CPE  ���D-1 
  complier ���~
  �D�زz�ѿ��~ 
  input �榡�����D 
*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main()
{
	int number;
	unsigned int a[4];
	cin >> number;
	for (int q=0;q<number;q++)
	{
	    for (int i=0;i<4;i++)
	    {
		    cin >> a[i];
	    }
	    
		if (a[0] == a[1] && a[1] == a[2] && a[2]==a[3])
	    {
		    cout <<"square"<<'\n';
	    }
	    
	    else if ((a[0] == a[2] && a[1]==a[3]) || (a[0]==a[1] && a[2]==a[3]) || (a[0]==a[2] && a[1]==a[3]) || a[0]==a[3] && a[2]==a[1])
	    {
		    cout <<"rectangle"<<'\n';
	    }
	    
	    else if((a[0]+a[1]+a[2])>a[3] && (a[3]+a[1]+a[2])>a[0] && (a[0]+a[3]+a[2])>a[1] &&
	    (a[0]+a[1]+a[3])>a[2])
	    {
		    cout <<"quadrangle"<<'\n';
	    }
	    else
	    {
		    cout << "banana"<<'\n';
	    }
	    fflush(stdin);
	}
	return 0;
 } 

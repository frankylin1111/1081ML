#include <iostream>
#include <cstdlib>
#include <iomanip> 

using namespace std;
int main()
{
	int a,b,c=2,d=0;
	cin >>a;
	cout << "�A��J���Ʀr��:";
	cout << a << endl;
	cout << "�ର��]�Ƥ��Ѭ�:";
	while (a>=c)
	{
		b=0;
		while ((a%c)==0)
		{
		  a/=c;
		  b++; 
	    }
     	
	    if(b>0) 
		{
		  cout<<c;
		  if(b>1) cout <<"^"<<b;
		  if(a>1) cout <<"*";
	    }
	    (c==2)?(c++):c+=2;
	    d++;
	}
	if (d==1) cout <<"no";
	return 0;
} 

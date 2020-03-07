/*  CPE  考題   
    一顆星選集 
  complier 錯誤
  
*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <fstream>

using namespace std;

//  取最大公因數 
int gcd(int a,int b)
{
	int s;
	while(b!=0)
	{
		s =a%b;
		a=b;
		b=s;
	}
	return a;
}

int main()
{
	int q,k=0;
	char buffer[200];
	fstream fs;
	fs.open("qwe.txt",ios::in);
	while(fs.getline(buffer,sizeof(buffer),'\n'))
	{
		q= atoi(buffer);
		if (q!=0)
		{
			for(int i=1;i<q;i++)
            for(int j=i+1;j<=q;j++)
            {
                k+=gcd(i,j);
            }
            cout << k << endl;
            k=0;
		}
		else
		    break;
	}
	
}

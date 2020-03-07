/*
    UVA 10252  一顆星
	1.題目的意思理解不清楚
	2.寫太久
	3.CPE的輸入及輸出格式不熟 
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int k=0,an=0,first=0,sec=0;
	string a,b,c="",answer="abcdefghijklmnopqrstuvwxyz",d="",e="",f="";
	while(getline(cin,a) && getline(cin,b))
	{
		for (int i=0;i<answer.length();i++)
		{
			k=b.find(answer[i]);
			an = a.find(answer[i]);
			if (k!=-1 && an!=-1)
			    c = c+answer[i];
		}
		k=0;
		an=0;
		for (int i=0;i<c.length();i++)
		{
			k=a.find(c[i],k);
			an = b.find(c[i],an);
			if (k!=-1)
			{
				first+=1;
				d = d+c[i];
				k=k+1;
			}
			else
			{
				k = -1;
			}
			
			if (an!=-1)
			{
				sec+=1;
				e=e+c[i];
				an =an+1;
			}
			else
			{
				an=-1;
			}
			
			if (an == -1 || k == -1)
			{
				if (first<=sec)
				{
					f = f+d;
				}
				else
				{
					f=f+e;
				}
				d.clear();
				e.clear();
				first=0;
				sec=0;
				k=0;
				an=0;
			}
			else
			{
				i--;
			}	
		}
		cout << f;
		a.clear();
		b.clear();
		c.clear();
		d.clear();
		e.clear();
		f.clear();
		cout << endl;
	}
} 

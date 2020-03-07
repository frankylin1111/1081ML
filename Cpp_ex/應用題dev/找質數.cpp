#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{
   unsigned int x,total=0,ans;
   cin >> x;
   unsigned int s1[x];
   for (int j=floor(sqrt((double) x));j<x+1;j++)
   {
   	    s1[j-1]=j;
   }
   for (int i=2;i<int (floor(sqrt((double) x)))+1;i++)
   {
   	    int q=2;
   	    int find = 0;
   	    while(i>q)
   	    {
   	    	if ((i%q)==0)
   	    	{
			    find=1;
   	    	    break;
			}   
   	    	else
   	    	{ 
   	    		if (q==2)
   	    		    q++;
   	    		else
   	    		    q=q+2;
   	    	} 
		}
		if (find==0)
		{
			ans=i;
			total=total+1;
		    cout << i <<'\n';
		    for (int a=floor(sqrt((double) x));a<x+1;a++)
		    {
		    	if ((s1[a-1]%ans)==0)
		    	{
				    s1[a-1]=1;
				}    
			}
		}
	}
	for (int o=floor(sqrt((double) x));o<x+1;o++)
	{
		if (s1[o-1]!=1)
		{
			total=total+1;
		    cout << s1[o-1] <<'\n';
		}
		    
	}
	
	cout <<"共有:"<<total<<"個質數";
}


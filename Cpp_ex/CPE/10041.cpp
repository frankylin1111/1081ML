/*
    2019/1/12 
    UVA10041
    1.�D�ؤF�Ѥ����M��
	2.�ѦҸѵ����g�k
	3.compiler error
	4.����ƪ����D 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <list>

using namespace std;
int main()
{
	int a,n,count=0,q=0;
	long long sum = 0;
	cin >> n;
	while(n!=0)
	{
		q =0;
		sum = 0;
		cin >> a;
		list<int> k;
		list<int>::iterator it;
		for (int i=0;i<a;i++)
		{
			cin >> count;
			k.push_front(count);
		}
		k.sort();
		for (it=k.begin();it!=k.end();it++)
		{
			if (a%2 !=0 && a/2 == q)
		    {
			    q = *it;
			    break;
		    }  
		    else if (a%2 ==0 && a/2 == q)
		    {
			    q = *it;
			    it--;
			    q = *it+q;
			    q = q/2;
			    break;
		    
		    }
		    q++;
		}
		for (it=k.begin();it!=k.end();it++)
		{
			sum = sum+abs(*it-q);
		}
		cout <<sum<< endl;
		n--;
	}
}

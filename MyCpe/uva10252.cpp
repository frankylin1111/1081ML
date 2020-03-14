/*
    2019/9/14
    UVA 10252  一顆星
	1. 題目的意思理解不清楚
	2.寫太久
	3. 加油!! 
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int k=0,an=0,first=0,sec=0,seqa[26]={0},seqb[26]={0};
	string a="",b="",answer="abcdefghijklmnopqrstuvwxyz";
	while(getline(cin,a) && getline(cin,b))
	{ 
	    // getline(cin,b)  較正確的寫法 
		sort(&a[0],&a[a.length()]);
		sort(&b[0],&b[b.length()]);
		k=0;
		for (int i=0;i<26;i++)
		{
			seqa[i] = 0;
			seqb[i] = 0;
		}
		for (int i=0;i<answer.length();i++)
		{
			for (int j =0;j<b.length();j++)
			{
				if (answer[i] == b[j])
				    seqb[answer[i]-'a']++;
			}
	    }
	    for (int i=0;i<answer.length();i++)
		{
			for (int j =0;j<a.length();j++)
			{
				if (a[j] == answer[i])
				    seqa[answer[i]-'a']++;
			}
	    }
	    while(k!=26)
	    {
	    	if (seqa[k] != 0 && seqb[k] !=0 && seqa[k] <= seqb[k])
	    	{
	    		for (int i=0;i<seqa[k];i++)
	    		{
	    			cout << (char) (k+97);
				}
			}
			else if (seqa[k] != 0 && seqb[k] !=0 && seqa[k] >= seqb[k])
	    	{
	    		for (int i=0;i<seqb[k];i++)
	    		{
	    			cout << (char) (k+97);
				}
			}
			k++;
		}
		cout << endl;
    }
} 

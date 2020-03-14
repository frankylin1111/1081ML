/*
    2019/9/14
    uva 10222
    1. Wrong Answer
	2. ­n¥Î while() °j°é¼g 
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	string name1="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./",name2;
	unsigned int k=0,q=0;
	while(getline(cin,name2))
	{
		k = name2.length();
		for (int i=0;i<name2.length();i++)
	    {
		    if (((int)name2[i]) >= 65 && ((int)name2[i]) <=90)
		    {
			    name2[i] = tolower(name2[i]);
		    }
	    }
	    for (int i=0;i<name2.length();i++)
	    {
		    if (((int)name2[i]) >= 65 && ((int)name2[i]) <=90)
		    {
			    name2[i] = tolower(name2[i]);
		    }
	    }
	    while(q <= k)
	    {
		    if (name2[q] == ' ')  cout << name2[q];
		    else
		    {
			    for (int j=0;j<name1.length();j++)
			    {
				    if (name2[q] == name1[j])
				    {
					    cout << name1[j-2];
					    break;
				    }
			    }
		    }
		    q++;
	    } 
	    cout << endl;
	}
}

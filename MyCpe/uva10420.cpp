/*    
    2019/9/14
    UVA 10420  �@���P  --List of Conquests
	1. �C�X�X�{��a���Ӫ����� , �åB���y�Ĥ@�Ӥj�g�r�����Ƨ�
	
	2. Correct!! 
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	char name[76];
	int count = 0,i=0,j=0,q=0,p=0;
	scanf("%d\n",&count);
	q = count;
	string b[count] = {""},check;
	while (count--)
	{
		gets(name);
		i=0;
		while(name[i] != ' ')
		{
			b[j] = b[j] + name[i];
			i++;
		}
		j++;
	}
	sort(&b[0],&b[q]);
	check = b[0];
	for (int k =0;k<q;k++)
	{
		if (check == b[k])
		{
			p++;
		}
		else
		{
			cout << check << " " << p << endl;
			check = b[k];
			p =1;
		}
	}
	cout << check << " " << p << endl;
 } 

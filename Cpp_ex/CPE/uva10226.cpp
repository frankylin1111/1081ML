/*
    ----------- 2020/03/17 ----------------
    1. �D�بS�ݲM��
	2. �����ϥ�vector��r�� 
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
	int n=0;
	scanf("%d\n\n",&n);
	while(n--)
	{
		string a="";
		vector<string> b;
		long long c=0;
		while(getline(cin,a) && a != "")
		{
			b.push_back(a);
			c++;
		}
		sort(&b[0],&b[c]);
		a = b[0];
		int count = 1;
		for (int i=1;i<c;i++)
		{
			if (b[i] == a)
			{
				count++; 
			}
			else
			{
				cout << a << " ";
				printf("%.4f\n",(double)count*100 /(double) c);
				count = 1;
				a = b[i];
			}
		}
		cout << a << " ";
		printf("%.4f\n",(double)count*100/ (double) c);
		cout << endl;
	}
}

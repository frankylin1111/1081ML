/*
    2018/1/12
    UVA 11349
    1.cin ��J�榡�����D
	2.scanf(" N = %d",&a) // N���e�������n���Ů�_�h�|�� 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string> 
using namespace std;
int main()
{
    char str1[10],*str2;
	long long n=0,count = 0;
	int a=0;
	scanf("%d\n",&n);
	while(count != n)
    {
		long long number=0,wrong = 0,total=0;
		count = count +1;
		scanf("\nN = %d",&a);
		//vector <long long> martix;
		total = a*a;
		long long martix[total];
		for (int i=0;i<total;i++)
		{
			cin >> number;
			martix[i]=number;
		}
		//cout << martix.size();
		for (int k=0;k<total;k++)
		{
			number = total-1-k;
			if ( martix[k] !=  martix[number] || martix[k] < 0)
			{
				wrong = 1;
				break;
			}  
		}
		if (wrong == 1)
		    cout << "Test #"<< count <<": Non-symmetric." << endl;
		else
		    cout << "Test #"<< count <<": Symmetric." << endl;
	}
}


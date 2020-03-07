#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int ***ptr = new int **[2],sum=0,ans=0;
	ptr[0] = new int *[3];
	ptr[1] = new int *[3];
	for (int j=0;j<2;j++)
	{
		for (int i=0;i<3;i++)
		{
			ptr[j][i] = new int [5];
		} 
	}
	for (int a=0;a<30;a++)
	{
		ans = a/5;
		if (ans>=3)
		    ans = ans-3;
		cout << "請輸入第" << (a/15)+1 <<"個系" << "第" << ans+1 << "個班" << "的第"
		     << (a%5)+1 << "個學生的成績:";
		cin >> ptr[a/15][ans][a%5];
	}
	for (int q=0;q<6;q++)
	{
	    sum = (ptr[q/3][q%3][0]+ptr[q/3][q%3][1]+ptr[q/3][q%3][2]+ptr[q/3][q%3][3]+ptr[q/3][q%3][4])/5;
		cout << "第" << (q/3)+1 <<"個系" << "第" << (q%3)+1 << "個班" << "的學生的平均成績:";
		cout << sum << endl;
	}
	for (int p=0;p<2;p++)
	{
		for (int o=0;o<3;o++)
		{
			delete [] ptr[p][o];
		}
		delete [] ptr[p];
	}
	delete [] ptr;
	ptr = NULL;
	
	system("pause");
	return 0;
} 

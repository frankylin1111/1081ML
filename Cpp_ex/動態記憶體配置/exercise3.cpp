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
		cout << "�п�J��" << (a/15)+1 <<"�Өt" << "��" << ans+1 << "�ӯZ" << "����"
		     << (a%5)+1 << "�Ӿǥͪ����Z:";
		cin >> ptr[a/15][ans][a%5];
	}
	for (int q=0;q<6;q++)
	{
	    sum = (ptr[q/3][q%3][0]+ptr[q/3][q%3][1]+ptr[q/3][q%3][2]+ptr[q/3][q%3][3]+ptr[q/3][q%3][4])/5;
		cout << "��" << (q/3)+1 <<"�Өt" << "��" << (q%3)+1 << "�ӯZ" << "���ǥͪ��������Z:";
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

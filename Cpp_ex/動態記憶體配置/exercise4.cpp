#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int **ptr = new int *[3],sum=0,ans=0,x=1;
	for (int i=0;i<3;i++)
	{
		ptr[i] = new int [3];
	}
	for (int j=0;j<3;j++)
	{
		cout << "|";
		for (int p=0;p<3;p++)
		{
			ptr[j][p] = x;
			cout << ptr[j][p] << " ";
			x++;
		}
		cout <<"|"<< '\n';
	}
	for (int p=0;p<3;p++)
	{
		delete [] ptr[p];
	}
	delete [] ptr;
	ptr = NULL;
	
	system("pause");
	return 0;
} 

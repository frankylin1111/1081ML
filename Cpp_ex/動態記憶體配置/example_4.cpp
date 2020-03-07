#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i,j,k;
	char x = 'a';
	char ***ptr = new char **[3];
	for (i=0;i<3;i++)
	{
		ptr[i] = new char *[2];
		for (j=0;j<2;j++)
		{
			ptr[i][j] = new char [4];
		}
	}
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			for (k=0;k<4;k++)
			{
				ptr[i][j][k] = x;
				x++;
				cout << "ptr[" << i << "][" << j << "]["
				     << k << "]=" << ptr[i][j][k] << endl;
			}
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			delete [] ptr[i][j];
		}
		delete [] ptr[i];
	}
	delete [] ptr;
	ptr = NULL;
	system("pause");
	return 0;
 } 

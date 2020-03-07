#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i;
	
	int *ptr = new int[5];
	
	for (i=0;i<5;i++)
	{
		ptr[i] = i+1;
		cout << "ptr[" << i << "]=" << ptr[i] << endl; 
	}
	delete [] ptr;
	system("pause");
	ptr = NULL;
	return 0;
 } 

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	char *name[3]={"�»�","�i�L��","�i�T��"};
	int i,j;
	char *temp;
	cout << "�Ƨǫe�����:";
	for (i=0;i<3;i++)
	{
		cout << name[i] << ' ';
	}
	
	cout << '\n';
	
	for (i=1;i<=2;i++)
	  for (j=0;j<3-i;j++)
	  // �βĤ@�Ӧr�������h���,�Y�ۦP����ĤG��(�H������) 
	   if ((string)name[j] > (string)name[j+1]) 
	   {
	   	temp=name[j];
	   	name[j]= name[j+1];
	   	name[j+1]=temp;
	   }
	
	cout << "�Ƨǫ᪺���:";
	for (i=0;i<3;i++)
	   cout << name[i] << ' ';
	cout << '\n';
	 
	system("pause");
	return 0;
}

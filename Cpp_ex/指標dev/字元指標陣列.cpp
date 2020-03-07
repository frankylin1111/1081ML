#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	char *name[3]={"謝遜","張無忌","張三丰"};
	int i,j;
	char *temp;
	cout << "排序前的資料:";
	for (i=0;i<3;i++)
	{
		cout << name[i] << ' ';
	}
	
	cout << '\n';
	
	for (i=1;i<=2;i++)
	  for (j=0;j<3-i;j++)
	  // 用第一個字的筆劃去比較,若相同比較第二個(以此類推) 
	   if ((string)name[j] > (string)name[j+1]) 
	   {
	   	temp=name[j];
	   	name[j]= name[j+1];
	   	name[j+1]=temp;
	   }
	
	cout << "排序後的資料:";
	for (i=0;i<3;i++)
	   cout << name[i] << ' ';
	cout << '\n';
	 
	system("pause");
	return 0;
}

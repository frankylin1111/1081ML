#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	int i,j;
	struct tel_book
	{
		string name;
		int age;
		string tel;
		
		void printdata()
		{
			cout << name << '\t'
			     << age << '\t'
			     << tel << '\t' << endl;
		}
	};
	
	struct tel_book telephone[3]={
		{"張三",18,"04-2321"},
		{"王五",19,"06-2512"},
		{"李四",18,"02-2226"}
	};
	
	struct tel_book temp;  // 暫存temp結構
	
	cout << "排序前的資料:"<<endl;
	for (i=0;i<3;i++)
	    telephone[i].printdata();
	
	for (i=1;i<=2;i++)
	    for (j=0;j<3-i;j++)
	        if (telephone[j].age>telephone[j+1].age)
		    {
			    temp = telephone[j];
			    telephone[j] = telephone[j+1];
			    telephone[j+1] = temp;
		    } 
	
	// 若左邊的資料 > 右邊的資料 , 則
	// 將telephone[j]與telephone[j+1]的
	// 所有成員之內容互換 
	cout << "排序後的資料:" << endl;
	
	for (i=0;i<3;i++)
	    telephone[i].printdata();
	 
	system("pause");
	return 0;
} 

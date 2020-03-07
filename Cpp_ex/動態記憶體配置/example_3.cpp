#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i,num,tbyte;
	cout << "輸入要動態配置多少個字串:";
	
	cin >> num;
	
	char **ptr = new char *[num];
	for (i=0;i<num;i++)
	{
		cout << "輸入第" << i+1 <<"個字串要配置多少個字元:";
		cin >> tbyte;
		ptr[i] = new char [tbyte];
		
		cout << "輸入第" << i+1 << "個字串的內容:";
		cin >> ptr[i];
	}
	for (i=0;i<num;i++)
	    cout << "第" << i+1 << "個字串的內容:"<< ptr[i] << endl;
		
	for (i=0;i<num;i++)
	    delete [] ptr[i];
	delete [] ptr;
	ptr = NULL;
	
	system("pause");
	return 0; 
} 

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i,num,tbyte;
	cout << "��J�n�ʺA�t�m�h�֭Ӧr��:";
	
	cin >> num;
	
	char **ptr = new char *[num];
	for (i=0;i<num;i++)
	{
		cout << "��J��" << i+1 <<"�Ӧr��n�t�m�h�֭Ӧr��:";
		cin >> tbyte;
		ptr[i] = new char [tbyte];
		
		cout << "��J��" << i+1 << "�Ӧr�ꪺ���e:";
		cin >> ptr[i];
	}
	for (i=0;i<num;i++)
	    cout << "��" << i+1 << "�Ӧr�ꪺ���e:"<< ptr[i] << endl;
		
	for (i=0;i<num;i++)
	    delete [] ptr[i];
	delete [] ptr;
	ptr = NULL;
	
	system("pause");
	return 0; 
} 

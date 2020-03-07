#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int var,*ptr1,**ptr2,***ptr3;
	ptr1=& var;
	ptr2=& ptr1;
	ptr3=& ptr2;
	var=1;
	*ptr1=*ptr1+2;
	**ptr2=**ptr2+3;
	***ptr3=***ptr3+4;
	
	cout << "var=" << var << '\n';
	cout << "*ptr1=" << *ptr1 << '\n';
	cout << "**ptr2=" << **ptr2 << '\n';
	cout << "***ptr3=" << ***ptr3 << '\n';
	
	system("pause");
	return 0;
	
}

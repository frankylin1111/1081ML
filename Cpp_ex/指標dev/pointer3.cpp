#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	int i=0,n=0,q=0;
	char *p = "Welcome to C language.";
	while(*(p+i) != '\0')
	{
	    q = q + sizeof(*(p+i));
		if (isupper(*(p+i)) == 1)
		    n++;   
		i++;
	}
	cout << "�`�@��" << n << "�Ӥj�g�^��r��" << endl;
	cout << "�j�p:" << q << "byte" << endl; 
}

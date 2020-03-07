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
	cout << "總共有" << n << "個大寫英文字母" << endl;
	cout << "大小:" << q << "byte" << endl; 
}

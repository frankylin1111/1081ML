#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	char a,pas = '*';
	int i=0;
	string yourpassword;
	while ((a=getch()) != '\r')
	{
		cout << pas;
		yourpassword = yourpassword +  a;
	    i++;
	}
	cout << '\n' << yourpassword;
}

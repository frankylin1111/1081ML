#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int find_a(char a[])
{
	int i=0,n=0;
	while(*(a+i) != '\0')
	{
		if (*(a+i) == 'a')
		    n = n+1;
		i++;
	}
	return n;
}
int find_e(char a[])
{
	int i=0,n=0;
	while(*(a+i) != '\0')
	{
		if (*(a+i) == 'e')
		    n = n+1;
		i++;
	}
	return n;
}
int find_i(char a[])
{
	int i=0,n=0;
	while(*(a+i) != '\0')
	{
		if (*(a+i) == 'i')
		    n = n+1;
		i++;
	}
	return n;
}
int find_o(char a[])
{
	int i=0,n=0;
	while(*(a+i) != '\0')
	{
		if (*(a+i) == 'o')
		    n = n+1;
		i++;
	}
	return n;
}
int find_u(char a[])
{
	int i=0,n=0;
	while(*(a+i) != '\0')
	{
		if (*(a+i) == 'u')
		    n = n+1;
		i++;
	}
	return n;
}
int main()
{
	char a[11];
	cin >> a;
	cout << "a: ";
	cout << find_a(a) << "��" << endl;
	cout << "e: "; 
	cout << find_e(a) << "��" << endl;
	cout << "i: ";
	cout << find_i(a) << "��" << endl;
	cout << "o: "; 
	cout << find_o(a) << "��" << endl;
	cout << "u: "; 
	cout << find_u(a) << "��" << endl;
	return 0;
}

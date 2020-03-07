#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;

int main()
{
	char a= 0;
	char str[26];
	for (int i= 97;i< 122;i++)
	{
		str[i-97]=char (i-a);
		cout << "i= " << char (i-a)<< '\n';
	}
	
	for (int j=0;j<26;j++)
	{
		cout << str[j] << '\t';
	}
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned int pos1,pos2;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	cout << "��Ja���_�l��m:";
	cin >> pos1;
	cout << "��Jb���_�l��m:";
	cin >> pos2;
	for (int i=pos1;i<pos1+3;i++)
		cout << a[i];
	if (a.compare(pos1,3,b,pos2,3) ==1)
		cout << ">";
	else if (a.compare(pos1,3,b,pos2,3) == 0)
	    cout << "=";
	else
	    cout << "<";
	for (int j=pos2;j<pos2+3;j++)
	    cout << b[j];
} 

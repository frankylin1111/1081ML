#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	char p;
	int pos;
	string b;
	getline(cin,b);
	cin >> p;
	cin >> pos;
	cout << b.find(p,pos);
}

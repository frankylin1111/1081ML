#include <iostream>
#include <string>
using namespace std;
int main()
{
	int pos;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	cin >> pos;
	cout << b.find(a,pos);
	return 0;
}

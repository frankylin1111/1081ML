#include <iostream>
#include <cstdlib>
using namespace std;
int lcm(int,int);
int main()
{
	int a1,a2; 
	cout << "�п�J�Ĥ@�Ӽ�:";
	cin >> a1;
	cout << "�п�J�ĤG�Ӽ�:";
	cin >> a2;
	cout << lcm(a1,a2) <<endl;
	system("pause");
	return 0;
}

int lcm(int a,int b)
{
	int m=a,n=b,o,s=0;
	while(n!=0)
	{
		o = m%n;
		m =n;
		n =o;
	}
	s=(a/m)*m*(b/m);
	return s;
}

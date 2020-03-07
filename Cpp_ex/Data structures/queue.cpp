#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;
int main()
{
	queue<int> my;
	my.push(1);
	my.push(2);
	my.push(3);
	my.push(4);
	my.push(5);
	my.push(6);
	my.push(7);
	my.push(8);
	my.push(9);
	cout << my.size() << '\n';
	for (int i=0;i<9;i++)
	{
		cout << my.front()+i << " ";
		my.pop();
	}
	cout <<'\n'<< my.size();
}

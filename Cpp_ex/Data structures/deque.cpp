#include <iostream>
#include <cstdlib>
#include <deque>
using namespace std;
int main()
{
	int i,j;
	deque<int> ints;
	for (i=0;i<10;i++)
	{
		ints.push_front(i+1);
	}
	
	deque<int>::iterator it;
	for (it=ints.begin();it!=ints.end();it++)
	{
		cout << *it << " ";
	}
}

#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;
int main()
{
	int i,j;
	list<int> myints;
	cout << "myints: " << '\n'; 
	for (i=0;i<10;i++)
	{
		myints.push_back(i+1);
	}
	for (list<int>::iterator it = myints.begin();it!=myints.end();it++)
	{
		cout << *it << " "; 
	}
	myints.clear();
	cout << "\nmyints ªº°¸¼Æ:";
	for (i=1;i<=10;i++)
	{
		myints.push_back(i*2);
	}
	cout << '\n';
	for (list<int>::iterator it = myints.begin();it!=myints.end();it++)
	{
		cout << *it << " "; 
	}
	list<int>::iterator it = myints.begin();
	for (j=9;j>=0;j--)
	{
		myints.insert(it,(j*2)+1);
		it++;
	}
	cout << "\nmyints :";
	cout << '\n';
	for (list<int>::iterator it = myints.begin();it!=myints.end();it++)
	{
		cout << *it << " "; 
	}
	myints.sort();
	cout << '\n'<< "sort§¹¡÷";
	for (list<int>::iterator it = myints.begin();it!=myints.end();it++)
	{
		cout << *it << " "; 
	}
}

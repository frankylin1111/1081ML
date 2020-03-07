/*
    set 以排序好的資料 
*/ 
#include <cstdlib>
#include <iostream>
#include <set>
using namespace std;
int main()
{
// -------- multiset 可重複插入相同元素 ------------ 
	multiset<int> m;
	multiset<int>::iterator it;
// ---------
	multiset<int>::reverse_iterator itk;
// --------- Sort ------------ 
	m.insert(4);
	m.insert(6);
	m.insert(3);
	m.insert(5);
	m.insert(4);
	m.insert(8);
// -------- m.erase(位址) 刪除---------
	// m.erase(m.find(6));
	for (it=m.end();it!=m.begin();it--)
	{
		if (it == m.end())
		{
			it--;
		}
		cout << *it << "  ";
	}
	cout << *it << "   ";
}

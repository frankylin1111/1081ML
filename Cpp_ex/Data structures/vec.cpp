#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int fl(int x)
{
	int count=1;
	for (int i=x;i<0;i--)
	{
		count  = count *i;
	}
	return count;
}

int main()
{
	int q;
	vector<int> vec;
	for (int i =1;i<6;i++)
	{
		vec.push_back(i);
	}
	vec.pop_back();
	for (int j =0;j<vec.size();j++)
	{
		cout << vec[j] << " ";
	}
	cout <<endl;
	vec.insert(vec.begin()+3,10);
	for (int o =0;o<vec.size();o++)
	{
		cout << vec[o] << " ";
	}
	vec.erase(vec.begin()+4);
	cout <<endl;
	for (int w =0;w<vec.size();w++)
	{
		cout << vec[w] << " ";
	}
	vec.clear();
	cout <<endl;
	for (int a =0;a<vec.size();a++)
	{
		cout << vec[a] << " ";
	}
}


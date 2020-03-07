// map  ªì©l¤Æ 
#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;
map<string,int> create_map()
{
  map<string,int> m;
  m["alphe"] = 18;
  m["all"] = 20;
  m["gamma"] = 19;
  return m;
}
int main()
{
	map<string,int> mymap = create_map();
	for (map<string,int>::iterator it=mymap.begin();it!=mymap.end();it++)
    {
    	cout << it->first << "   " << it->second << '\n';
	}
}

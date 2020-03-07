#include <iostream>
#include <cstdlib>
using namespace std;

static int i=0;
extern int c[8];
void credit(int n)
{
	c[i]=n;
	if ((i%2) == 1)
	    cout << "第" << (i/2)+1 << "年的總學分數為:" << c[i-1]+c[i] << endl; 
	
	i++;
}

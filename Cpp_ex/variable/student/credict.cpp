#include <iostream>
#include <cstdlib>
using namespace std;

static int i=0;
extern int c[8];
void credit(int n)
{
	c[i]=n;
	if ((i%2) == 1)
	    cout << "��" << (i/2)+1 << "�~���`�Ǥ��Ƭ�:" << c[i-1]+c[i] << endl; 
	
	i++;
}

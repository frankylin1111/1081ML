#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int l = 100,d = 0,n=1,k;
	k=l;
	while(k >0)
	{
		d= d+k;
		printf("�� %d �����a���Z��: %dm\n",n,k);
		k = k/2;
		printf("�� %d ���ϼu������: %dm\n",n,k);
		n++;
	}
}

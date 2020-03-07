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
		printf("第 %d 次落地的距離: %dm\n",n,k);
		k = k/2;
		printf("第 %d 次反彈的高度: %dm\n",n,k);
		n++;
	}
}

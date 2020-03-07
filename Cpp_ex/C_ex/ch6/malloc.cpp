#include <iostream> 
#include <cstdlib>
#include <cstring>
using namespace std;

/* 2018/06/30 心得:
        malloc 動態記憶體配置的用法、釋放及配置 
*/ 
int main()
{
	int **x;
	x = (int**) malloc(2*sizeof(int*));
	
	cout << sizeof(x)<<'\n';
	free(x);
	if (x != NULL)
	{ 
	    cout << **x<<"記憶體已釋放!";
	} 
}

#include <iostream> 
#include <cstdlib>
#include <cstring>
using namespace std;

/* 2018/06/30 �߱o:
        malloc �ʺA�O����t�m���Ϊk�B����ΰt�m 
*/ 
int main()
{
	int **x;
	x = (int**) malloc(2*sizeof(int*));
	
	cout << sizeof(x)<<'\n';
	free(x);
	if (x != NULL)
	{ 
	    cout << **x<<"�O����w����!";
	} 
}

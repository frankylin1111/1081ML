#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void swap(int *a,int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
int main()
{
	int a=5,b=3;
	cout << "交換前:" <<endl << "a=" << a << endl << "b=" << b <<endl;
	swap(&a,&b);
	cout << "交換後:" <<endl << "a=" << a << endl << "b=" << b <<endl;
}

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
	cout << "�洫�e:" <<endl << "a=" << a << endl << "b=" << b <<endl;
	swap(&a,&b);
	cout << "�洫��:" <<endl << "a=" << a << endl << "b=" << b <<endl;
}

#include <iostream>
#include <cstdlib>
using namespace std;
static int saving2=0;
void deposit_b(int money)
{
	saving2 = saving2 + money;
	
	cout << "B�Ȧ�s�ھl�B:" << saving2 << '\n'; 
}

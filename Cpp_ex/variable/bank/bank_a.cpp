#include <iostream>
#include <cstdlib>
using namespace std;
static int saving1=0;
void deposit_a(int money)
{
	saving1 = saving1 + money;
	
	cout << "A�Ȧ�s�ھl�B:" << saving1 << '\n'; 
}

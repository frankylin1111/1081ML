#include <iostream>
#include <cstdlib>
using namespace std;
static int saving2=0;
void deposit_b(int money)
{
	saving2 = saving2 + money;
	
	cout << "B»È¦æ¦s´Ú¾lÃB:" << saving2 << '\n'; 
}

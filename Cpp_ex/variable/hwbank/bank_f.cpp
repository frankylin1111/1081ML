#include <iostream>
#include <cstdlib>
using namespace std;
static int saving1 = 0;
static int saving2  = 0;

void bank_a(int money)
{
	saving1 = saving1 + money;
	
	cout << "A�Ȧ檺�l�B��:" << saving1 << '\n'; 
}

void bank_b(int money)
{
	saving2 = saving2 + money;
	
	cout << "B�Ȧ檺�l�B��:" << saving2 << '\n'; 
} 

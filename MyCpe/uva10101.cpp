/*    
    2019/9/14
    UVA 10101  一顆星  --Bangla Numbers
	1. Presentation error -- 必須使用第47行的%4d固定輸出格式  46行的cout 
	會有格式上的問題.
	
	2. 參考網路上的解答  -- 自定 function compute(unsigned long long n);
	3. -- 加油!! 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
void compute(unsigned long long n)
{
	unsigned long long kuti = 10000000,lakh=100000
	,hajar=1000,shata=100;
	if ((n/kuti) > 0)
	{
		compute(n/kuti);
		cout << " kuti";
		n = n %kuti;
		if (n > 0)  cout << " ";
	}
	
	if ((n/lakh) > 0)
	{
		cout << n/lakh << " lakh";
		n = n%lakh;
		if (n>0)  cout << " ";
	}
	if ((n/hajar) > 0)
	{
		cout << n/hajar << " hajar";
		n = n%hajar;
		if (n>0)  cout << " ";
	}
	if ((n/shata) > 0)
	{
		cout << n/shata << " shata";
		n = n%shata;
		if (n > 0)  cout << " ";
	}
	if (n != 0)  cout << n;
}
int main()
{
	unsigned long long n = 45897458973958,count = 1;
	while(cin >> n)
	{
		//cout <<"   "<< count << ". ";
		printf("%4d. ",count);
		if (n == 0)
		{
			cout << "0";
		}
		else
		{
			compute(n);
		}
		cout << endl ;
		count++;
	}
 } 

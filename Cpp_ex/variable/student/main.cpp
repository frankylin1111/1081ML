#include <iostream>
#include <cstdlib>
#include "credict.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int c[8];
int main(int argc, char** argv) {
	
	int n,sum;
	for (register int i=0;i<8;i++)
	{
		cout << "請輸入第" << (i/2)+1 << "年";
		if ((i%2) == 0)
		    cout << "的上學期學分數:";
		else
		    cout << "的下學期學分數:";
		cin >> n;
		credit (n);
	}
	for (register int j=0;j<8;j++)
	{
		sum = sum +c[j];
	}
	cout << "大學4年的總學分數為" << sum; 
	return 0;
}

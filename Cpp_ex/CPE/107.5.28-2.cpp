/* ¡@CPE-2 
    redeclaration of 'long long int n'
    »yªk ¤Î ÅÞ¿è¿ù»~! 
*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath> 
using namespace std;

int main()
{
	long long r,t,n=-2;
	unsigned long long total,sum,n1=0;
	cin >> r;
	t=(r+1)/2;
	// t++;
	while(t != 0){
		n = n+4;
		n1 = n1 +n;
		t--;
	}
	total = 1 + n1;
	total = total -4;
	sum = total *3;
	cout << sum;
 } 

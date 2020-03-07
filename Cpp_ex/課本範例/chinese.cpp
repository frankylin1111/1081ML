/*
    2018/9/29
    輸入一字串,算出字串裡字元的總長度及分別累計的數字字元(0-9)
	大寫字母字元  小寫字母字元  標點符號字元  空白字元和中文字元有多少個
	
	心得:
	    得知字元若為中文字佔2個byte   使用字元陣列儲存時須特別注意 記憶體大小 
*/
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string.h>
using namespace std;

int main()
{
	char a[13];
	cin >> a;
	// l1  = strlen(a)  算出a裡面所佔的記憶體大小 
	int i=0,l1=strlen(a),l2=0,l3=0,l4=0,l5=0,l6=0,l7=0;
	while(*(a+i) != '\0')
	{
		if (isspace(*(a+i)) != 0)
			l6++;
		else if (ispunct(*(a+i)) != 0)
		    l5++;    
		else if (isdigit(*(a+i)) != 0)
			l2++;
		else if (isascii(*(a+i)) == 0)
		{
			l7++;
			i++;  // 若為全行中文字為2個byte,因為char a才1個byte,要多移一個字元 
		}  
		else if (isupper(*(a+i)) != 0)
		    l3++;   
		else if (islower(*(a+i)) != 0)
			l4++;
		i++;
	}
	
	cout << "字元總長度:" <<  l1 <<endl
		<< "數字字元個數:" << l2 <<endl
		<< "大寫字母字元個數:" << l3 <<endl
		<< "小寫字母字元個數:" << l4 <<endl
		<< "標點符號字元個數:" << l5 <<endl
		<< "空白字元個數:" << l6 << endl 
		<< "中文字元個數:" << l7; 
}

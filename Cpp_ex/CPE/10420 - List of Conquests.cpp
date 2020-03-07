/*
    2019/4/5
    CPE 一顆星
	UVA 10420
	1. wrong answer 
	2. cin 和 scanf() 的用法 
	3. 當同時使用cin>>,getline()時，
	需要注意的是，在cin>>輸入流完成之後，
	getline()之前，需要通過
    str=”\n”;
    getline(cin,str);的方式將回車符作為輸入流cin以清除快取，
	如果不這樣做的話，在控制檯上就不會出現getline()的輸入提示，
	而直接跳過，因為程式預設地將之前的變數作為輸入流。
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int a,number=0,c=0;
	string b[2001],word,word2,str=" \n";
	cin>>a;
    getline(cin,str);
	for (int i =0;i<a;i++)
	{
		getline(cin,word);
		b[i] = word;
		word.clear();
	}
	for (int j=0;j<b[c].length();j++)
	{
		if (b[c][j] != ' ')
		{
			word = word + b[c][j];
		}	
		else if (word.length()!=0)
		{
			b[c].clear();
			b[c] = word;
			word.clear();
			c++;
			j=-1;
		}
		
		if (c == a)
		{
			break;
		}
	}
	sort(&b[0],&b[a]);
	for (int i=0;i<a;i++)
	{
		number=number+1;
		if (b[i]!=b[i+1])
		{
			cout << b[i] << " " << number << endl;
			number = 0;
		}
	}
} 

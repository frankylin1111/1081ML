/*
    2019/4/5
    CPE �@���P
	UVA 10420
	1. wrong answer 
	2. cin �M scanf() ���Ϊk 
	3. ��P�ɨϥ�cin>>,getline()�ɡA
	�ݭn�`�N���O�A�bcin>>��J�y��������A
	getline()���e�A�ݭn�q�L
    str=��\n��;
    getline(cin,str);���覡�N�^���ŧ@����J�ycin�H�M���֨��A
	�p�G���o�˰����ܡA�b�����i�W�N���|�X�{getline()����J���ܡA
	�Ӫ������L�A�]���{���w�]�a�N���e���ܼƧ@����J�y�C
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

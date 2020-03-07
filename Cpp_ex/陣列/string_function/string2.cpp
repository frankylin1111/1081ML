#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	int q =0,p = 0;
	string s1="I am a good student.",s2="I come from CCIT-NDU";
	char s4 = 'Y';
// -------- 新增字串到被附加字串的尾端 ----------- 
	s1.append("\nYou are,too.");
// -------- 刪除字串中的某些特定字串 ----------- 
	s2.erase(12,5);
	cout << s1 << endl;  // 輸出 s1 
	cout << s2 <<endl;   // 輸出 s2
// ---------- 交換兩字串中的內容 --------- 
	s1.swap(s2);
	cout << endl;
	cout << s1 << endl;
	cout << s2 <<endl;
}

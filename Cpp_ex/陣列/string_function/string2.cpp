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
// -------- �s�W�r���Q���[�r�ꪺ���� ----------- 
	s1.append("\nYou are,too.");
// -------- �R���r�ꤤ���Y�ǯS�w�r�� ----------- 
	s2.erase(12,5);
	cout << s1 << endl;  // ��X s1 
	cout << s2 <<endl;   // ��X s2
// ---------- �洫��r�ꤤ�����e --------- 
	s1.swap(s2);
	cout << endl;
	cout << s1 << endl;
	cout << s2 <<endl;
}

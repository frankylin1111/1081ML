#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	int q =0,p = 0;
	string s1="I am a good student.",s2=" very",s3="You are";
	char s4 = 'Y';
	s1.insert(6,s2);
	cout << s1 << endl;
	s1.replace(0,4,s3,0,7);
	cout << s1 << endl;
// --------- �ѫe����j�M�Ĥ@���X�{�r�� 'a' ����m --------
	p = s1.find('a');
// --------- �ѫ᩹�e�j�M�Ĥ@���X�{�r�� 'a' ����m ------------
	q = 27-s1.rfind('a');
	cout << s1.compare(s3) << endl;
	cout << q << endl;
	cout << p << endl;
	cout << s1 <<  endl;
}

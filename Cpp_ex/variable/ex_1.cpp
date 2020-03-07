#include <iostream>
#include <cstdlib>
using namespace std;
float transform(float);
// auto float c;
// 此區並不能做 auto 宣告
 
int main()
{
	auto float c;
	cout << "輸入攝氏溫度:";
	cin >> c;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	
	cout << "攝氏" << c << "度=華氏"
	     << transform(c) << "度\n";
		 
	system("pause");
	return 0; 
}
float transform(float c)
{
	c = c*9/5+32;
	return c;
 } 

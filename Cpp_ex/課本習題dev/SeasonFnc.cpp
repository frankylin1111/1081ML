// SeasonsFnc.cpp
#include <iostream>
using namespace std;

void CheckSeason(int);

int main()
{
	int M;
	cout << '\n'
	     << "請輸入一個月份 : " << endl;
    cin >> M;
	CheckSeason (M);
	system("pause");
	return 0; 
}
//-------以下為函數CheckSeason () 的定義-------
void CheckSeason(int Month)
{
	if (Month <1 || Month >12)
	  {cout << "你輸入的月份沒有意義!"; return;}
	cout << '\n' << Month << "月是";
	switch((Month%12) /3)
	{
		case 0:
			cout << "冬季" << endl;
			break;
		case 1:
		    cout << "春季" << endl;
			break;
		case 2:
		    cout << "夏季" << endl;
		    break;
		case 3:
		    cout << "秋季" << endl;
			break;
		default:
		    cout << "程式有問題!" << endl; 
	}
	return;
 } 

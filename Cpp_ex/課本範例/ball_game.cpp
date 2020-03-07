/*
    2018/9/29 
    題目:
	有50顆球 ,兩個人互相取球  , 每人只能取 1  or 2 or 3 顆球,
	最後一位拿完球的就輸了
	 
*/
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int ball = 50,k=0,get,i=0;
	char people[2] = {'A','B'};
	while(ball >0)
	{
		k = i%2;
		i++;
		cout << people[k] << ":";
		cin >> get;
		if (get >=1 && get <=3 && (ball-get) >= 0)
		{
			ball= ball -get;
		}
		else
		{
			i--;
			continue;
		}
		cout << "球還有" << ball << "顆" <<endl;
	}
	cout << people[k] << "輸了";
}

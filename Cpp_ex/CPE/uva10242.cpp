/*
    ------------- 2020/4/5 ------------------
    1.correct!!
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	double t = 0,s = 0;
	double x[4]={0},y[4]={0};
	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3])
	{
		t=0;
		s=0;
		for (int i=0;i<4;i++)
		{
			t+=x[i];
			s+=y[i];
		}
		for (int i = 0;i<4;i++)
		{
			for (int j=i+1;j<4;j++)
			{
				if (x[i] == x[j] && y[i] == y[j])
				{
					cout<<fixed<<setprecision(3);//精確到小數點下三位 
                    cout<< setprecision(3)<<t-(3*x[i])<<" ";//輸出x座標 
                    cout<<s-(3*y[i])<<endl;//輸出y座標  
				}
			}
		}	
	}
} 

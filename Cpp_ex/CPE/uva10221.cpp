/*
    -------------- 2020/4/5 ------------------
    1.correct!!
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double a,s,r=6440,pi=3.14159265359;//r�O�D�ص����a�y�b�|
	string an;
	while(cin >> s >> a >> an)
	{
		if (an == "min")
		{
			a/=60;
		}
		while(a>=360)
		{
			a= a-360;
		}
		if (a>180)
		{
			a = 360-a;
		}
		cout<<fixed<<setprecision(6);//��T��p���I�U����
        cout<<(s+r)*pi*a/180<<" ";//��X����(���״�������)
        cout << sqrt((s+r)*(s+r)+(s+r)*(s+r)-2*(s+r)*(s+r)*cos(pi*a/180))<<endl;
	} 
}

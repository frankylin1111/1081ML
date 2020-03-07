#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    int a,b,count=0;
    while(cin >> a && cin >> b)
    {
        count = 0;
        if (a==0 && b==0)
        {
            break;
        }
        for (int i=a;i<=b;i++)
        {
        	if ((ceil(sqrt(i))-sqrt(i)) ==0)
        	    count++;
        }
        cout << count << endl;
    }
}

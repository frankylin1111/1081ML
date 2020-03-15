/* 
    ------------ 2020/03/15 --------------
    ³q¹L!! 
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	string input;
    while (cin >> input && input != "0")
    {
        int count = 0,degree =  0;
        for (int i =0;i<input.length();i++)
            count = count + (input[i] - '0');
        while(1)
        {
        	if ((count%9) != 0)
        	{
        		break;
			}
			else if (count == 9)
			{
				degree ++;
				break;
			}
			int temp = 0;
			while(count !=0 )
			{
				temp = temp + (count%10);
				count = count/10;
			}
			count = temp;
			degree++;
		}
        if ( degree )
            printf("%s is a multiple of 9 and has 9-degree %d.\n",input.c_str(),degree);
        else
            cout << input << " is not a multiple of 9.\n";
    }
    return 0;
}

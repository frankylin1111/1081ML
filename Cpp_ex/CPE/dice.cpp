/*
    2018/11/13 
    uva10409
    1.compile error
    2.еч©Х©Ы╩~ 
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	int n;
	while(cin >> n && n!=0)
	{
		int a=6,pre1,pre2,z;
		string direction,direction2,p;
		for (int i=0;i<n;i++)
		{
			cin >> direction;
			if ((i+1) == 1)
			{
				if (direction == "north")
				{
					pre2 = 4;
					pre1 = 6;
					a = 2;
					p="west";
				}
				else if (direction == "south")
				{
					pre2 = 3;
					pre1 = 6;
					a = 5;
					p = "east";
				}
				else if (direction == "east")
				{
					pre2 = 2;
					pre1 = 6;
					a = 4;
					p = "south";
				}
				else
				{
					pre2 = 5;
					pre1 = 6;
					a = 3;
					p = "north";
				}
			}
			else if (direction.length() != direction2.length())
			{
				if (direction!= p)
				{
					z = a;
					a =pre2;
					pre2 = pre1;
					pre1 = z;
				}
				else
				{
					z = a;
					a = 7-pre2;
					pre2 = pre1;
					pre1 = z;
				}
				p = direction2;
			}
			else
			{
				if (direction == direction2)
				{
					z = a;
				    a = 7 - pre1;
				    pre1 = z;
				}
				else
				{
					z =a;
					a = pre1;
					pre1 = z;
				}
			}
			direction2 = direction;
		}
		cout << 7-a <<endl;
	}
}

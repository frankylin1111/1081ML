#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int v[5][5]={{0,1,0,0,0},
	             {1,0,1,1,0},
	             {0,1,0,0,1},
				 {0,1,0,0,1},
				 {0,0,1,1,0}
	};
	char a;
	int b;
	cin >> a;
	b = int (a);
	b = b-65;
	for (int i=0;i<5;i++)
	{
		if (v[b][i] ==1)
		{
			cout << char (i+65) << endl;
		}
	}
	return 0;
}

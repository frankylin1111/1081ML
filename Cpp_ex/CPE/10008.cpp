/*
¡@¡@2019/4/19 
    UVA 10008
    CPE¡@¤@Áû¬P
	 
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int a,b[26]={0},c=0,d=0,index=0;
	string a1,str=" \n";
	cin >> a;
	getline(cin,str);
	while(a--)
	{
		getline(cin,a1);
		for (int i=0;i<a1.length();i++)
		{
			if (a1[i] == 'A' || a1[i] == 'a')
			{
				b[0] = b[0]+1;
			}
			else if (a1[i] == 'B' || a1[i] == 'b')
			{
				b[1] = b[1]+1;
			}
			else if (a1[i] == 'C' || a1[i] == 'c')
			{
				b[2] = b[2]+1;
			}
			else if (a1[i] == 'D' || a1[i] == 'd')
			{
				b[3] = b[3]+1;
			}
			else if (a1[i] == 'E' || a1[i] == 'e')
			{
				b[4] = b[4]+1;
			}
			else if (a1[i] == 'F' || a1[i] == 'f')
			{
				b[5] = b[5]+1;
			}
			else if (a1[i] == 'G' || a1[i] == 'g')
			{
				b[6] = b[6]+1;
			}
			else if (a1[i] == 'H' || a1[i] == 'h')
			{
				b[7] = b[7]+1;
			}
			else if (a1[i] == 'I' || a1[i] == 'i')
			{
				b[8] = b[8]+1;
			}
			else if (a1[i] == 'J' || a1[i] == 'j')
			{
				b[9] = b[9]+1;
			}
			else if (a1[i] == 'K' || a1[i] == 'k')
			{
				b[10] = b[10]+1;
			}
			else if (a1[i] == 'L' || a1[i] == 'l')
			{
				b[11] = b[11]+1;
			}
			else if (a1[i] == 'M' || a1[i] == 'm')
			{
				b[12] = b[12]+1;
			}
			else if (a1[i] == 'N' || a1[i] == 'n')
			{
				b[13] = b[13]+1;
			}
			else if (a1[i] == 'O' || a1[i] == 'o')
			{
				b[14] = b[14]+1;
			}
			else if (a1[i] == 'P' || a1[i] == 'p')
			{
				b[15] = b[15]+1;
			}
			else if (a1[i] == 'Q' || a1[i] == 'q')
			{
				b[16] = b[16]+1;
			}
			else if (a1[i] == 'R' || a1[i] == 'r')
			{
				b[17] = b[17]+1;
			}
			else if (a1[i] == 'S' || a1[i] == 's')
			{
				b[18] = b[18]+1;
			}
			else if (a1[i] == 'T' || a1[i] == 't')
			{
				b[19] = b[19]+1;
			}
			else if (a1[i] == 'U' || a1[i] == 'u')
			{
				b[20] = b[20]+1;
			}
			else if (a1[i] == 'V' || a1[i] == 'v')
			{
				b[21] = b[21]+1;
			}
			else if (a1[i] == 'W' || a1[i] == 'w')
			{
				b[22] = b[22]+1;
			}
			else if (a1[i] == 'X' || a1[i] == 'x')
			{
				b[23] = b[23]+1;
			}
			else if (a1[i] == 'Y' || a1[i] == 'y')
			{
				b[24] = b[24]+1;
			}
			else if (a1[i] == 'Z' || a1[i] == 'z')
			{
				b[25] = b[25]+1;
			}
			
		}
		a1.clear();
	}
	for (int i=0;i<26;i++)
	{
		if (b[i]>d)
		{
			d=b[i];
			index=i;
		}
		if (i==25 && d !=0)
		{
			cout << char (index+65) << " " << d << endl;
			i=-1;
			b[index]=0;
			d = 0;
			continue;
		}
		else if (i==25 && d==0)
		{
			break;
		}
	}
 } 

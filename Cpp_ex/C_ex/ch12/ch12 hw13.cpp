#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 13 
		結構的使用方法 
*/

int main()
{
	static struct s
    {
	    char a[10];
	    int n;
	    int m;
    }message[]={
    	"ABC",1,56,"DEF",2,87,"GIJ",3,93
	};
    for (int i=0;i<3;i++)
    {
    	if (message[i].m == 93)
    	{
		    printf("| %s | %d | %d | 0 |\n"
		    ,message[i].a,message[i].n,message[i].m);
		}
    	    
		else
		{
			printf("| %s | %d | %d |\n"
		    ,message[i].a,message[i].n,message[i].m);
		}
    	    
	}
	
}

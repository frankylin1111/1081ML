#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/08/04 ¤ß±o
		ch15 ÀÉ®× -------------- example 2 
*/

int main(int argc,char *argv[]){
	FILE *fp;
	int c;
	
	if ((fp=fopen(argv[1],"a+"))== 0){
		printf("can't creat %s\n",argv[1]);
		exit(1);
	}
	while((c=getchar())!=EOF){
		putchar(c);
		fputc(c,fp);
	}
	    
	fputc(0X1a,fp);
	fclose(fp);
}

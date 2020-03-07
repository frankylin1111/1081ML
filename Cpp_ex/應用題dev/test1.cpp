#include <sys/types.h>    
#include <sys/stat.h>    
#include <fcntl.h>
#include <iostream> 
#include <stdio.h>
#define RSIZE 20
int main() {
	int fd;
	char buff[RSIZE + 1];
	if ((fd = open("data1", 1 | 0x8000)) < 0)exit(1);
	while (1) {
		scanf("%s", buff);
		if (buff[0] == '*')
			break;
		if (write(fd, buff, RSIZE) < 0)
			break;
	}
	close(fd);
} 

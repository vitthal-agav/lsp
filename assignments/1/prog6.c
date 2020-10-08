/*
Write a program which accept file name from user and read whole file.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(int argc, char * argv[]){
	int fd, ret;
	char buff[5];


	if (argc != 2){
		printf("insufficient cmd arguments\n");
		return 1;
	}
	
	fd = open(argv[1],O_RDONLY);
	if (fd == -1){
		printf("Failed to open file\n");
		return -1;
	}
	do{
//		memset(buff,0,sizeof(buff));
		ret = read(fd,buff,5);
		if(ret != -1){
			printf("%s",buff);
		}
		else{
			printf("Failed to read from file\n");
			return -1;
		}
	} while (ret != 0);
}

		

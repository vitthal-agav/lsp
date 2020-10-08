/*

Write a program which accept file name and read first 5 characters from it.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
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
	ret = read(fd,buff,5);
	if(ret != -1){
		printf("Succesfully read 5 bytes from file\n");
		printf("data is - %s\n",buff);
	}
	else{
		printf("Failed to read from file\n");
		return -1;
	}
}

		

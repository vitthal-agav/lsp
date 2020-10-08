/*

Write a program which accept filename and string from user and write that string into
file.

*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(int argc, char * argv[]){
	int fd, ret;

	if (argc != 3){
		printf("insufficient cmd arguments\n");
		return 1;
	}

	printf("string %ld bytes -%s\n",strlen(argv[2]),argv[2]);
	
	fd = open(argv[1],O_WRONLY);
	if (fd == -1){
		printf("Failed to open file\n");
		return -1;
	}
	ret = write(fd,argv[2],strlen(argv[2]));
	if (ret != 1){
		printf("Succesfully written %d byte string to file\n",ret);
	}
	else{
		printf("Faile to write to the file\n");
		return -1;
	}
}

		

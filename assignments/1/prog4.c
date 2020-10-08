/*

Write a program which accept file name from user and open that file.
*/

#include<stdio.h>
#include<fcntl.h>


int main(){
	
	int fd;
	char fileName[20];
	printf("Enter the file path to open\n");
	scanf("%s",fileName);
	fd = open(fileName,O_RDONLY);
	if (fd==-1)
		printf("failed to open file\n");
	else
		printf("file opened successfully\n");
	return 0;
}

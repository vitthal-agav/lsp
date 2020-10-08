/*
Write a program which accept name from command line argument and display it on
screen.
*/
#include<stdio.h>
int main(int argc, char *argv[])
{
	if (argc>1){
		printf("cmd argument : %s\n",argv[1]);
	}
	else{
		printf("no command line argument\n");
	}

}
	

/*
 * AUTHOR: ATHARVA CHAUHAN.
 * THIS FILE IS MADE FOR ONLY TAKING INPUT OF 
 * ANYTHING ENTERED BY USER. WHILE DOING THIS 
 * PROCESS AN APPLICATION FILE AND A TEXT FILE
 * WOULD BE CREATED...
 * THIS FILE WOULD ADD THE DETAILS ONE UPON THE ANATHOR IN TEXT FILE
 * IF YOU WANT IN OTHER WAYS OTHER FILES ARE MADE BY SIR. ATHARVA CHAUHAN
 */
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	char name[18];
	FILE *fptr;
	fptr=fopen("Details.txt","a+");
	printf("ENTER YOUR NAME\n");
	gets(name);
	fprintf(fptr,"NAME:%s\n________________________\n",name);
	fclose(fptr);
}

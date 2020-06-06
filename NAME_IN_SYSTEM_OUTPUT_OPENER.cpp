/*
 * AUTHOR: ATHARVA CHAUHAN
 * THIS FILE CAN OPEN THE INPUT FILE
 * IF YOU BELIEVE THEN RUN ME
 * AND IF YOU BELIEVE THEN ALSO RUN ME...
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* ftag;
	int i;
	char output[256];
	ftag=fopen("details.txt","a+");
	for(i=1; fgets(output,sizeof(output),ftag)!=NULL;i++)
	{
		printf("%02d: %s",i, output);
	}
	fclose(ftag);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int num, i;
	char name[18];
	FILE *mult;
	mult = fopen("HISTORY.txt","a+");
	printf("PLEASE ENTER YOUR NAME BEFORE WE START\nNAME: ");
	scanf("%s",&name);
	printf("ENTER THE NUMBER OF TABLE YOU NEED..\n");
	scanf("%d",&num);
	fprintf(mult,"THE NUMBER TAKEN BY %s WAS %d\n***********************************\n",strupr(name),num);
	for(i=1;i<11;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
		fprintf(mult,"%d * %d = %d\n",num,i,num*i);
	}
	fprintf(mult,"***********************************\n");
}

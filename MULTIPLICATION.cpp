#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int num, i;
	char name[18];
	FILE *mult;
	mult = fopen("HISTORY.txt","a+");				//OPENING THE FILE NAMED HISTORY(OPRNING MULT)
	printf("PLEASE ENTER YOUR NAME BEFORE WE START\nNAME: ");	//TAKING INPUT
	scanf("%s",&name);
	printf("ENTER THE NUMBER OF TABLE YOU NEED..\n");		//TAKING INPUT OF NO. OF TABLE
	scanf("%d",&num);
	fprintf(mult,"THE NUMBER TAKEN BY %s WAS %d\n***********************************\n",strupr(name),num);//PRINTING THE NAME OF USER AND TABLE
	for(i=1;i<11;i++)						//DECLARING FOR LOOP
	{
		printf("%d * %d = %d\n",num,i,num*i);			//PRINTING IN OUTPUT	
		fprintf(mult,"%d * %d = %d\n",num,i,num*i);		//PRINTING IN HISTORY.TXT
	}
	fprintf(mult,"***********************************\n");		//ENDLINE OF HISTORY
	fclose(mult);							//CLOSING MULT	
}

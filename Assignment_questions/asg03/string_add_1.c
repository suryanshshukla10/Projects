#include<stdio.h>
main()
{
int i,j,k;
char first_name[10]={"VISWANATH"};
char second_name[10]={"PRATAP"};
char last_name[10]={"SINGH"};
char name[30];

for(i=0; first_name != '\0'; i++)
	{
	name[i]=first_name[i];	
	}
name[i]=' ';
for(j =0; second_name != '\0';j++)
	{
	name[i+j+1]=second_name[j];
	}
name[i+j+1]= ' ';
for(k=0; last_name[k] != '\0'; k++)
	{
	name[i+j+k+2]=last_name[k];
	}

name[i+j+k+2]='\0';
printf("\n\n");
printf("%s\n",name);
}
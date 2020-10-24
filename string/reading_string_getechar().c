#include<stdio.h>
main()
{
char name[40],ch;
int i=0;
printf("Enter the name");
while(ch != '\n')
{
	ch = getchar();
	name[i] = ch;
	i++; 
}	
	name[i]='\0';
	printf("\n%s",name);
	
}
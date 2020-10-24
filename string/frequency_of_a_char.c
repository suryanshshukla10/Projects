/******frequency of character*******/

#include<stdio.h>
main()
{
char str[1000],ch;
int frequency=0;
printf("Enter the string\n");
gets(str);

printf("Enter the character you wants to find the frequency of\n");
ch = getchar();
for(int i=0; str[i] != '\0'; ++i)
	{	
if(str[i]==ch){++frequency;}
	}
printf("Frequency of %c is %d",ch,frequency);


}
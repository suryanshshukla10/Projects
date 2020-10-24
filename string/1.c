/********removing the all the character but not the alphabets****/

#include<stdio.h>
main()
{
char str[1000],ch;
int i=0;
printf("Enter the string with alphabets\n");
gets(str);
for(int i=0; str[i] != '\0'; i++)
{
	if(str[i] =='s'){str[i]='\0';}
}
printf("\n");
puts(str);
}
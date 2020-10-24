/**************function to check whether string are equal or not************/


#include<stdio.h>

int strcomp(char *ptr1, char *ptr2);

main()
{

printf("Enter the first string\n");
char str1[100],str2[100];
gets(str1);
printf("\nEnter second string\n");
gets(str2);

int y = strcomp(&str1,&str2);
if(y==1){printf("\n String are equal");}
else if(y==0){printf("\nString are not equal");}
}

int strcomp(char *ptr1, char *ptr2)
{int i,j;
for(i=0; (*ptr1) != '\0'; ++i)
{ptr1++; }
for(j=0; (*ptr2) != '\0'; ++j)
{ptr2++;}
if(i!=j){return 0;}
if (i==j)
{
for(int k=0;(*ptr1)!='\0';k++)
{
if( (*ptr1) == (*ptr2) ) 
{ptr1++;
ptr2++;}
}
if( (*ptr1)=='\0' ){return 1;}
else{return 0;}
}
}
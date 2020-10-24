#include<stdio.h>
main()
{
char str1[100],str2[100];
int flag=0;
printf("Enter first string\n");
gets(str1);
printf("Enter second string\n");
gets(str2);
printf("\n\nentered string are ------\n\n");
printf("%s\n%s",str1,str2);

if(strlen(str1)==strlen(str2))
	{

	for(int i=0;str1[i] != '\0';i++){if(str1[i] !=str2[i]){flag=1; break;}	}
	
if(flag==0){printf("\n\nstring are equal");}
}


else{printf("\n\nString are not equal");}

}
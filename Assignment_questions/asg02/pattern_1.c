#include<stdio.h>
main()
{
for(int i=1;i<=9;i++)
		
		{
	for(int j=1;j<=9;j++){if(i<=j){printf("%d",j);}else{printf(" ");continue;}}
		printf("\n");}
}
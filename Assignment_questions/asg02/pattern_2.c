#include<stdio.h>
main()
{
int a=9;
while(a>=1)

		{
	for(int i=1; i<=9; i++)
			{
			if(i>a){printf(" ");}
			else {printf("%d",i);}
			}
	for(int j=9; j>=1; j--)
			{
			if(j>a){printf(" ");}
			else{printf("%d",j);}
			}
	printf("\n");
	a--;

		}




}
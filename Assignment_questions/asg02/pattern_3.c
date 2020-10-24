#include<stdio.h>
main()
{
for(int i=1; i<=6; i++)
		{
	printf("%c",'s');
		}
printf("\n");
for(int j=2; j<=4; j++)
		{
	for(int k=1; k<=6; k++)
			{
			if(k==1 || k==6){printf("%c",'s');}
			else{printf(" ");}
			}
	printf("\n");
		}

for(int l=1; l<=6; l++)
		{
	printf("%c",'s');
		}
}
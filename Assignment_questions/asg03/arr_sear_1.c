#include<stdio.h>
main()
{
int count=0;
int arr[6];
printf("Enter numbe\n");
for(int i=0; i<5; i++)
		{
	scanf("%d",&arr[i]);
		}

for(int j=0; j<5; j++)
		{
	if(arr[j]==2){count++;printf("no is at%d\n",j);}
	else{continue;}
		}
printf("No of times 2 is: %d", count);
}
#include<stdio.h>
main()
{
printf("Enter number");
int arr[3];
for(int i=0;i<=2;i++){scanf("%d",&arr[i]);}
printf("%d",i);
int flag=1;
int k=0,j=1;
while(flag==1)
		{
	if(arr[k]<arr[j]){k++;j++;}
	if(arr[k]>arr[j]){printf("Not absolute"); flag=2;}
	if(k==1 && j==2){printf("Absolute"); flag=2;}
		}

}
#include<stdio.h>
main()
{
printf("Enter the 5 digit number\n");
int arr[5];
for(int i=0;i<=4;i++){scanf("%d",&arr[i]);}

int k=4;
int l=0;
int flag=1;
while(flag==1){
	if(arr[k]==arr[l]){k--; l++;}
	if(arr[k] != arr[l]){flag = 2; printf("N.P.");}
	if(k==0 && l==4){printf("Palidrome"); flag = 2;}
	
		}

}
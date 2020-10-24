#include<stdio.h>
main()
{

printf("Enter 2 no\n");
int x,y;
scanf("%d%d",&x,&y);
int k=0,l=0,a,flag=0,arr1[100],arr2[100];
for(int i=1;i<=x;i++){if(x%i==0){arr1[k]=i;k++;}}
for(int j=1;j<=y;j++){if(y%j==0){arr2[l]=j; l++;}}

for(int i=0; i<k; i++){for(int j=0; j<l; j++){if(arr1[i]==arr2[j]){a=arr1[i]; flag=1;}}}

if(flag==1){printf("\nGCD is::%d",a);}
else if(flag==0){printf("\nNo GCD");}
}
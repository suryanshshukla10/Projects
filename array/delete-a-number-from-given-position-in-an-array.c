#include<stdio.h>
main()
{
int a[100],n,posdel;
printf("Enter the no of terms\n");
scanf("%d",&n);
printf("Enter the array element\n");
for(int i=1;i<=n;i++){scanf("%d",&a[i]);}
printf("array entered is\n");
for(int i=1;i<=n;i++){printf("%d\t",a[i]);}
printf("\nEnter the element position to delete\n");
scanf("%d",&posdel);
for(int i=1;i<=n;i++){if(i<posdel){a[i]=a[i];} else{a[i]=a[i+1];}}
printf("New array is\n");
for(int i=1;i<n;i++){printf("%d\t",a[i]);}
}

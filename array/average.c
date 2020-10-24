#include<stdio.h>
main()
{
int a[50],n,sum=0;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements");
for(int i=1;i<=n;i++){scanf("%d",&a[i]); sum = sum+ a[i];}
float avg;
avg=(float)sum/n;
printf("sum is : %d\n average is : %f", sum, avg);
}
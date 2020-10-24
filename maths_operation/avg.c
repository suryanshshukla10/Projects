#include<stdio.h>
main()
{
int a[30],sum=0;
int x,y,z,n;
printf("Enter the 8 numbers\n");
for(int i=0;i<8;i++){scanf("%d",&a[i]);}
for(int i=0; i<8; i++)
{sum = (sum + a[i] );}
float average = sum/8.0;
printf("\n average is %f",average);

}
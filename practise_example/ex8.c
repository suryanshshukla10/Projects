#include<stdio.h>
main()
{
int n,count =0;
printf("Enter an integera");
scanf("%d",&n);
while(n != 0)
{n /=10;++count;}
printf("Number of digits : %d",count);

}
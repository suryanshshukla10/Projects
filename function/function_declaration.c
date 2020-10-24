/*********declaration of function*******/

#include<stdio.h>
main()
{
int x1,x2;
printf("Enter two numbers\n");
scanf("%d",&x1);
scanf("%d",&x2);
int y;
y = mul(x1,x2);
printf("\nproduct of %d & %d is ::%d",x1,x2,y);
}

int mul(int x1, int x2)
{
int call = (x1*x2);
return call;
}
#include<stdio.h>
main(){
int a,b;
printf("enter the value of a");
scanf("%d",&a);
printf("\n Enter the value of b");
scanf("%d",&b);
a = a+b;
b = a-b;
a = a-b;
printf("\n swap value of a= %d b = %d",a,b);
}
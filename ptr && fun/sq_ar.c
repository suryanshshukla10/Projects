/********WAP to find the area of a square****************/

int ar(int *ptr)
{
int y;
y = (*ptr)*(*ptr);
return y;
}

#include<stdio.h>
main()
{
printf("Enter the length of side of square\n");
int x;
scanf("%d",&x);
int y = ar(&x);
printf("\narea of square is::::%d",y);
}
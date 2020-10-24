/********WAP to find the power****************/

int pow(int *ptr1,int *ptr2)
	{int z=1;
	for(int i=1; i<=(*ptr2);i++){
	z= (*ptr1)*z;}
	return z;}


#include<stdio.h>
main()
{
int x,y;
printf("Enter the no\n");
scanf("%d",&x);
printf("Enter the power\n");
scanf("%d",&y);
int z=pow(&x,&y);
printf("\npower of %d^%d is ::::%d",x,y,z);
}

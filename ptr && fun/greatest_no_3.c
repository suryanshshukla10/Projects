/********WAP to find the greatest of three number using pointer && function****************/
int lar(int *ptr1,int *ptr2, int *ptr3)
{
if((*ptr1 >=*ptr2) && (*ptr1 >= *ptr3)){return *ptr1;}
else if ((*ptr2 >=*ptr1) && (*ptr2>=*ptr3)){return *ptr2;}
else {return *ptr3;}

} 

#include<stdio.h>
main()
{
printf("Enter three numbers\n");
int a,b,c,largest;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int y =lar(&a,&b,&c);
printf("Largest is \n %d",y); 
}
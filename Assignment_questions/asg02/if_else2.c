#include<stdio.h>
main()
{
int y,z,u;
float amount;
printf("enter Number of units\n");
scanf("%d",&u);
if (u<50)
{amount =(float)(u*.5);
printf("A\n"); }
else if(50<u && u<100)
{amount = (float)(u*1);
printf("B\n");}
else if(100<u && u<=200)
{amount = (float)(u*2);
printf("C\n");}
else
{amount = (float)(u*5);
printf("\nelse statemet\n");}
printf("\n total amount paid is:- %f",amount);


}
#include<stdio.h>
int main()
{
int array[10];
int sum=0;
printf("enter number\n");
for(int i=0; i<=9; i++)
{	scanf("%d",&array[i]);		}
for(int j=0; j<=9;j++)
{	sum=(array[j]*array[j]+sum);	
					}
printf("sum is: %d",sum);

}
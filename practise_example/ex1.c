#include<stdio.h>
int main()
{
int num,i=1;
int fact = 1;
printf("\nEnter and number");
scanf("%d",&num);
while(i<=num)
{
fact = fact*i;
i++;

}
printf("\nFactorial of %d = %d", num,fact);
}
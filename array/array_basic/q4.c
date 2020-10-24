/************complex number addition using structure**************/

#include<stdio.h>
main(){
struct complex	
{
	int real;
	int imag;
}; 
struct complex no1,no2,sum;

printf("Enter the real part for 1st no\n");
scanf("%d",&no1.real);

printf("Enter the imaginary part for 1st no.\n");
scanf("%d",&no1.imag);

printf("Enter the real part for 2st no\n");
scanf("%d",&no2.real);
printf("Enter imaginary part for 2nd no.\n");
scanf("%d",&no2.imag);

sum.real=no1.real + no2.real;
sum.imag = no1.imag + no2.imag;
printf("\ncomplex no is %d + %dj", sum.real,sum.imag);

}
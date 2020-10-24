#include<stdio.h>
main(){


/*............use of if statement................*/

	int a,b,c,d;
	printf("enter the number");
	scanf("%d",&a);
	if(a < 50)
{
	printf("wow you entered the lucky number\n");		
}
	b = a*2;
	c = a*3;
	d = a*4;
	printf("two times of your number is %d \n three times of your number is %d \n four times your number is %d", b,c,d);
}

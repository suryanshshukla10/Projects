#include<stdio.h>
main(){
	int a,b,c;   //interchanging the values of variable with the use of third variable 
	printf("Enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("new value of a is" "%d\n", a );
	printf("new value of b is " "%d",b );
}
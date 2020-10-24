#include<stdio.h>
#include<conio.h>
main() {
//*we are trying to create the swap without using the swap
	int a,b,c;
	printf("enter the value of a");
	scanf("%d", & a);
	printf("\n entere the value of b");
	scanf("%d", &b);
	a = a + b; // a = 30
	b = a - b; // b = 10
	a = a - b; // a = 20      
	printf("\n value after swap a = %d b = %d", a,b);
	getch();
	
}
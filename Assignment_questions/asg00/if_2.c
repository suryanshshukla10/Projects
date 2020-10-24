#include<stdio.h>
main()


{
int a,b,c,d;
	printf("Hello Sir\n");
	printf("enter the biggest number you will entere\n");
	scanf("%d",&c);
	printf("enter the smallest number you will enter \n");
	scanf("%d", &d);
	printf("enter a number");
	scanf("%d", &a);
	
	if(a>d && a<c){
	printf("you entered correct number \nso i will tell whether it is odd or even\n");
	b = (a%2);
	if(b == 0){printf("you entered the even number\n");}
	else{printf("you entered the odd number");}
}
	else
	{printf("please sir\nenter a number in the range you decided");}

}
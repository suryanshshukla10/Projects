#include<stdio.h>
main()
{
printf("enter the number 1-3");
int x;
scanf("%d",&x);
switch(x){
case 1: {printf("\none");}
break;
case 2: {printf("\ntwo");}
break;
case 3: {printf("\nthree");}
break;
default : {printf("\nwrong");}
break;
}
}
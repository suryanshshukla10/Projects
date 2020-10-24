#include<stdio.h>
main()
{
printf("enter the marks\n");
int marks,index;
int c;
scanf("%d",&marks);
index = marks/10;
switch (index)
{
case 10:
case 9:
case 8:
	c = 100;
	break;
case 7:
case 6:
	c= 90;
	break;
case 5:
	c = 80;
	break;
default:
	c = 10;
	break;
	
}
printf("%d", c);

}
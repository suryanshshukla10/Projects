/********fibonaci secquence upto n terms***********/

#include<stdio.h>

/*function declaration*/
int FIB(int n);
main()
{
printf("Enter the no of terms\n");
int n;
scanf("%d",&n);
int y = FIB(n-1);
printf("\nSum of fibonaci upto n is %d",y);
}

/*function body*/
int FIB(int n)
{
int y;
if(n==0){y=0;}
else if(n==1){y=1;}
else	{
	y = FIB(n-1) + FIB(n-2);
	}

return y;}
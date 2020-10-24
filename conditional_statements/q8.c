#include<stdio.h>
main()
{
int n;
printf("Enter the numebr of terms to be printed");
scanf("%d",&n);
printf("Series:2/3*3\t ");
int x=3,i=1;
float N,D;
float sum=0.0,y;
while(i<=n-1)
	{
	for(int i=2;i < x;i++){if(x%i ==0){x++;}}
N=x;
x++;
	for(int i=2;i < x;i++){if(x%i ==0){x++;}}
D=x;
	y=(N/(D*D));
	sum=(.222 + y+ sum);
	printf(" + %f/%f*%f \t",N,D,D);
i++;
	}
printf("\nsum is %f", sum);


return 0;}
#include<stdio.h>
int main()
{
int j =1;
int x,y1,y2,y3,y4,y5,y6;
printf("Enter three digit number");
scanf("%d",&x);
while(j !=0){
	y1=(x%10);
	y2=(x/10);
	y3=(y2%10);
	y4=(x-y1)/100;
	y5=(y1+y4+y3);
	y6=(y5/10);
if(y6 !=0){j=1; 
	   x=y5;}
else{ j=0;}

		}
printf("%d",y5);
}
#include<stdio.h>
int main()
{
printf("Enter three digit number\n");
int x,y1,y2,y3,y4,y5,y6;
int f1=1,f2=1,f3=1,f4;
scanf("%d",&x);
y1=(x%10);
y2=(x/10);
y3=(y2%10);
y4=(x-y1)/100;
int i=y1;
while(i>=1)
		{
	f1=f1*i;
	i--;
		}
int j=y3;
while(j>=1)
		{
	    	f2=f2*j;
		j--;
	    	}
int k=y4;
while(k>=1)
		{
		f3=f3*k;
		k--;
		}
f4=(f1+f2+f3);
if(f4==x){printf("\nKrishnamurty nuber");}
else{printf("\nNot Krishnamurty number");}


}
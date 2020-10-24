#include<math.h>
#include<stdio.h>

main()
{
int flag;
do{ 
int x;
printf("Enter a positive integer\n");
printf("Enter 999 to exit\n");
scanf("%d",&x);
int y=1,n;
int reminder;
int i=0,base;
int binary=0;
if (x>0){n=1;}
if(x<0){n=3;}
if(x==999){n=2;}
switch(n){
case 1:
 while(y>0){
	y=x/2;
	reminder = x%2;
	x=y;	
	base = pow(10, i);
	i++;
	binary = (binary + base*reminder);
	}
printf("Binary is %d", binary);
flag = 0; break;
case 2: break;
case 3: flag=1;
 
}

}
while(flag==1);
}
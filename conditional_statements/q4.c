#include<stdio.h>
int main()
{
int x,y1,y2,x1;
printf("Input a number\n");
scanf("%d",&x);
printf("\n%d\t",x);
int i=1;
while(i ==1)
		{
		x1=(x%2);
		if(x1==0){y1=(x/2);	
			   printf("%d\t",y1);
			   x=y1;
			  if(y1 != 1) {i=1;}
		else{i=2;}
			}
		else if(x1 !=0){
				y2=(3*x+1);
				printf("%d\t",y2);
				x=y2;
				if(y2 !=1){
					  i=1;	
					  }
				else{i=2;}
				}

		}
}
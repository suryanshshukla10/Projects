#include<stdio.h>
int main()
{
int x=0,i=0,j=0,k=0,y=0,z1,z2,n;
printf("Enter a number\n");
scanf("%d",&n);
printf("\nmultiple of 5:\t");
while(x<n){
	x=i*5;
	i++;
	if(x<n){printf("%d\t",x);}

	 }
printf("\nMutiple of 7:\t");
while(y<n){
	y=j*7;
	if(y<n){printf("%d\t",y);}
	j++;

	   }
printf("\nMultiple of 5 but not 7:\t");
while(k<n){
	   z1=(k%7);
	  z2=(k%5);
	if(z2==0 && z1 !=0){printf("%d\t",k);}

	k++;
	}
}
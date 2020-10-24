#include<stdio.h>
main()
{
int i =2,num,y;
printf("enter the number");
scanf("%d",&num);
if(i<=num){
y = num % i;
if(y==1){


}
if(i>=num){
printf("\nNumber is prime");

}
i++;
}
else{printf("\nit is composite");}
}
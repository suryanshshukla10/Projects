#include<stdio.h>
main(){
int number1,number2;
scanf("%d %d",&number1,&number2);
if(number1>=1)
{printf("good");
}
if(number1==1 && number2>2){printf("morning");}
if((number1<=1)&&(number2>=2))
{printf("afternoon");}
if((number1>1)&&(number2>=2))
{printf("Afternoon");}
if((number1>1)&&(number2>2))
{printf("evening");}

}
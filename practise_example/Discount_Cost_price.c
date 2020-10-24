#include<stdio.h>
int main(){
int x;
int amount,MillClothCost,HandLoomItem,Amount,AmountT,TotalAmount;
printf("Enter the total amount\n");
scanf("%d",&amount);
printf("\nenter 1 to mill cloth\nEnter 2to handloom\nEnter 3 to exit\n");
scanf("%d",&x);

switch(x){
case 1: 
	printf("\nEnter the amount in Mill cloth\n");
	scanf("%d",&Amount);
	if(0<amount<100){MillClothCost = Amount;}
	else if(101<amount<200){MillClothCost = (0.95*Amount);}
	else if(201<amount<300){MillClothCost=(0.925*Amount);}
	else if(301<amount){MillClothCost=(0.9*Amount);}
case 2:
	printf("\nEnter amount of handloom cloth\n"); 
	scanf("%d",&AmountT);
	if(0<amount<100){HandLoomItem = (0.95*AmountT);}
	else if(101<amount<200){HandLoomItem = (0.95*AmountT);}
	else if(201<amount<300){HandLoomItem=(0.925*AmountT);}
	else if(301<amount){HandLoomItem=(0.9*AmountT);}
	break;
case 3: exit(1);
default: printf("invalid choice");
}

TotalAmount = (HandLoomItem + MillClothCost);
printf("\nMill Cloth price: %d\nHand Loom Price: %d\nTotal Price: %d",HandLoomItem,MillClothCost,TotalAmount);
return 0;
}
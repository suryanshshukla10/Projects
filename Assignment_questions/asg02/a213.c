#include<stdio.h>
main()
{
int units,custnum;
float charges;
printf("Enter customer NO. & unit consumed\n");
scanf("%d%d", &custnum,&units);
if(units <= 200)
{charges = 0.5*units;}
else if(units <= 400)
{charges = 100 + 0.65*(units-200);}
else if (units <= 600)
{charges = 230 + 0.8*(units-400);}
else {charges = (390 + 1.0*(units-600));}
printf("\nCustomer No.: %d:charges =%f\n", custnum,charges);


}
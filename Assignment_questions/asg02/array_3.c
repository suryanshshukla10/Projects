#include<stdio.h>
main(){
int arr[4];
printf("Enter the marks\n");
for(int i=0;i<=3;i++){
scanf("%d",&arr[i]);}
int i=0;
int x=0,y=0,z=0;
while(i<=3)
{
	if(0<arr[i] && arr[i]<=10){x++; }
	if(10<arr[i] && arr[i]<=20){y++;}
	if(20<arr[i] && arr[i]<=30){z++;}
i++;
}
printf("no of student between 0-10::%d\nno of student between 10-20::%d\nno of student between 20-30::%d\n",x,y,z);






}
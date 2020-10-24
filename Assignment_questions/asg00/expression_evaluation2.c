#include<stdio.h>
main(){
int a=20,b=-15,c=10,d=-5,z;
z= ++c + a++ + ++a-c++;
printf("%d",z);
}
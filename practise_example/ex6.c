#include<stdio.h>
int main() {
int n, reverseInteger=0;
int remainder,originalInteger;
printf("Enterr an integer");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reverseInteger=reverseInteger*10+remainder;
n /=10;

if(originalInteger==reverseInteger){
printf("%d is a parlindrome:",originalInteger);}
else{
printf("%d is not a parlinkdrome integer", originalInteger);
}}
return 0;
}
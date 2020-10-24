#include<stdio.h>
main(){
int w1,w2,w3;
int h1,h2,h3;
printf("enter the weight and height of 3 students\n");
scanf("%d%d%d%d%d%d",&w1,&h1,&w2,&h2,&w3,&h3); 
int count=0;
if (w1<50 && h1 >170){count++;}
if(w2<50 && h2 > 170){count++;}
if(w3<50 && h3 > 170){count++;}
printf("number of studet whose\nweight<50 and height>170cm =%d",count);
}



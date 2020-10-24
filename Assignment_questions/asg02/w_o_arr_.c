#include<stdio.h>
int main()
{
int arr[5][5];
char city,m,d,b;
int i=0,j=0,k=0,l=0;
int flag =1;
while(flag !=0){
printf("Enter\n m:::madras\nd:::delhi\nc:::calcutta\nb:::bombay\n and then car1,2,3,4\nany key to exit");
scanf("%c",&city);
char ch = 'city';
switch(ch)
{
case 'm': 		scanf("%d",&i);
			if(i==1){arr[0][0]=arr[0][0]+i;} 
			else if(i==2){arr[0][1]=arr[0][1]+i;}
			else if(i==3){arr[0][2]=arr[0][2]+i;}
			else if(i==4){arr[0][3]=arr[0][3]+i;}  
	break;



case 'd': 		scanf("%d",&j);
			if(j==1){arr[1][0]=arr[1][0]+j;} 
			else if(j==2){arr[1][1]=arr[1][1]+j;}
			else if(j==3){arr[1][2]=arr[1][2]+j;}
			else if(j==4){arr[1][3]=arr[1][3]+j;}
  break;
case 'c': 		scanf("%d",&k);
			if(k==1){arr[2][0]=arr[2][0]+k;} 
			else if(k==2){arr[2][1]=arr[2][1]+k;}
			else if(k==3){arr[2][2]=arr[2][2]+k;}
			else if(k==4){arr[2][3]=arr[2][3]+k;}  
break;
case 'b': 		scanf("%d",&l);  
			if(l==1){arr[3][0]=arr[3][0]+l;} 
			else if(l==2){arr[3][1]=arr[3][1]+l;}
			else if(l==3){arr[3][2]=arr[3][2]+l;}
			else if(l==4){arr[3][3]=arr[3][3]+l;}
break;
default: flag =0;
}
}
printf("\tambassador::\nmadras ::\t%d\ndelhi :: \t%d\ncalcutta :: \t%d\nbombay :: \t%d",arr[0][0],arr[0][1],arr[0][2],arr[0][3]);
printf("\tfiat::\nmadras ::\t%d\ndelhi ::\t%d\ncalcutta::\t%d\nbombay :: \t%d",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);
printf("\tdolphin::\nmadras ::\t%d\ndelhi::\t%d\ncalcutta ::\t%d\nbombay :: \t%d",arr[2][0],arr[2][1],arr[2][2],arr[2][3]);
printf("\tmaruti::\nmadras ::\t%d\ndelhi::\t%d\ncalcutta ::\t%d\nbombay :: \t%d",arr[3][0],arr[3][1],arr[3][2],arr[3][3]);
	

}
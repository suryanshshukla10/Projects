#include<stdio.h>
main()
{
int a[20],n,x=1,temp;
printf("Enter the no of digit\n");
scanf("%d",&n);
printf("Enter only digits from 0 - 9\n");
for(int i=1;i<=n;i++){scanf("%d",&a[i]);}

while(x<n+1)
for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){
if(a[i]>a[j])
{
	temp=a[i]; 
	a[i]=a[j];
	a[j]=temp;
x++;
}
}
}
printf("\n");
printf("greatest digit is ");
for(int j=1;j<=n;j++){printf("%d",a[j]);}

}
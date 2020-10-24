#include<stdio.h>
main()
{
int a[20][20],b[20][20],j=1,flag=1,flag1=1,n=1;
printf("Enter the element in matrix row wise\n");
for(int i=1;i<4;i++){for(int j=1;j<4;j++){scanf("%d",&a[i][j]);} b[i][j]=a[i][j];}
printf("Entered matrix is\n");
for(int i=1;i<4;i++){for(int j=1;j<4;j++){printf("%d\t",a[i][j]);} printf("\n");}

for(int i=1;i<4;i++){for(int j=1;j<4;j++){if(a[i][j]==a[j][i]){flag++;} if(a[i][j]==-a[j][i]){flag1++;}}}
printf("Flag is %d\n",flag);
if(flag>=9){printf("Matrix is symmetric\n");}
else if(flag1>=9){printf("Matrix is skew symmetric\n");}
else {printf("Not symmetric ");}



}
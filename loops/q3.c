#include<stdio.h>
main()
{
int a[20][20],b[20][20],n=2,k=5;
for(int i=1;i<5;i++){for(int j=1;j<k;j++)
			{
	a[i][j]=1;
	
			}

k--;
}


for(int i=5;i>=2;i--){for(int j=n;j<=5;j++)
			{
	a[i][j]=-1;
	
			}
n++;
}


for(int i=1;i<=5;i++){for(int j=1;j<=5;j++)
	{	if(i+j==6){a[i][j]=0;}	}}







for(int i=1;i<=5;i++){for(int l=1;l<=5;l++){printf("%d\t",a[i][l]);}printf("\n");}

}
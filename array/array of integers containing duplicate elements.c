#include<stdio.h>
main()
{
int a[100],n,dup=0,i;
printf("Enter the no of terms\n");
scanf("%d",&n);
printf("Enter the elements in array");
for(i=1; i<=n; i++){scanf("%d",&a[i]);}
for(i=1;i<=n;i++)
	{dup=0;
	for(int j=i;j<=n;j++)
		{
		if(a[i]==a[j]){dup++;}

		}
	
if(dup>=2){printf("\n%d is duplicate\n",a[i]);}		
	}

if(dup==0){printf("No duplicate number is found");}

}
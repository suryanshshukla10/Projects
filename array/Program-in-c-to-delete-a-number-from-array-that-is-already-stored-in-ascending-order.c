#include<stdio.h>
int main()
{
	int a[20],i,n,ele;
	printf("Enter the Number the element :");
	scanf("%d",&n);
	printf("\nEnter the element of araay in Assending Order :\n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	printf("\nArray elements enter by use are : ");
	for(i=1;i<=n;i++)
	printf("%d\t",a[i]);
	printf("\nEnter a number you want to delete :");
	scanf("%d",&ele);
	for(i=1;i<n;i++)
	{
		if(a[i]<ele)
		{
			a[i]=a[i];
		}
		else
		a[i]=a[i+1];
	}
	printf("\nArray after deleting a number are :\n");
	for(i=1;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}







 

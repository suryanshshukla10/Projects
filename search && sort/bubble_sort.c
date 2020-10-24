/**********************bubble sort*************/

#include<stdio.h>
void swap(int *ptr1,int *ptr2);
main()
{
printf("Enter the size of array\n");
int n;
scanf("%d",&n);
printf("Enter array elements\n");
int a[100];
for(int i=0; i<n; i++){scanf("%d",&a[i]);}

for(int i=0; i<n-1; i++)
	{
for(int j=0; j<n-1-i;j++)
	{if(a[j]>a[j+1]){swap(&a[j], &a[j+1]);}}
	}
printf("\nArray after sorting is\n");
for(int i=0; i<n;i++){printf("%d\t",a[i]);}
}

void swap(int *ptr1,int *ptr2)
{int temp;
temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;}



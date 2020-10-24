/**************insertion sort***********/
#include<stdio.h>
main()
{
/*****array input******/
printf("Enter the size of array\n");
int j,n,key;
scanf("%d",&n);
printf("Enter array elements\n");
int a[100];
for(int i=0; i<n; i++){scanf("%d",&a[i]);}

/****insertion sort***/
for(int i=1;i<n;i++)
	{
	key = a[i];
	j = i-1;
	while(j>=0 && a[j]>key)
	{a[j+1]=a[j];
	j = j-1;}
	a[j+1] = key;
	}
printf("Array after sorting is\n");
for(int k=0;k<n;k++){printf("%d\t",a[k]);}

}
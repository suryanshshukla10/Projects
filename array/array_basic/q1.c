#include<stdio.h>

int search(int *ptr, int x, int y);

main()
{
printf("Enter the size of array\n");
int n;
scanf("%d",&n);
int a[100];
printf("\nEnter the elements\n");
for(int i=0;i<n;i++)
	{scanf("%d",&a[i]);}
printf("\n enter the number to be searched\n");
int num;
scanf("%d",&num);
int pos;
pos = search(&a,n,num);
if(pos>=0 && pos<n){printf("\n position of num is::: %d",pos+1);}
else if (pos == -1){printf("\nNumber not found");}
}


int search(int *ptr, int x, int y)
{
for(int i=0; i<x; i++){if((*ptr)==y){return (i);} ptr++;}
return (-1);
}




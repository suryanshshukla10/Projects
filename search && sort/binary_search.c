/******binary search********/
#include<stdio.h>

main()
{
printf("Enter the size of array\n");
int n;
scanf("%d",&n);
printf("Enter array elements\n");
int a[100];
for(int i=0; i<n; i++){scanf("%d",&a[i]);}

printf("\nEnter element to be searched\n");
int search;
scanf("%d",&search);
/***binary search****/

int first =0;
int last = n-1;

int middle = (first + last)/2;

while(first<=last){
		
	if(search >a[middle]){first = middle + 1;}
	else if (a[middle] == search){printf("%dfound at position %d",search,middle+1); break;}
	else{last = middle - 1;}
	middle = (first + last)/2;
		
		}
if(first > last){printf("\nNumber not found");}
}
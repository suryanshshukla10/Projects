/***********swaping of smallest and largest element in an arrray********/
/***********this include swaping of element with the use of third variable**********/
/*******declaration of some integer variable is done after the declaration of array***********/

#include<stdio.h>
main()
{
int a[20],b[20],n;
printf("Enter no. of terms\n");
scanf("%d",&n);
printf("Enter the terms in array");
for(int i=1; i<=n; i++)
	{	scanf("%d",&a[i]);
		b[i]=a[i];	}
int lpos,spos,sml=a[1],lar=a[1],temp;
for(int i=1; i<=n; i++)
				{
		if(sml>=a[i]){sml=a[i]; spos=i;}
		if(lar<=a[i]){lar=a[i]; lpos=i;}
				}
 printf("Original matrix is:\n");
for(int i=1;i<=n;i++){printf("%d\t",a[i]);}
		temp = b[spos];
		b[spos]=b[lpos];
		b[lpos]=temp;
printf("\n");
printf("New matrix is:\n");
for(int i=1; i<=n; i++){printf("%d\t",b[i]);}


return 0;}
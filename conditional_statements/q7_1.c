#include<stdio.h>
main()
{
        int i,j;
        
                
        for(i=6;i>=1;i--)
        {
            for(j=1;j<=6-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%c",(char)(j+64));
            }
            for(j=i-1;j>=1;j--)
            {
                printf("%c",(char)(j+64));
            }
            printf("\n");
        }
}
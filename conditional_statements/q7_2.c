#include <stdio.h>
int main()
{
    int i, j=5,k=5;

    
        for(i=5; i>=1; i--)
    {	j=i;
        while(j>=1)
        {
            printf("%d",j);
		j--;
        } 
        printf("\n");
    }
    
    return 0;
}
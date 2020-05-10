/*
Name: C Program for Print Pattern
Input = 5
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
	
*/
#include<stdio.h>
#include<stdlib.h> 
void main() 
{
    int i, j,n;
    printf("Enter Number : ");
    scanf("%d",&n); for(i=-n+1;i<n;i++)
    {
        for(j=-n+1;j<n; j++)
        {
            if (abs (j) +1>=n-abs (i))
            printf ("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
} 
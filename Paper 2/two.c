/*
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*/

//Program to print the given pattern. 
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number. \n");
    scanf("%d",&n);

    int spaces = ((n) * 4) + 2; 
    n++;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" *");
        }

        for(int k=0; k<spaces; k++)
            printf(" ");

        for(int j=0; j<i; j++)
        {
            printf("* ");
        }

        spaces = spaces - 4;   
        printf("\n");
    }

        spaces = spaces + 4 ;   
        
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            printf(" *");
        }

        for(int k=0; k<spaces; k++)
            printf(" ");

        for(int j=0; j<i; j++)
        {
            printf("* ");
        }

        spaces = spaces + 4;   
        printf("\n");
    }
}
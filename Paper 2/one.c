//Program to print all the leader of an array.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements. \n");
    scanf("%d",&n);

    int array[n];
    printf("\n Enter elements. ");
    for(int i=0; i<n; i++)
        scanf("%d",&array[i]);

    int large = array[n-1];
    printf("Leaders: %d,",large);

    for(int i=n-2; i>=0; i--)
    {
        if(array[i]>large)
        {
            printf(" %d,",array[i]);
            large = array[i];
        }
    }
    return 0;
}

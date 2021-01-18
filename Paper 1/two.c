//Program to find the median of elements of a given stream of array.
#include<stdio.h>

int main()
{
    int n;
    int median;
    printf("Enter the number of elements. \n");
    scanf("%d",&n);

    int array[n];
    for(int i=0; i<n; i++)
    {
        printf("\n Enter element.");
        scanf("%d",&array[i]);

        for(int j=i; j>0; j--)
        {
            if(array[j]<array[j-1])
            {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
        if((i+1)%2==0)
        median = (array[i/2]+array[(i/2)+1])/2;
        
        else
        median = array[(i+1)/2];

        printf("\n Median = %d",median);
    }
    return 0;
}

int nth_smallest(int array[], int len)
{

}
//Program to find the last two smallest elements in the array. 
#include<stdio.h>

int main()
{
    int n = 7;
    int array[] = {12,13,1,10,0,34,1};

    int smallest = array[0];
    int sec_smallest = array[0];
    for(int i=0; i<n; i++)
    {
        if(array[i]<smallest)
        smallest = array[i];

        else if((array[i] != smallest) && (array[i]<sec_smallest))
        sec_smallest = array[i];
    }
    printf("Smallest = %d and Second Smallest = %d",smallest,sec_smallest);
    return 0;
}
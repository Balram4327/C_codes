//Program to rotate array. 
#include<stdio.h>

void rotate(int [], int, int);

int main()
{
    int n = 6; //lenght of the array
    int d = 2; //index of rotation

    int array[] = {1, 2, 3, 4, 5, 6}; //assigning arrays

    rotate(array,n,d);
    return 0;
}

void rotate(int array[], int n, int d)
{
    int arrayTemp[n];
    for(int i=d; i<n; i++)
        arrayTemp[i] = array[i-d];

    for(int i=0; i<d; i++)
        arrayTemp[i] = array[n-d+i];

    for(int i=0; i<n; i++)
        printf("%d ",arrayTemp[i]);
}
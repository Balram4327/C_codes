#include<stdio.h>

int main()
{
    int n = 5, m = 4; //lenghts of the arrays 
    int array1[5] = {1, 3, 4, 5, 7}; //assigning arrays
    int array2[4] =  {2, 3, 5, 6}; //assigning arrays

    int array[n+m];

    int ind1 = 0, ind2 = 0, ind3 = 0, ind4 = m+n-1;

    for(int i=0; i<n+m; i++)
    {
        if((ind1==n) && (ind2==m))
        break;

        else if(ind2>m-1)
        {
            array[ind3] = array1[ind1];
                ind3++;
                ind1++;
        }

        else if(ind1>n-1)
        {
            array[ind3] = array2[ind2];
                ind3++;
                ind2++;
        }
        
        else 
        {
        
            if(array1[ind1]<array2[ind2])
            {
                array[ind3] = array1[ind1];
                ind3++;
                ind1++;
            }

            else if (array1[ind1]>array2[ind2])
            {
                array[ind3] = array2[ind2];
                ind3++;
                ind2++;
            }

            else
            {
            array[ind3] = array2[ind2];
            array[ind4] = array1[ind1];
            
            ind1++;
            ind2++;
            ind3++;
            ind4--;
            }
        }

    }

printf("Union: ");
    for(int i=0; i<=ind4; i++)
    {
        printf(" %d", array[i]);
    }

printf("\nIntersection: ");    
    for(int i=ind4+1; i<n+m; i++)
    {
        printf(" %d", array[i]);
    }
   
    return 0;
}
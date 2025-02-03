#include <stdio.h>
int main()
{
    int n;
    printf("\n Enter the array size : = ");
    scanf("%d", &n);
    int arr[n]; // array of n size

    printf("\n Enter the values of array : = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // to delete the element in array 
    int delete ;
    printf("\n Enter the Element number to delete : =  ");
    scanf("%d",&delete); // 3 

    delete = delete - 1 ; // 2 
     // to delete the element
    // 0    1   2   3   4                  0   1    2    3    4  
    // 10  20  30   40  50        output : 10  20   40   50   50
    // delete = 3 - 1 = 2
    for (int  i = 0; i < n - 1  ; i++) // 4
    {
        if (i >= delete) // 4 >= 2 
        {
           // arr[4] = arr[4]
            arr[i] = arr[i+1];
        }
    }
    
    printf("\n the array elements after deleting a %d element  : =  \n",delete+1);
    n = n - 1 ;
    for (int  i = 0; i < n; i++)
    {
        printf("%d  , ",arr[i]);
    }

    return 0;
}
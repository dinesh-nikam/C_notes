#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num); // 5

    int arr[num + 1];  // 6
    printf("The Elements are : ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index;
    printf("Enter the index :");
    scanf("%d", &index);
    index = index - 1;

    int element;
    printf("Enter the element :");
    scanf("%d", &element);

    // to insert the element
    // 0    1   2   3   4   5              0   1    2    3   4   5
    // 10  20  30   40  50        output : 10  20   55  30   40  50
    // v = 55 , index = 3 - 1 = 2
    
    for (int i = num ; i >= 0; i--) // 2
    {
        if (i > index) // 2 > 2 
        {
            arr[i] = arr[i - 1];
        }
    }
    arr[index] = element; 

    printf("\n the array after inserting element = %d  \n", element);
  
    for (int i = 0; i < num + 1; i++)
    {
        printf("%d  , ", arr[i]);
    }

    return 0;
}
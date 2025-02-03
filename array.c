/**
 * @brief Defines an array of integers.
 *
 * This array is used to store a sequence of integer values.
 * The syntax for defining an array in C is as follows:
 *
 *     data_type array_name[array_size];
 *
 * Example:
 *
 *     int myArray[10];
 *
 * Where 'int' is the data type, 'myArray' is the name of the array,
 * and '10' is the size of the array, indicating it can hold 10 integers.
 */
#include <stdio.h>
int main()
{
    int no_of_ele;
    printf("enter the no of elements");
    scanf("%d", &no_of_ele);
    float arr[no_of_ele];
    for (int i = 0; i < no_of_ele; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < no_of_ele; i++)
    {
        printf("a[%d]= %.2f ", i, arr[i]);
    }
}

// int roll_num[]= {1,2,3,4, 5,6};
// int length= sizeof(roll_num)/sizeof(roll_num[0]);

// for(int i=0; i<length; i++){
// printf("%d ", sizeof(roll_num[i]));
// }

// }

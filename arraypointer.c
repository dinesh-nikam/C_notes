#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr;
    ptr = arr; // base address

    for (int i = 0; i < size; i++)
    {
        printf("%d\n ", *(ptr + i));
    }
     for (int i = 0; i < size; i++)
    {
        printf("Value: %d, Address: %p\n", *(ptr + i), (ptr + i));
    }
    return 0;
}

/**
 * This function demonstrates the concept of array pointers in C.
 * 
 * An array pointer is a pointer that points to an entire array rather than a single element.
 * This allows for efficient manipulation and passing of arrays to functions.
 * 
 * The function showcases:
 * - Declaration of an array pointer.
 * - Initialization of the array pointer to point to an array.
 * - Accessing and modifying elements of the array through the pointer.
 * 
 * Key concepts:
 * - Array pointers can be declared using the syntax: `type (*pointer_name)[size]`.
 * - Array pointers can be assigned the address of an array using the address-of operator `&`.
 * - Elements of the array can be accessed using the dereference operator `*` and array indexing.
 * 
 * Example usage:
 * ```
 * int arr[5] = {1, 2, 3, 4, 5};
 * int (*ptr)[5] = &arr;
 * 
 * // Accessing elements
 * int first_element = (*ptr)[0]; // 1
 * int second_element = (*ptr)[1]; // 2
 * 
 * // Modifying elements
 * (*ptr)[2] = 10; // arr[2] is now 10
 * ```
 */



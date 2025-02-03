#include <stdio.h>
int main()
{
    //     5. Sum of Even and Odd Numbers in Series
    // Question:
    // Write a C program to read an integer limit from the user and calculate the sum of even numbers and odd numbers separately in the series from 1 to limit. Solve this using any loop.
    // Input:
    // An integer value for limit (e.g., 6).
    // Output:
    // The sum of even and odd numbers.
    // Example:
    // If limit = 6, the output should be:
    // Sum of Even Numbers = 12 (2 + 4 + 6 = 12)
    // Sum of Odd Numbers = 9 (1 + 3 + 5 = 9)
    int limit, sum = 0, i;
    printf("Enter An integer value for limit:");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            i++;
        }
    }
    printf("sum of even number are:\n %d", sum);
    for (i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("sum of odd number are :\n%d", sum);
}
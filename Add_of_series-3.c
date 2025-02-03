#include <stdio.h>
int main()
{
    //     3. Addition of Series
    // Question:
    // Write a C program to read an integer limit from the user and calculate the sum of all numbers from 1 to limit. Solve this using any loop.
    // Input:
    // An integer value for limit (e.g., 5).
    // Output:
    // The sum of the numbers from 1 to limit.
    // Example:
    // If limit = 5, the output should be:
    // Sum = 15 (since 1 + 2 + 3 + 4 + 5 = 15)
    int i, num, sum = 0;
    printf("An integer value for limit: \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        
    sum += i;
    i++;
    printf("sum =%d ", sum);
}
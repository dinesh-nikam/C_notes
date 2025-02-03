// Assignment on Loops : 
// 1. Print Series from 1 to Limit
// Question:
// Write a C program to read an integer limit from the user and print the series of numbers from 1 to limit. Solve this using any loop.
// Input:
// An integer value for limit (e.g., 5).
// Output:
// The series of numbers from 1 to limit.
// Example:
// If limit = 5, the output should be:
// 1 2 3 4 5
#include<stdio.h>
int main()
{
int  limit;
printf(" Enter An integer value for limit");
scanf("%d", &limit);

    for (int i=1; i<=limit;i++){
       
           printf("%d ", i);
        
    }

}


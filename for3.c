#include <stdio.h>
int main()

{
    // . Write a program to print all numbers divisible by 3 and 5 between 1 and 100 using a for loop.
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d \n",i);
        }
        // else{

        // }
    }
}
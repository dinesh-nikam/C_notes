// 2. Relational Operators
// Problem:
// Write a program that takes two integers as input and calculates whether:

// The first number is greater than the second.
// The first number is less than the second.
// The numbers are equal.
// Print the results as 1 for true and 0 for false.

#include<stdio.h>
int main(){
    int a, b;
    printf("enter  any two  number");
    scanf("%d %d", &a, &b);
    printf("the first number is greater than second: %d\n", a > b);
    printf(" The first number is less than the second.:%d\n", a < b);
    printf("The numbers are equal.",a == b);
    return 0;
}
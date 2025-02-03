// 1. Arithmetic Operators
// Problem:
// Write a program that reads two integers and prints their:

// Sum
// Difference
// Product
// Quotient
// Remainder
#include<stdio.h>
int main(){
    int num1, num2, sum, Difference, Product, quotient, reminder;
    printf("enter any two number :\n");
    scanf("%d %d", &num1, &num2);
    sum=num1+num2;
    printf("the Sum of two number is :%d\n", sum);
    Difference=num1-num2;
    printf("the Difference of two number is :%d\n", Difference);
    Product=num1*num2;
    printf("the Product of two number is :%d\n", Product);
    quotient=num1/num2;
    printf("the Quotient of two number is :%d\n", quotient);
    reminder=num1%num2;
    printf("the Reminder of two number is :%d\n", reminder);
    



}
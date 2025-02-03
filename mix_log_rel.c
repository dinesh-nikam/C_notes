// 4. Mixed Arithmetic and Relational Operators
// Problem:
// Write a program that takes two numbers, calculates their sum, and checks:

// If the sum is greater than 50.
// If the sum is less than or equal to 50.
// Print the results directly as 1 (true) or 0 (false).
#include<stdio.h>
int main(){

int num1, num2 ;
printf("enter any two number :\n");
    scanf("%d %d", &num1, &num2);
  int  sum=num1+num2;
    printf("the Sum of two number is :%d\n", sum);

    printf("%d\n ",sum>50);
       printf("%d\n ",sum<=50);
}
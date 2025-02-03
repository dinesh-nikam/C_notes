// . Logical Operators with User Input
// Problem:
// Write a program that reads two numbers and checks:

// If both numbers are positive.
// If at least one number is even.
// If neither number is zero.
// Print the results as 1 for true and 0 for false.

#include<stdio.h>
int main(){

int num1, num2 ;
printf("enter any two number :\n");
    scanf("%d %d", &num1, &num2);

    printf("%d  \n", num1>=0 && num2 >=0);
    printf("%d  \n",num1 % 2==0 || num2 % 2==0);
    printf("%d  \n", num1!=0 && num2 !=0);
}
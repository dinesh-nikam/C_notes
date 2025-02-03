// 3. Logical Operators
// Problem:
// Write a program that takes three integers and prints:

// The result of (num1 > 0) && (num2 > 0) && (num3 > 0)
// The result of (num1 % 2 == 0)  (num3 % 2 == 0)
// The negation of (num1 > num2)
#include<stdio.h>
int main(){
    int num1, num2,num3;
    printf("enter any three number");
    scanf("%d %d %d", &num1 , &num2, &num3);
    int result1= (num1 > 0) && (num2 > 0) && (num3 > 0);
    printf("(num1 > 0) && (num2 > 0) && (num3 > 0) is %d\n", result1);
    int result2= (num1 % 2 == 0) && (num3 % 2 == 0);
    printf("(num1 % 2 == 0) && (num3 % 2 == 0) is %d\n", result2);
    int result3= !(num1 > num2);
    printf("(!(num1 > num2) is %d\n", result3);



}
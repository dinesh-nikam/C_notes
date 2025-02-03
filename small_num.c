#include<stdio.h>
int main()
{
//  Find the Smallest of Two Numbers Using Conditional Operator
// Use the ternary operator ? : to determine the smallest of two numbers.
int a,b;
printf("enter the first and second number:");
scanf("%d%d", &a,&b);
(a<b)?printf(" a is smallest number"): printf(" b is smallest number");
}
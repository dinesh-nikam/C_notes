#include<stdio.h>
int main(){
    
// 9. Factorial of a Number
// Question:
// Write a C program to read an integer N from the user and calculate the factorial of N. Solve this using any loop.
// Input:
// An integer value N (e.g., N = 4).
// Output:
// The factorial of N.
// Example:
// If N = 4, the output should be:
// Factorial = 24 (since 4! = 4 × 3 × 2 × 1 = 24)

int num ,fact= 1;
printf("Enter the number that factorial you want to print \n");
scanf("%d", &num);
for (int i=1;i<=num; i++){
fact*=i;


}
printf("factorial of number is :\n %d",fact);

}
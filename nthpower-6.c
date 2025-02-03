#include<stdio.h>
#include<math.h>
int main(){
//     6. Nth Power of a Number
// Question:
// Write a C program to read two integers x and n from the user and calculate the nth power of x. Use any loop for the calculation.
// Hint: nth power means multiplying x by itself n times.
// Input:
// Two integers: x (base) and n (exponent) (e.g., x = 2, n = 4).
// Output:
// The nth power of x.
// Example:
// If x = 2 and n = 4, the output should be:
// Result = 16 (since 2 × 2 × 2 × 2 = 16)

int x ,n, result;
printf("enter the x integer value:");
scanf("%d", &x);
printf("enter the n integer value:");
scanf("%d", &n);

result=pow(x,n);
printf("result=%d",result);

}
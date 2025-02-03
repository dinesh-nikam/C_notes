#include<stdio.h>
int main(){
//     2. Print Series in Reverse
// Question:
// Write a C program to read an integer limit from the user and print the series of numbers in reverse order from limit to 1. Solve this using any loop.
// Input:
// An integer value for limit (e.g., 5).
// Output:
// The series of numbers from limit to 1.
// Example:
// If limit = 5, the output should be:
// 5 4 3 2 1

int num,limit=1;
printf(" Enter An integer value for limit: \n");
scanf("%d",&num);
for (int i= num; i>=1; i--){
    printf("%d ",i);
}
}
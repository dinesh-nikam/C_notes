

// 8. Print Multiplication Table (1 to 10)
// Question:
// Write a C program to print the multiplication tables from 1 to 10. Solve this using any loop.
// Input:
// No input is required.
// Output:
// The multiplication tables for numbers 1 to 10.
// Example:
// The output should look like this:
// 1 * 1 = 1, 2 * 1 = 2, ..., 10 * 1 = 10  
// 1 * 2 = 2, 2 * 2 = 4, ..., 10 * 2 = 20  
// ... 
// 1 * 10 = 10, 2 * 10 = 20, ..., 10 * 10 = 100

#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d * %d =%d \n",i,j,(i*j));
        }
    }
}
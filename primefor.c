#include <stdio.h>
#include<math.h>

int main()
{
    // 1. Write a program to check if a number is prime using a for loop.
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    
//     if(num<=1){
// printf("%d is not prime number",num);
//    return 0;
//     }

        for(int i=2; i<num; i++){
            if(num % i == 0){
               printf("%d is not prime number", num);
               return 0;
            }
        }
    
    printf("%d is prime number", num);
    return 0;
}